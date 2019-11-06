#ifndef NIXIE_TUBE_SN74141_H
#define NIXIE_TUBE_SN74141_H

#include <Arduino.h>

namespace NixieTubeLib
{
class SN74141
{
private:
    static const uint8_t I_A = 0;
    static const uint8_t I_B = 1;
    static const uint8_t I_C = 2;
    static const uint8_t I_D = 3;
    static const uint8_t O_NONE = 10;
    static const uint8_t kFunctionTable[11][4];
    const uint8_t *pins_;
    void output(uint8_t pin);

public:
    enum OutputOnResult
    {
        kSuccess,
        kUnknownError,
        kOutOfRange
    };
    static const uint8_t O0 = 0;
    static const uint8_t O1 = 1;
    static const uint8_t O2 = 2;
    static const uint8_t O3 = 3;
    static const uint8_t O4 = 4;
    static const uint8_t O5 = 5;
    static const uint8_t O6 = 6;
    static const uint8_t O7 = 7;
    static const uint8_t O8 = 8;
    static const uint8_t O9 = 9;
    SN74141(const uint8_t *pins);
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
    OutputOnResult outputOn(uint8_t pin);
};
} // namespace NixieTubeLib

#endif
