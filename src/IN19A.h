#ifndef NIXIE_TUBE_IN19A_H
#define NIXIE_TUBE_IN19A_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
class IN19A : public NixieTube
{
private:
    static const uint8_t kPinPct = 0;
    static const uint8_t kPinM_Majuscule = 1;
    static const uint8_t kPinP = 2;
    static const uint8_t kPinM_Minuscule = 3;
    static const uint8_t kPinK = 4;
    static const uint8_t kPinN = 5;
    static const uint8_t kPinMu = 6;
    static const uint8_t kPinDegC = 7;

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
