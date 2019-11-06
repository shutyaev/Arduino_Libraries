#include "SN74141.h"

using namespace NixieTubeLib;

const uint8_t SN74141::FUNCTION_TABLE[11][4] = {
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
    digitalWrite(pins_[I_A], FUNCTION_TABLE[pin][I_A]);
    digitalWrite(pins_[I_B], FUNCTION_TABLE[pin][I_B]);
    digitalWrite(pins_[I_C], FUNCTION_TABLE[pin][I_C]);
    digitalWrite(pins_[I_D], FUNCTION_TABLE[pin][I_D]);
}

void SN74141::outputOn0()
{
    output(O_0);
}

void SN74141::outputOn1()
{
    output(O_1);
}

void SN74141::outputOn2()
{
    output(O_2);
}

void SN74141::outputOn3()
{
    output(O_3);
}

void SN74141::outputOn4()
{
    output(O_4);
}

void SN74141::outputOn5()
{
    output(O_5);
}

void SN74141::outputOn6()
{
    output(O_6);
}

void SN74141::outputOn7()
{
    output(O_7);
}

void SN74141::outputOn8()
{
    output(O_8);
}

void SN74141::outputOn9()
{
    output(O_9);
}

void SN74141::outputOnNone()
{
    output(O_NONE);
}

SN74141::OutputOnResult SN74141::outputOn(uint8_t pin)
{
    if (pin < O_0 || pin > O_9)
    {
        return OUT_OF_RANGE;
    }
    output(pin);
    return SUCCESS;
}
