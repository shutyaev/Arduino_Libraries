#include "IN19B.h"

#define PIN_S 0
#define PIN_F 1
#define PIN_H 2
#define PIN_V 3
#define PIN_T 4
#define PIN_A 5
#define PIN_OMEGA 6
#define PIN_HZ 7

using namespace NixieTubeLib;

IN19B::IN19B(SN74141 *driver, uint8_t *pins) : NixieTube::NixieTube(driver, pins)
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

#undef PIN_S
#undef PIN_F
#undef PIN_H
#undef PIN_V
#undef PIN_T
#undef PIN_A
#undef PIN_OMEGA
#undef PIN_HZ
