#ifndef NIXIE_TUBE_IN19V_H
#define NIXIE_TUBE_IN19V_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
class IN19V : public NixieTube
{
private:
    static const uint8_t kPinPi = 0;
    static const uint8_t kPinA_B = 1;
    static const uint8_t kPinTilde = 2;
    static const uint8_t kPinLessThan = 3;
    static const uint8_t kPinMinus = 4;
    static const uint8_t kPinGreaterThan = 5;
    static const uint8_t kPinPlus = 6;
    static const uint8_t kPinDB = 7;

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
