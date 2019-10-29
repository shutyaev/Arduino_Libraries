#include "IN19B.h"

using namespace NixieTubeLib;

IN19B::IN19B(SN74141 *driver, IN19BPins pins) : NixieTube::NixieTube(driver)
{
    pins_ = pins;
}

bool IN19B::showS()
{
    return show(pins_.s);
}

bool IN19B::showF()
{
    return show(pins_.f);
}

bool IN19B::showH()
{
    return show(pins_.h);
}

bool IN19B::showV()
{
    return show(pins_.v);
}

bool IN19B::showT()
{
    return show(pins_.t);
}

bool IN19B::showA()
{
    return show(pins_.a);
}

bool IN19B::showOmega()
{
    return show(pins_.omega);
}

bool IN19B::showHz()
{
    return show(pins_.hz);
}
