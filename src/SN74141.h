#ifndef NIXIE_TUBE_SN74141_H
#define NIXIE_TUBE_SN74141_H

#include <Arduino.h>

namespace NixieTubeLib
{
struct SN74141Pins
{
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
};
class SN74141
{
private:
    static const uint8_t kFunctionTable[11][4];
    SN74141Pins pins_;
    void output(uint8_t out);

public:
    enum OutputOnResult
    {
        SUCCESS,
        UNKNOWN_ERROR,
        OUT_OF_RANGE
    };
    SN74141(SN74141Pins pins);
    void outputOn0();
    void outputOn1();
    void outputOn2();
    void outputOn3();
    void outputOn4();
    void outputOn5();
    void outputOn6();
    void outputOn7();
    void outputOn8();
    void outputOn9();
    void outputOnNone();
    OutputOnResult outputOn(uint8_t out);
};
} // namespace NixieTubeLib

#endif
