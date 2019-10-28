#include "IN19B.h"

using namespace NixieTubeLib;

IN19B::IN19B(SN74141 *driver, IN19BPins pins) : NixieTube::NixieTube(driver)
{
    pins_ = pins;
}

void IN19B::showS()
{
    show(pins_.s);
}

void IN19B::showF()
{
    show(pins_.f);
}

void IN19B::showH()
{
    show(pins_.h);
}

void IN19B::showV()
{
    show(pins_.v);
}

void IN19B::showT()
{
    show(pins_.t);
}

void IN19B::showA()
{
    show(pins_.a);
}

void IN19B::showOmega()
{
    show(pins_.omega);
}

void IN19B::showHz()
{
    show(pins_.hz);
}
