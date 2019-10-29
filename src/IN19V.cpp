#include "IN19V.h"

using namespace NixieTubeLib;

IN19V::IN19V(SN74141 *driver, IN19VPins pins) : NixieTube::NixieTube(driver)
{
    pins_ = pins;
}

NixieTube::ShowResult IN19V::showPi()
{
    return show(pins_.pi);
}

NixieTube::ShowResult IN19V::showA_B()
{
    return show(pins_.a_b);
}

NixieTube::ShowResult IN19V::showTilde()
{
    return show(pins_.tilde);
}

NixieTube::ShowResult IN19V::showLessThan()
{
    return show(pins_.less_than);
}

NixieTube::ShowResult IN19V::showMinus()
{
    return show(pins_.minus);
}

NixieTube::ShowResult IN19V::showGreaterThan()
{
    return show(pins_.greater_than);
}

NixieTube::ShowResult IN19V::showPlus()
{
    return show(pins_.plus);
}

NixieTube::ShowResult IN19V::showDb()
{
    return show(pins_.db);
}
