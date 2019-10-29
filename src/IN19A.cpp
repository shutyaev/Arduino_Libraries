#include "IN19A.h"

using namespace NixieTubeLib;

IN19A::IN19A(SN74141 *driver, IN19APins pins) : NixieTube::NixieTube(driver)
{
    pins_ = pins;
}

bool IN19A::showPercent()
{
    return show(pins_.pct);
}

bool IN19A::showM_Majuscule()
{
    return show(pins_.m_majuscule);
}

bool IN19A::showP()
{
    return show(pins_.p);
}

bool IN19A::showM_Minuscule()
{
    return show(pins_.m_minuscule);
}

bool IN19A::showK()
{
    return show(pins_.k);
}

bool IN19A::showN()
{
    return show(pins_.n);
}

bool IN19A::showMu()
{
    return show(pins_.mu);
}

bool IN19A::showDegreeCelsius()
{
    return show(pins_.deg_c);
}
