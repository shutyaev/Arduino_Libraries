#include "IN19A.h"

using namespace NixieTubeLib;

IN19A::IN19A(SN74141 *driver, uint8_t *pins) : NixieTube::NixieTube(driver, pins, 8)
{
}

NixieTube::ShowResult IN19A::showPercent()
{
    return show(pins_[PIN_PCT]);
}

NixieTube::ShowResult IN19A::showM_Majuscule()
{
    return show(pins_[PIN_M_MAJUSCULE]);
}

NixieTube::ShowResult IN19A::showP()
{
    return show(pins_[PIN_P]);
}

NixieTube::ShowResult IN19A::showM_Minuscule()
{
    return show(pins_[PIN_M_MINUSCULE]);
}

NixieTube::ShowResult IN19A::showK()
{
    return show(pins_[PIN_K]);
}

NixieTube::ShowResult IN19A::showN()
{
    return show(pins_[PIN_N]);
}

NixieTube::ShowResult IN19A::showMu()
{
    return show(pins_[PIN_MU]);
}

NixieTube::ShowResult IN19A::showDegreeCelsius()
{
    return show(pins_[PIN_DEG_C]);
}
