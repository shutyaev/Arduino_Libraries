#include "IN19B.h"

using namespace NixieTubeLib;

IN19B::IN19B(SN74141 *driver, uint8_t *pins) : NixieTube::NixieTube(driver, pins, 8)
{
}

NixieTube::ShowResult IN19B::showS()
{
    return show(pins_[kPinS]);
}

NixieTube::ShowResult IN19B::showF()
{
    return show(pins_[kPinF]);
}

NixieTube::ShowResult IN19B::showH()
{
    return show(pins_[kPinH]);
}

NixieTube::ShowResult IN19B::showV()
{
    return show(pins_[kPinV]);
}

NixieTube::ShowResult IN19B::showT()
{
    return show(pins_[kPinT]);
}

NixieTube::ShowResult IN19B::showA()
{
    return show(pins_[kPinA]);
}

NixieTube::ShowResult IN19B::showOmega()
{
    return show(pins_[kPinOmega]);
}

NixieTube::ShowResult IN19B::showHz()
{
    return show(pins_[kPinHz]);
}
