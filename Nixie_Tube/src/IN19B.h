#ifndef NIXIE_TUBE_IN19B_H
#define NIXIE_TUBE_IN19B_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
class IN19B : public NixieTube
{
private:
    static const uint8_t kPinS = 0;
    static const uint8_t kPinF = 1;
    static const uint8_t kPinH = 2;
    static const uint8_t kPinV = 3;
    static const uint8_t kPinT = 4;
    static const uint8_t kPinA = 5;
    static const uint8_t kPinOmega = 6;
    static const uint8_t kPinHz = 7;

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
