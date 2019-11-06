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

SN74141::SN74141(SN74141Pins pins)
{
    pins_ = pins;
}

void SN74141::output(uint8_t out)
{
    digitalWrite(pins_.a, kFunctionTable[out][0]);
    digitalWrite(pins_.b, kFunctionTable[out][1]);
    digitalWrite(pins_.c, kFunctionTable[out][2]);
    digitalWrite(pins_.d, kFunctionTable[out][3]);
}

void SN74141::outputOn0()
{
    output(0);
}

void SN74141::outputOn1()
{
    output(1);
}

void SN74141::outputOn2()
{
    output(2);
}

void SN74141::outputOn3()
{
    output(3);
}

void SN74141::outputOn4()
{
    output(4);
}

void SN74141::outputOn5()
{
    output(5);
}

void SN74141::outputOn6()
{
    output(6);
}

void SN74141::outputOn7()
{
    output(7);
}

void SN74141::outputOn8()
{
    output(8);
}

void SN74141::outputOn9()
{
    output(9);
}

void SN74141::outputOnNone()
{
    output(10);
}

SN74141::OutputOnResult SN74141::outputOn(uint8_t out)
{
    if (out < 0 || out > 9)
    {
        return OUT_OF_RANGE;
    }
    output(out);
    return SUCCESS;
}
