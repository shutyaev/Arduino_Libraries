#include "IN19V.h"

using namespace NixieTubeLib;

IN19V::IN19V(SN74141 *driver, IN19VPins pins) : NixieTube::NixieTube(driver)
{
    pins_ = pins;
}

bool IN19V::showPi()
{
    return show(pins_.pi);
}

bool IN19V::showA_B()
{
    return show(pins_.a_b);
}

bool IN19V::showTilde()
{
    return show(pins_.tilde);
}

bool IN19V::showLessThan()
{
    return show(pins_.less_than);
}

bool IN19V::showMinus()
{
    return show(pins_.minus);
}

bool IN19V::showGreaterThan()
{
    return show(pins_.greater_than);
}

bool IN19V::showPlus()
{
    return show(pins_.plus);
}

bool IN19V::showDb()
{
    return show(pins_.db);
}
