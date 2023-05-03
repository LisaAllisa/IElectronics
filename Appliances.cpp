#include "pch.h"
#include "Appliances.h"


Appliances::Appliances(int weight) : _weight(weight)
{
}
void Appliances::Show()
{
    cout << "�����: " << _weight << " �� " << endl;
}

//����� "���������� ������" 
Washer::Washer(int weight, int power) : Appliances(weight), _power(power)
{

}

void Washer::Show()
{
    cout << "�����: " << _weight << " �� " << endl;
    cout << "��������: " << _power << " �� " << endl;
}

//����� "������������� ������" 
Dishwasher::Dishwasher(int weight, int capacity) : Appliances(weight), _capacity(capacity)
{

}

void Dishwasher::Show()
{
    cout << "�����: " << _weight << " �� " << endl;
    cout << "�������: " << _capacity << " � " << endl;
}