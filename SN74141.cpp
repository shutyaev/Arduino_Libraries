#include <stdexcept>
#include <SN74141.h>

using namespace NixieTubeLib;

SN74141::SN74141(uint8_t a, uint8_t b, uint8_t c, uint8_t d)
{
    a_ = a;
    b_ = b;
    c_ = c;
    d_ = d;
}

void SN74141::output(uint8_t out)
{
    digitalWrite(a_, FUNCTION_TABLE[out][0]);
    digitalWrite(b_, FUNCTION_TABLE[out][1]);
    digitalWrite(c_, FUNCTION_TABLE[out][2]);
    digitalWrite(d_, FUNCTION_TABLE[out][3]);
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

void SN74141::outputOn(uint8_t out)
{
    if (out < 0 || out > 9)
    {
        throw std::invalid_argument("out must be in [0; 9] range");
    }
    output(out);
}
