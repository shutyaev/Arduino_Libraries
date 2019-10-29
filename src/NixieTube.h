#ifndef NIXIE_TUBE_NIXIE_TUBE_H
#define NIXIE_TUBE_NIXIE_TUBE_H

#include <Arduino.h>
#include "SN74141.h"

namespace NixieTubeLib
{
class NixieTube
{
private:
    SN74141 *driver_;

protected:
    const uint8_t kPinNone = -1;
    NixieTube(SN74141 *driver);
    bool show(uint8_t pin);

public:
    void turnOff();
};
} // namespace NixieTubeLib

#endif
