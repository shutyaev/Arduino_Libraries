#ifndef NIXIE_TUBE_IN19A_H
#define NIXIE_TUBE_IN19A_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
struct IN19APins
{
    uint8_t pct;
    uint8_t m_majuscule;
    uint8_t p;
    uint8_t m_minuscule;
    uint8_t k;
    uint8_t n;
    uint8_t mu;
    uint8_t deg_c;
};
class IN19A : public NixieTube
{
private:
    IN19APins pins_;

public:
    IN19A(SN74141 *driver, IN19APins pins);
    bool showPercent();
    bool showM_Majuscule();
    bool showP();
    bool showM_Minuscule();
    bool showK();
    bool showN();
    bool showMu();
    bool showDegreeCelsius();
};
} // namespace NixieTubeLib

#endif
