#ifndef NIXIE_TUBE_NIXIE_TUBE_H
#define NIXIE_TUBE_NIXIE_TUBE_H

#include <Arduino.h>
#include "SN74141.h"

namespace NixieTubeLib
{
class NixieTube
{
public:
    enum ShowResult
    {
        SUCCESS,
        UNKNOWN_ERROR,
        PIN_NOT_CONNECTED,
        OUT_OF_RANGE
    };
    void turnOff();
    void train(unsigned long duration);

protected:
    static const uint8_t PIN_NONE = -1;
    const uint8_t *pins_;
    uint8_t pinCount_;
    NixieTube(SN74141 *driver, const uint8_t *pins, uint8_t pinCount);
    ShowResult show(uint8_t pin);

private:
    SN74141 *driver_;
};
} // namespace NixieTubeLib

#endif
