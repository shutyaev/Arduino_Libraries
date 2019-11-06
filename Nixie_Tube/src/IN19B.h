#ifndef NIXIE_TUBE_IN19B_H
#define NIXIE_TUBE_IN19B_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
class IN19B : public NixieTube
{
private:
    static const uint8_t PIN_S = 0;
    static const uint8_t PIN_F = 1;
    static const uint8_t PIN_H = 2;
    static const uint8_t PIN_V = 3;
    static const uint8_t PIN_T = 4;
    static const uint8_t PIN_A = 5;
    static const uint8_t PIN_OMEGA = 6;
    static const uint8_t PIN_HZ = 7;

public:
    IN19B(SN74141 *driver, uint8_t *pins);
    ShowResult showS();
    ShowResult showF();
    ShowResult showH();
    ShowResult showV();
    ShowResult showT();
    ShowResult showA();
    ShowResult showOmega();
    ShowResult showHz();
};
} // namespace NixieTubeLib

#endif
