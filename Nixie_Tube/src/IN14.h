#ifndef NIXIE_TUBE_IN14_H
#define NIXIE_TUBE_IN14_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
class IN14 : public NixieTube
{
private:
    static const uint8_t kPinPL = 0;
    static const uint8_t kPin1 = 1;
    static const uint8_t kPin2 = 2;
    static const uint8_t kPin3 = 3;
    static const uint8_t kPin4 = 4;
    static const uint8_t kPin5 = 5;
    static const uint8_t kPin6 = 6;
    static const uint8_t kPin7 = 7;
    static const uint8_t kPin8 = 8;
    static const uint8_t kPin9 = 9;
    static const uint8_t kPin0 = 10;
    static const uint8_t kPinPR = 11;
    static const uint8_t kDefaultPins[12];

public:
    IN14(SN74141 *driver);
    IN14(SN74141 *driver, uint8_t *pins);
    ShowResult showPointLeft();
    ShowResult show1();
    ShowResult show2();
    ShowResult show3();
    ShowResult show4();
    ShowResult show5();
    ShowResult show6();
    ShowResult show7();
    ShowResult show8();
    ShowResult show9();
    ShowResult show0();
    ShowResult showPointRight();
};
} // namespace NixieTubeLib

#endif
