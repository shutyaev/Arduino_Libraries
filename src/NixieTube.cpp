#include "NixieTube.h"

using namespace NixieTubeLib;

NixieTube::NixieTube(SN74141 *driver)
{
    driver_ = driver;
}

bool NixieTube::show(uint8_t pin)
{
    if (pin == kPinNone)
    {
        return false; // pin is not connected
    }
    return driver_->outputOn(pin);
}

void NixieTube::turnOff()
{
    driver_->outputOnNone();
}
