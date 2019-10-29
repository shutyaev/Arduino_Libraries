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
        return kPinNotConnected;
    }
    SN74141::OutputOnResult result = driver_->outputOn(pin);
    switch (result)
    {
    case SN74141::OutputOnResult::kSuccess:
        return kSuccess;
    case SN74141::OutputOnResult::kOutOfRange:
        return kOutOfRange;
    default:
        return kUnknownError;
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
