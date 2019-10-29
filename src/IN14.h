#ifndef NIXIE_TUBE_IN14_H
#define NIXIE_TUBE_IN14_H

#include <Arduino.h>
#include "NixieTube.h"

namespace NixieTubeLib
{
class IN14 : public NixieTube
{
private:
    static const uint8_t kDefaultPins[12];

public:
    IN14(SN74141 *driver);
    IN14(SN74141 *driver, uint8_t *pins);
    ShowResult showPointLeft();
    ShowResult show1();
    ShowResult show2();
    ShowResult show3();
    ShowResult show4();
    ShowResult show5();
    ShowResult show6();
    ShowResult show7();
    ShowResult show8();
    ShowResult show9();
    ShowResult show0();
    ShowResult showPointRight();
};
} // namespace NixieTubeLib

#endif
