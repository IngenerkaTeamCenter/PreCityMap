#include <iostream>
#include "TXLib.h"
using namespace std;

void DrawWAKZAL(int x, int y)
{
    txSetColour(TX_PINK);
    txSetFillColour(TX_PINK);
    txRectangle(x - 20, y - 20, x + 20, y + 20);

}

void DrawTYRAGA(int x, int y)
{
    txSetColour(TX_YELLOW);
    txSetFillColour(TX_YELLOW);
    txRectangle(x - 20, y - 20, x + 20, y + 20);

}

int main()
    {

    char str[20];
    cout << "¬Â‰ËÚÂ ˆËÙÛ\n" << endl;
    cin >> str;
    char jd[20];
    cout << "¬Â‰ËÚÂ ˆËÙÛ\n" << endl;
    cin >> jd;
    char TR[20];
    cout << "¬Â‰ËÚÂ ˆËÙÛ\n" << endl;
    cin >> TR;

    HDC background_FromTXLibHelp;

    txCreateWindow(1100,850);


    if (strcmp(str, "1") == 0) {
        background_FromTXLibHelp = txLoadImage ("Ulskcity.bmp");
            txBitBlt(txDC(), 0, 0, 1334, 850, background_FromTXLibHelp, 0, 0);
        txDeleteDC (background_FromTXLibHelp);

    } else if (strcmp(str, "2") == 0){
        background_FromTXLibHelp = txLoadImage ("DMcity.bmp");
            txBitBlt(txDC(), 0, 0, 1115, 850, background_FromTXLibHelp, 0, 0);
        txDeleteDC (background_FromTXLibHelp);

    } else if (strcmp(str, "3") == 0){
        background_FromTXLibHelp = txLoadImage ("Sochicity.bmp");
            txBitBlt(txDC(), 0, 0, 1100, 970, background_FromTXLibHelp, 0, 0);
        txDeleteDC (background_FromTXLibHelp);
    }

    if (strcmp(jd, "1") == 0) {

     DrawWAKZAL(360, 360);
     txSetFillColour(TX_ORANGE);
     txSetColour(TX_ORANGE);
     txSelectFont ("Comic Sans MS", 18);
     txDrawText(300, 380, 420, 410, "œ≈ƒ.¬Œ «¿À");

    } else if (strcmp(jd, "2") == 0){

     DrawWAKZAL(670, 500);
     txSetFillColour(TX_ORANGE);
     txSetColour(TX_ORANGE);
     txSelectFont ("Comic Sans MS", 18);
     txDrawText(630, 520, 740, 540, "œ≈ƒ.¬Œ «¿À");

    } else if (strcmp(jd, "3") == 0){

     DrawWAKZAL(600, 200);
     txSetFillColour(TX_ORANGE);
     txSetColour(TX_ORANGE);
     txSelectFont ("Comic Sans MS", 18);
     txDrawText(570, 220, 670, 280, "œ≈ƒ.¬Œ «¿À");

    }

    if (strcmp(TR, "1") == 0) {

     DrawTYRAGA(360, 360);
     txSetFillColour(TX_ORANGE);
     txSetColour(TX_ORANGE);
     txSelectFont ("Comic Sans MS", 18);
     txDrawText(300, 380, 450, 410, "œ≈ƒ.“ﬁ–ﬂ√¿");

    } else if (strcmp(TR, "2") == 0){

     DrawTYRAGA(670, 500);
     txSetFillColour(TX_ORANGE);
     txSetColour(TX_ORANGE);
     txSelectFont ("Comic Sans MS", 18);
     txDrawText(630, 520, 770, 540, "œ≈ƒ.“ﬁ–ﬂ√¿");

    } else if (strcmp(TR, "3") == 0){

     DrawTYRAGA(600, 200);
     txSetFillColour(TX_ORANGE);
     txSetColour(TX_ORANGE);
     txSelectFont ("Comic Sans MS", 18);
     txDrawText(570, 220, 700, 280, "œ≈ƒ.“ﬁ–ﬂ√¿");

    }
    return 0;

    }
