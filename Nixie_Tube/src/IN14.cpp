#include "IN14.h"

#define PIN_PL 0
#define PIN_1 1
#define PIN_2 2
#define PIN_3 3
#define PIN_4 4
#define PIN_5 5
#define PIN_6 6
#define PIN_7 7
#define PIN_8 8
#define PIN_9 9
#define PIN_0 10
#define PIN_PR 11

using namespace NixieTubeLib;

const uint8_t IN14::kDefaultPins[12] = {kPinNone, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, kPinNone};

IN14::IN14(SN74141 *driver, uint8_t *pins) : NixieTube::NixieTube(driver, pins)
{
}

IN14::IN14(SN74141 *driver) : NixieTube::NixieTube(driver, kDefaultPins)
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

#undef PIN_PL
#undef PIN_1
#undef PIN_2
#undef PIN_3
#undef PIN_4
#undef PIN_5
#undef PIN_6
#undef PIN_7
#undef PIN_8
#undef PIN_9
#undef PIN_0
#undef PIN_PR
