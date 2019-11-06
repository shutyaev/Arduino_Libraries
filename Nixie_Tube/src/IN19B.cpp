#include "IN19B.h"

using namespace NixieTubeLib;

IN19B::IN19B(SN74141 *driver, uint8_t *pins) : NixieTube::NixieTube(driver, pins, 8)
{
}

NixieTube::ShowResult IN19B::showS()
{
    return show(pins_[PIN_S]);
}

NixieTube::ShowResult IN19B::showF()
{
    return show(pins_[PIN_F]);
}

NixieTube::ShowResult IN19B::showH()
{
    return show(pins_[PIN_H]);
}

NixieTube::ShowResult IN19B::showV()
{
    return show(pins_[PIN_V]);
}

NixieTube::ShowResult IN19B::showT()
{
    return show(pins_[PIN_T]);
}

NixieTube::ShowResult IN19B::showA()
{
    return show(pins_[PIN_A]);
}

NixieTube::ShowResult IN19B::showOmega()
{
    return show(pins_[PIN_OMEGA]);
}

NixieTube::ShowResult IN19B::showHz()
{
    return show(pins_[PIN_HZ]);
}
