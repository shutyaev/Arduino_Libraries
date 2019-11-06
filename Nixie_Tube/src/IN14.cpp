#include "IN14.h"

using namespace NixieTubeLib;

const uint8_t IN14::DEFAULT_PINS[12] = {PIN_NONE, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, PIN_NONE};

IN14::IN14(SN74141 *driver, uint8_t *pins) : NixieTube::NixieTube(driver, pins, 12)
{
}

IN14::IN14(SN74141 *driver) : NixieTube::NixieTube(driver, DEFAULT_PINS, 12)
{
}

NixieTube::ShowResult IN14::showPointLeft()
{
    return show(pins_[PIN_PL]);
}

NixieTube::ShowResult IN14::show1()
{
    return show(pins_[PIN_1]);
}

NixieTube::ShowResult IN14::show2()
{
    return show(pins_[PIN_2]);
}

NixieTube::ShowResult IN14::show3()
{
    return show(pins_[PIN_3]);
}

NixieTube::ShowResult IN14::show4()
{
    return show(pins_[PIN_4]);
}

NixieTube::ShowResult IN14::show5()
{
    return show(pins_[PIN_5]);
}

NixieTube::ShowResult IN14::show6()
{
    return show(pins_[PIN_6]);
}

NixieTube::ShowResult IN14::show7()
{
    return show(pins_[PIN_7]);
}

NixieTube::ShowResult IN14::show8()
{
    return show(pins_[PIN_8]);
}

NixieTube::ShowResult IN14::show9()
{
    return show(pins_[PIN_9]);
}

NixieTube::ShowResult IN14::show0()
{
    return show(pins_[PIN_0]);
}

NixieTube::ShowResult IN14::showPointRight()
{
    return show(pins_[PIN_PR]);
}
