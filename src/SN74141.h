#ifndef NIXIE_TUBE_SN74141_h
#define NIXIE_TUBE_SN74141_h

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
    const uint8_t kFunctionTable[11][4] = {
        {LOW, LOW, LOW, LOW},    // 0
        {HIGH, LOW, LOW, LOW},   // 1
        {LOW, HIGH, LOW, LOW},   // 2
        {HIGH, HIGH, LOW, LOW},  // 3
        {LOW, LOW, HIGH, LOW},   // 4
        {HIGH, LOW, HIGH, LOW},  // 5
        {LOW, HIGH, HIGH, LOW},  // 6
        {HIGH, HIGH, HIGH, LOW}, // 7
        {LOW, LOW, LOW, HIGH},   // 8
        {HIGH, LOW, LOW, HIGH},  // 9
        {HIGH, HIGH, HIGH, HIGH} // NONE
    };
    SN74141Pins pins_;
    void output(uint8_t out);

public:
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
    void outputOn(uint8_t out);
};
} // namespace NixieTubeLib

#endif
