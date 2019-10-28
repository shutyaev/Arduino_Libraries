#ifndef NIXIE_TUBE_SN74141_h
#define NIXIE_TUBE_SN74141_h

#include <Arduino.h>

namespace nixie_tube
{
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
    uint8_t a_;
    uint8_t b_;
    uint8_t c_;
    uint8_t d_;
    void Output(uint8_t out);

public:
    SN74141(uint8_t a, uint8_t b, uint8_t c, uint8_t d);
    void OutputOn0();
    void OutputOn1();
    void OutputOn2();
    void OutputOn3();
    void OutputOn4();
    void OutputOn5();
    void OutputOn6();
    void OutputOn7();
    void OutputOn8();
    void OutputOn9();
    void OutputOnNone();
    void OutputOn(uint8_t out);
};
} // namespace nixie_tube

#endif
