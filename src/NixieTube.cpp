#include <stdexcept>
#include "NixieTube.h"

using namespace NixieTubeLib;

NixieTube::NixieTube(SN74141 *driver)
{
    driver_ = driver;
}

void NixieTube::show(uint8_t pin)
{
    if (pin == kPinNone)
    {
        throw std::logic_error("pin is not connected");
    }
    driver_->outputOn(pin);
}

void NixieTube::turnOff()
{
    driver_->outputOnNone();
}
