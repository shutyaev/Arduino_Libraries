#include "IN19A.h"

using namespace NixieTubeLib;

IN19A::IN19A(SN74141 *driver, IN19APins pins) : NixieTube::NixieTube(driver)
{
    pins_ = pins;
}

void IN19A::showPercent()
{
    show(pins_.pct);
}

void IN19A::showM_Majuscule()
{
    show(pins_.m_majuscule);
}

void IN19A::showP()
{
    show(pins_.p);
}

void IN19A::showM_Minuscule()
{
    show(pins_.m_minuscule);
}

void IN19A::showK()
{
    show(pins_.k);
}

void IN19A::showN()
{
    show(pins_.n);
}

void IN19A::showMu()
{
    show(pins_.mu);
}

void IN19A::showDegreeCelsius()
{
    show(pins_.deg_c);
}
