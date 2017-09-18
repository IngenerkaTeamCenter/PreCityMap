#include "TXLib.h"

using namespace std;

struct city_property
{
    int id;
    char img_name[20];
    HDC citymap;
};

int main()
{
    city_property city;

    cout << "Ââåäèòå öèôðó - íîìåð ãîðîäà" << endl;
    char *tmp;
    cin >> tmp;
    city.id = atoi(tmp);

    txCreateWindow(800, 600);
    if (city.id == 1)
    {
        strcpy(city.img_name, "img\Ulskcity.bmp");
    }
    else
    {
        strcpy(city.img_name, "img\Sochicity.bmp");
    }
    city.citymap =  txLoadImage(city.img_name);
    txBitBlt (txDC(), 0, 0, 800, 600, city.citymap, 0, 0);
}
