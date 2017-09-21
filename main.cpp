#include "TXLib.h"

    int main()
    {
    txCreateWindow(1100,950);

    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txClear();
    txSetColor((TX_RED), 70);
    txSetFillColor(TX_RED);
    //Ульяновск
    txLine(100, 100, 300, 100);
    txLine(100, 100, 100, 700);
    //Дмитровград
    txRectangle(450, 450, 700, 700);
    //Сочи
    txRectangle(900, 100, 980, 800);

    txDrawText(500, 50, 700, 100, "Выберите город");
    txDrawText(100, 25, 300, 50, "1.Ульяновск");
    txDrawText(550, 375, 600, 400, "2.Дмитровград");
    txDrawText(900, 25, 1050, 50, "3.Сочи");

    HDC abackground_FromTXLibHelp = txLoadImage ("Ульяновск.bmp");
    HDC bbackground_FromTXLibHelp = txLoadImage ("Дмитровград.bmp");
    HDC cbackground_FromTXLibHelp = txLoadImage ("Сочи.bmp");






    while(!GetAsyncKeyState(VK_ESCAPE))

    if (GetAsyncKeyState('1'))
    {
      txBitBlt (txDC(), 0, 0, 1100, 950, abackground_FromTXLibHelp, 0, 0);

    }
    else if (GetAsyncKeyState('2'))
    {
    txBitBlt (txDC(), 0, 0, 1100, 950, bbackground_FromTXLibHelp, 0, 0);

    }
    else if (GetAsyncKeyState('3'))
    {
      txBitBlt (txDC(), 0, 0, 1100, 950, cbackground_FromTXLibHelp, 0, 0);

    }
    txDeleteDC (abackground_FromTXLibHelp);
    txDeleteDC (bbackground_FromTXLibHelp);
    txDeleteDC (cbackground_FromTXLibHelp);


    }
