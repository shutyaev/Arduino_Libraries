#include "IN14.h"

using namespace NixieTubeLib;

IN14::IN14(SN74141 *driver, IN14Pins pins) : NixieTube::NixieTube(driver)
{
    pins_ = pins;
}

IN14::IN14(SN74141 *driver) : IN14::IN14(driver, kDefaultPins)
{
}

void IN14::showPointLeft()
{
    show(pins_.pl);
}

void IN14::show1()
{
    show(pins_._1);
}

void IN14::show2()
{
    show(pins_._2);
}

void IN14::show3()
{
    show(pins_._3);
}

void IN14::show4()
{
    show(pins_._4);
}

void IN14::show5()
{
    show(pins_._5);
}

void IN14::show6()
{
    show(pins_._6);
}

void IN14::show7()
{
    show(pins_._7);
}

void IN14::show8()
{
    show(pins_._8);
}

void IN14::show9()
{
    show(pins_._9);
}

void IN14::show0()
{
    show(pins_._0);
}

void IN14::showPointRight()
{
    show(pins_.pr);
}
