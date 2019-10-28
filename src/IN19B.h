#ifndef NIXIE_TUBE_IN19B_H
#define NIXIE_TUBE_IN19B_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
struct IN19BPins
{
    uint8_t s;
    uint8_t f;
    uint8_t h;
    uint8_t v;
    uint8_t t;
    uint8_t a;
    uint8_t omega;
    uint8_t hz;
};
class IN19B : public NixieTube
{
private:
    IN19BPins pins_;

public:
    IN19B(SN74141 *driver, IN19BPins pins);
    void showS();
    void showF();
    void showH();
    void showV();
    void showT();
    void showA();
    void showOmega();
    void showHz();
};
} // namespace NixieTubeLib

#endif
