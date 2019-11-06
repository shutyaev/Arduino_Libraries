#ifndef NIXIE_TUBE_IN14_H
#define NIXIE_TUBE_IN14_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
class IN14 : public NixieTube
{
private:
    static const uint8_t PIN_PL = 0;
    static const uint8_t PIN_1 = 1;
    static const uint8_t PIN_2 = 2;
    static const uint8_t PIN_3 = 3;
    static const uint8_t PIN_4 = 4;
    static const uint8_t PIN_5 = 5;
    static const uint8_t PIN_6 = 6;
    static const uint8_t PIN_7 = 7;
    static const uint8_t PIN_8 = 8;
    static const uint8_t PIN_9 = 9;
    static const uint8_t PIN_0 = 10;
    static const uint8_t PIN_PR = 11;
    static const uint8_t DEFAULT_PINS[12];

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
