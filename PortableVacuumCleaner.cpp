#include "pch.h"
#include "PortableVacuumCleaner.h"


PortableVacuumCleaner::PortableVacuumCleaner(int batterLife, int weight, string color) : Device(batterLife), Appliances(weight), _color(color)
{
}

void PortableVacuumCleaner::Show()
{
    cout << "Battery Life: " << _batteryLife << " ÷ " << endl;
    cout << "Weight: " << _weight << " êã " << endl;
    cout << "Öâåò: " << _color << endl;
}
