#ifndef NIXIE_TUBE_IN19B_H
#define NIXIE_TUBE_IN19B_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
class IN19B : public NixieTube
{
public:
    IN19B(SN74141 *driver, uint8_t *pins);
    ShowResult showS();
    ShowResult showF();
    ShowResult showH();
    ShowResult showV();
    ShowResult showT();
    ShowResult showA();
    ShowResult showOmega();
    ShowResult showHz();
};
} // namespace NixieTubeLib

#endif
