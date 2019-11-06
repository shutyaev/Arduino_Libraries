#ifndef NIXIE_TUBE_IN19A_H
#define NIXIE_TUBE_IN19A_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
class IN19A : public NixieTube
{
private:
    static const uint8_t PIN_PCT = 0;
    static const uint8_t PIN_M_MAJUSCULE = 1;
    static const uint8_t PIN_P = 2;
    static const uint8_t PIN_M_MINUSCULE = 3;
    static const uint8_t PIN_K = 4;
    static const uint8_t PIN_N = 5;
    static const uint8_t PIN_MU = 6;
    static const uint8_t PIN_DEG_C = 7;

public:
    IN19A(SN74141 *driver, uint8_t *pins);
    ShowResult showPercent();
    ShowResult showM_Majuscule();
    ShowResult showP();
    ShowResult showM_Minuscule();
    ShowResult showK();
    ShowResult showN();
    ShowResult showMu();
    ShowResult showDegreeCelsius();
};
} // namespace NixieTubeLib

#endif
