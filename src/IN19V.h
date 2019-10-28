#ifndef NIXIE_TUBE_IN19V_H
#define NIXIE_TUBE_IN19V_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
struct IN19VPins
{
    uint8_t pi;
    uint8_t a_b;
    uint8_t tilde;
    uint8_t less_than;
    uint8_t minus;
    uint8_t greater_than;
    uint8_t plus;
    uint8_t db;
};
class IN19V : public NixieTube
{
private:
    IN19VPins pins_;

public:
    IN19V(SN74141 *driver, IN19VPins pins);
    void showPi();
    void showA_B();
    void showTilde();
    void showLessThan();
    void showMinus();
    void showGreaterThan();
    void showPlus();
    void showDb();
};
} // namespace NixieTubeLib

#endif
