#include "IN19V.h"

using namespace NixieTubeLib;

IN19V::IN19V(SN74141 *driver, uint8_t *pins) : NixieTube::NixieTube(driver, pins, 8)
{
}

NixieTube::ShowResult IN19V::showPi()
{
    return show(pins_[PIN_PI]);
}

NixieTube::ShowResult IN19V::showA_B()
{
    return show(pins_[PIN_A_B]);
}

NixieTube::ShowResult IN19V::showTilde()
{
    return show(pins_[PIN_TILDE]);
}

NixieTube::ShowResult IN19V::showLessThan()
{
    return show(pins_[PIN_LESS_THAN]);
}

NixieTube::ShowResult IN19V::showMinus()
{
    return show(pins_[PIN_MINUS]);
}

NixieTube::ShowResult IN19V::showGreaterThan()
{
    return show(pins_[PIN_GREATER_THAN]);
}

NixieTube::ShowResult IN19V::showPlus()
{
    return show(pins_[PIN_PLUS]);
}

NixieTube::ShowResult IN19V::showDb()
{
    return show(pins_[PIN_DB]);
}
