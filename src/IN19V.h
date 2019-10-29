#ifndef NIXIE_TUBE_IN19V_H
#define NIXIE_TUBE_IN19V_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
class IN19V : public NixieTube
{
public:
    IN19V(SN74141 *driver, uint8_t *pins);
    ShowResult showPi();
    ShowResult showA_B();
    ShowResult showTilde();
    ShowResult showLessThan();
    ShowResult showMinus();
    ShowResult showGreaterThan();
    ShowResult showPlus();
    ShowResult showDb();
};
} // namespace NixieTubeLib

#endif
