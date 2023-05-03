#include "pch.h"
#include <iostream>
#include "IElectronics.h"
#include "Appliances.h"
#include "Device.h"
#include "PortableVacuumCleaner.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    IElectronics* assortment[5];

    assortment[0] = new Player(25, 378);
    assortment[1] = new PortableVacuumCleaner(25, 5, string("�����������"));
    assortment[2] = new Washer(100, 500);
    assortment[3] = new Dishwasher(200, 500);
    assortment[4] = new Headphones(25, string("wireless"));

    bool open = true;
    while (open)
    {
        cout << "�������� �����: " << endl;
        cout << "1 - ����� " << endl;
        cout << "2 - ����������� ������� " << endl;
        cout << "3 - ���������� ������ " << endl;
        cout << "4 - ������������� ������ " << endl;
        cout << "5 - �������� " << endl;

        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            assortment[0]->Show();
            break;

        case 2:
            assortment[1]->Show();
            break;

        case 3:
            assortment[2]->Show();
            break;

        case 4:
            assortment[3]->Show();
            break;

        case 5:
            assortment[4]->Show();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "�������� ����� �� 1 �� 5 ��� 0 ��� ������" << endl;
            break;
        }
    }

    delete assortment[0];
    delete assortment[1];
    delete assortment[2];
    delete assortment[3];
    delete assortment[4];

    return 0;
}