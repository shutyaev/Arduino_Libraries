#ifndef NIXIE_TUBE_IN14_H
#define NIXIE_TUBE_IN14_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
struct IN14Pins
{
    uint8_t pl;
    uint8_t _1;
    uint8_t _2;
    uint8_t _3;
    uint8_t _4;
    uint8_t _5;
    uint8_t _6;
    uint8_t _7;
    uint8_t _8;
    uint8_t _9;
    uint8_t _0;
    uint8_t pr;
};
class IN14 : public NixieTube
{
private:
    const IN14Pins kDefaultPins = {kPinNone, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, kPinNone};
    IN14Pins pins_;

public:
    IN14(SN74141 *driver);
    IN14(SN74141 *driver, IN14Pins pins);
    void showPointLeft();
    void show1();
    void show2();
    void show3();
    void show4();
    void show5();
    void show6();
    void show7();
    void show8();
    void show9();
    void show0();
    void showPointRight();
};
} // namespace NixieTubeLib

#endif
