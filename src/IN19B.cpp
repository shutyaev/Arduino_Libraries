#include "IN19B.h"

using namespace NixieTubeLib;

IN19B::IN19B(SN74141 *driver, IN19BPins pins) : NixieTube::NixieTube(driver)
{
    pins_ = pins;
}

NixieTube::ShowResult IN19B::showS()
{
    return show(pins_.s);
}

NixieTube::ShowResult IN19B::showF()
{
    return show(pins_.f);
}

NixieTube::ShowResult IN19B::showH()
{
    return show(pins_.h);
}

NixieTube::ShowResult IN19B::showV()
{
    return show(pins_.v);
}

NixieTube::ShowResult IN19B::showT()
{
    return show(pins_.t);
}

NixieTube::ShowResult IN19B::showA()
{
    return show(pins_.a);
}

NixieTube::ShowResult IN19B::showOmega()
{
    return show(pins_.omega);
}

NixieTube::ShowResult IN19B::showHz()
{
    return show(pins_.hz);
}
