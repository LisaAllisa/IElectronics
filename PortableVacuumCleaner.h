#pragma once
//#include "IElectronics.h"
#include "Appliances.h"
#include "Device.h"

class PortableVacuumCleaner final : public Device, Appliances
{
public:
    PortableVacuumCleaner(int batterLife, int weight, string color);

    void Show() override;

protected:
    string _color;
};

