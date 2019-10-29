#include "IN19A.h"

#define PIN_PCT 0
#define PIN_M_MAJUSCULE 1
#define PIN_P 2
#define PIN_M_MINUSCULE 3
#define PIN_K 4
#define PIN_N 5
#define PIN_MU 6
#define PIN_DEG_C 7

using namespace NixieTubeLib;

IN19A::IN19A(SN74141 *driver, uint8_t *pins) : NixieTube::NixieTube(driver, pins)
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

#undef PIN_PCT
#undef PIN_M_MAJUSCULE
#undef PIN_P
#undef PIN_M_MINUSCULE
#undef PIN_K
#undef PIN_N
#undef PIN_MU
#undef PIN_DEG_C
