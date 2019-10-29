#include "NixieTube.h"

using namespace NixieTubeLib;

NixieTube::NixieTube(SN74141 *driver)
{
    driver_ = driver;
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
