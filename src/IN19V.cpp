#include "IN19V.h"

#define PIN_PI 0
#define PIN_A_B 1
#define PIN_TILDE 2
#define PIN_LESS_THAN 3
#define PIN_MINUS 4
#define PIN_GREATER_THAT 5
#define PIN_PLUS 6
#define PIN_DB 7

using namespace NixieTubeLib;

IN19V::IN19V(SN74141 *driver, uint8_t *pins) : NixieTube::NixieTube(driver, pins)
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
    return show(pins_[PIN_GREATER_THAT]);
}

NixieTube::ShowResult IN19V::showPlus()
{
    return show(pins_[PIN_PLUS]);
}

NixieTube::ShowResult IN19V::showDb()
{
    return show(pins_[PIN_DB]);
}

#undef PIN_PI
#undef PIN_A_B
#undef PIN_TILDE
#undef PIN_LESS_THAN
#undef PIN_MINUS
#undef PIN_GREATER_THAT
#undef PIN_PLUS
#undef PIN_DB
