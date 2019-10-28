#include "IN19V.h"

using namespace NixieTubeLib;

IN19V::IN19V(SN74141 *driver, IN19VPins pins) : NixieTube::NixieTube(driver)
{
    pins_ = pins;
}

void IN19V::showPi()
{
    show(pins_.pi);
}

void IN19V::showA_B()
{
    show(pins_.a_b);
}

void IN19V::showTilde()
{
    show(pins_.tilde);
}

void IN19V::showLessThan()
{
    show(pins_.less_than);
}

void IN19V::showMinus()
{
    show(pins_.minus);
}

void IN19V::showGreaterThan()
{
    show(pins_.greater_than);
}

void IN19V::showPlus()
{
    show(pins_.plus);
}

void IN19V::showDb()
{
    show(pins_.db);
}
