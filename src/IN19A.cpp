#include "IN19A.h"

using namespace NixieTubeLib;

IN19A::IN19A(SN74141 *driver, IN19APins pins) : NixieTube::NixieTube(driver)
{
    pins_ = pins;
}

NixieTube::ShowResult IN19A::showPercent()
{
    return show(pins_.pct);
}

NixieTube::ShowResult IN19A::showM_Majuscule()
{
    return show(pins_.m_majuscule);
}

NixieTube::ShowResult IN19A::showP()
{
    return show(pins_.p);
}

NixieTube::ShowResult IN19A::showM_Minuscule()
{
    return show(pins_.m_minuscule);
}

NixieTube::ShowResult IN19A::showK()
{
    return show(pins_.k);
}

NixieTube::ShowResult IN19A::showN()
{
    return show(pins_.n);
}

NixieTube::ShowResult IN19A::showMu()
{
    return show(pins_.mu);
}

NixieTube::ShowResult IN19A::showDegreeCelsius()
{
    return show(pins_.deg_c);
}
