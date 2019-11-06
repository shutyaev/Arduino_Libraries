#include "IN19A.h"

using namespace NixieTubeLib;

IN19A::IN19A(SN74141 *driver, uint8_t *pins) : NixieTube::NixieTube(driver, pins, 8)
{
}

NixieTube::ShowResult IN19A::showPercent()
{
    return show(pins_[kPinPct]);
}

NixieTube::ShowResult IN19A::showM_Majuscule()
{
    return show(pins_[kPinM_Majuscule]);
}

NixieTube::ShowResult IN19A::showP()
{
    return show(pins_[kPinP]);
}

NixieTube::ShowResult IN19A::showM_Minuscule()
{
    return show(pins_[kPinM_Minuscule]);
}

NixieTube::ShowResult IN19A::showK()
{
    return show(pins_[kPinK]);
}

NixieTube::ShowResult IN19A::showN()
{
    return show(pins_[kPinN]);
}

NixieTube::ShowResult IN19A::showMu()
{
    return show(pins_[kPinMu]);
}

NixieTube::ShowResult IN19A::showDegreeCelsius()
{
    return show(pins_[kPinDegC]);
}
