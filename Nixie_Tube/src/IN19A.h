#ifndef NIXIE_TUBE_IN19A_H
#define NIXIE_TUBE_IN19A_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
class IN19A : public NixieTube
{
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
