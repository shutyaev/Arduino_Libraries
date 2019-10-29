#include "SN74141.h"

using namespace NixieTubeLib;

const uint8_t SN74141::kFunctionTable[11][4] = {
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

SN74141::SN74141(const uint8_t *pins)
{
    pins_ = pins;
}

void SN74141::output(uint8_t pin)
{
    digitalWrite(pins_[I_A], kFunctionTable[pin][I_A]);
    digitalWrite(pins_[I_B], kFunctionTable[pin][I_B]);
    digitalWrite(pins_[I_C], kFunctionTable[pin][I_C]);
    digitalWrite(pins_[I_D], kFunctionTable[pin][I_D]);
}

void SN74141::outputOn0()
{
    output(O0);
}

void SN74141::outputOn1()
{
    output(O1);
}

void SN74141::outputOn2()
{
    output(O2);
}

void SN74141::outputOn3()
{
    output(O3);
}

void SN74141::outputOn4()
{
    output(O4);
}

void SN74141::outputOn5()
{
    output(O5);
}

void SN74141::outputOn6()
{
    output(O6);
}

void SN74141::outputOn7()
{
    output(O7);
}

void SN74141::outputOn8()
{
    output(O8);
}

void SN74141::outputOn9()
{
    output(O9);
}

void SN74141::outputOnNone()
{
    output(O_NONE);
}

SN74141::OutputOnResult SN74141::outputOn(uint8_t pin)
{
    if (pin < O0 || pin > O9)
    {
        return OUT_OF_RANGE;
    }
    output(pin);
    return SUCCESS;
}
