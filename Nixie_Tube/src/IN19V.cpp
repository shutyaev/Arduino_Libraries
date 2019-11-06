#include "IN19V.h"

using namespace NixieTubeLib;

IN19V::IN19V(SN74141 *driver, uint8_t *pins) : NixieTube::NixieTube(driver, pins, 8)
{
}

NixieTube::ShowResult IN19V::showPi()
{
    return show(pins_[kPinPi]);
}

NixieTube::ShowResult IN19V::showA_B()
{
    return show(pins_[kPinA_B]);
}

NixieTube::ShowResult IN19V::showTilde()
{
    return show(pins_[kPinTilde]);
}

NixieTube::ShowResult IN19V::showLessThan()
{
    return show(pins_[kPinLessThan]);
}

NixieTube::ShowResult IN19V::showMinus()
{
    return show(pins_[kPinMinus]);
}

NixieTube::ShowResult IN19V::showGreaterThan()
{
    return show(pins_[kPinGreaterThan]);
}

NixieTube::ShowResult IN19V::showPlus()
{
    return show(pins_[kPinPlus]);
}

NixieTube::ShowResult IN19V::showDb()
{
    return show(pins_[kPinDB]);
}
