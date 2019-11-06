#include "IN14.h"

using namespace NixieTubeLib;

const uint8_t IN14::kDefaultPins[12] = {kPinNone, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, kPinNone};

IN14::IN14(SN74141 *driver, uint8_t *pins) : NixieTube::NixieTube(driver, pins, 12)
{
}

IN14::IN14(SN74141 *driver) : NixieTube::NixieTube(driver, kDefaultPins, 12)
{
}

NixieTube::ShowResult IN14::showPointLeft()
{
    return show(pins_[kPinPL]);
}

NixieTube::ShowResult IN14::show1()
{
    return show(pins_[kPin1]);
}

NixieTube::ShowResult IN14::show2()
{
    return show(pins_[kPin2]);
}

NixieTube::ShowResult IN14::show3()
{
    return show(pins_[kPin3]);
}

NixieTube::ShowResult IN14::show4()
{
    return show(pins_[kPin4]);
}

NixieTube::ShowResult IN14::show5()
{
    return show(pins_[kPin5]);
}

NixieTube::ShowResult IN14::show6()
{
    return show(pins_[kPin6]);
}

NixieTube::ShowResult IN14::show7()
{
    return show(pins_[kPin7]);
}

NixieTube::ShowResult IN14::show8()
{
    return show(pins_[kPin8]);
}

NixieTube::ShowResult IN14::show9()
{
    return show(pins_[kPin9]);
}

NixieTube::ShowResult IN14::show0()
{
    return show(pins_[kPin0]);
}

NixieTube::ShowResult IN14::showPointRight()
{
    return show(pins_[kPinPR]);
}
