#ifndef NIXIE_TUBE_IN19V_H
#define NIXIE_TUBE_IN19V_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
class IN19V : public NixieTube
{
private:
    static const uint8_t PIN_PI = 0;
    static const uint8_t PIN_A_B = 1;
    static const uint8_t PIN_TILDE = 2;
    static const uint8_t PIN_LESS_THAN = 3;
    static const uint8_t PIN_MINUS = 4;
    static const uint8_t PIN_GREATER_THAN = 5;
    static const uint8_t PIN_PLUS = 6;
    static const uint8_t PIN_DB = 7;

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
