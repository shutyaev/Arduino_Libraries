#include "IN14.h"

using namespace NixieTubeLib;

IN14::IN14(SN74141 *driver, IN14Pins pins) : NixieTube::NixieTube(driver)
{
    pins_ = pins;
}

IN14::IN14(SN74141 *driver) : IN14::IN14(driver, kDefaultPins)
{
}

bool IN14::showPointLeft()
{
    return show(pins_.pl);
}

bool IN14::show1()
{
    return show(pins_._1);
}

bool IN14::show2()
{
    return show(pins_._2);
}

bool IN14::show3()
{
    return show(pins_._3);
}

bool IN14::show4()
{
    return show(pins_._4);
}

bool IN14::show5()
{
    return show(pins_._5);
}

bool IN14::show6()
{
    return show(pins_._6);
}

bool IN14::show7()
{
    return show(pins_._7);
}

bool IN14::show8()
{
    return show(pins_._8);
}

bool IN14::show9()
{
    return show(pins_._9);
}

bool IN14::show0()
{
    return show(pins_._0);
}

bool IN14::showPointRight()
{
    return show(pins_.pr);
}
