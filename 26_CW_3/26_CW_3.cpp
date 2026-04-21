

#include "Adapter.h"
#include <vector>

int Adapter::count = 1;
int main()
{
    vector<Adapter> admin;
    admin.push_back(Adapter("usb", 250, 100));
    admin.push_back(Adapter("usb 3.0", 350, 500));
    admin.push_back(Adapter("usb/typeC", 150, 150));
    admin.push_back(Adapter("usb/miniUSB", 175, 175));

    for (auto item = admin.begin(); item != admin.end(); item++) {
        item->showInfo();
        cout << "===================" << endl;
    }
 
    return 0;
}


