#include "NixieTube.h"

using namespace NixieTubeLib;

NixieTube::NixieTube(SN74141 *driver, const uint8_t *pins, uint8_t pinCount)
{
    driver_ = driver;
    pins_ = pins;
    pinCount_ = pinCount;
}

NixieTube::ShowResult NixieTube::show(uint8_t pin)
{
    if (pin == kPinNone)
    {
        return PIN_NOT_CONNECTED;
    }
    SN74141::OutputOnResult result = driver_->outputOn(pin);
    switch (result)
    {
    case SUCCESS:
        return SUCCESS;
    case OUT_OF_RANGE:
        return OUT_OF_RANGE;
    default:
        return UNKNOWN_ERROR;
    }
}

void NixieTube::turnOff()
{
    driver_->outputOnNone();
}

void NixieTube::train(unsigned long duration)
{
    for (uint8_t i = 0; i < pinCount_; i++) {
        uint8_t pin = pins_[i];
        if (pin == kPinNone) {
            continue;
        }
        show(pin);
        delay(duration);
    }
    turnOff();
}
