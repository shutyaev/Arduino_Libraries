#include <stdexcept>
#include <sn74141.h>

using namespace nixie_tube;

SN74141::SN74141(uint8_t a, uint8_t b, uint8_t c, uint8_t d)
{
    a_ = a;
    b_ = b;
    c_ = c;
    d_ = d;
}

void SN74141::Output(uint8_t out)
{
    digitalWrite(a_, kFunctionTable[out][0]);
    digitalWrite(b_, kFunctionTable[out][1]);
    digitalWrite(c_, kFunctionTable[out][2]);
    digitalWrite(d_, kFunctionTable[out][3]);
}

void SN74141::OutputOn0()
{
    Output(0);
}

void SN74141::OutputOn1()
{
    Output(1);
}

void SN74141::OutputOn2()
{
    Output(2);
}

void SN74141::OutputOn3()
{
    Output(3);
}

void SN74141::OutputOn4()
{
    Output(4);
}

void SN74141::OutputOn5()
{
    Output(5);
}

void SN74141::OutputOn6()
{
    Output(6);
}

void SN74141::OutputOn7()
{
    Output(7);
}

void SN74141::OutputOn8()
{
    Output(8);
}

void SN74141::OutputOn9()
{
    Output(9);
}

void SN74141::OutputOnNone()
{
    Output(10);
}

void SN74141::OutputOn(uint8_t out)
{
    if (out < 0 || out > 9)
    {
        throw std::invalid_argument("out must be in [0; 9] range");
    }
    Output(out);
}
