#include "TXLib.h"

using namespace std;

struct city_property
{
    int id;
    char *img_name;
    HDC citymap;
};

int main()
{
    city_property city;

    cout << "Введите цифру - номер города" << endl;
    cin >> city.id;

    txCreateWindow(800, 600);
    if (city.id == 1)
    {
        city.img_name = "img\Ulskcity.bmp";
    }
    else
    {
        city.img_name = "img\Sochicity.bmp";
    }
    city.citymap =  txLoadImage(city.img_name);
    txBitBlt (txDC(), 0, 0, 800, 600, city.citymap, 0, 0);
}
