#include "TXLib.h"

    int main()
    {
    txCreateWindow(1100,950);

    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txClear();
    txSetColor((TX_RED), 70);
    txSetFillColor(TX_RED);
    //���������
    txLine(100, 100, 300, 100);
    txLine(100, 100, 100, 700);
    //�����������
    txRectangle(450, 450, 700, 700);
    //����
    txRectangle(900, 100, 980, 800);

    txDrawText(500, 50, 700, 100, "�������� �����");
    txDrawText(100, 25, 300, 50, "1.���������");
    txDrawText(550, 375, 600, 400, "2.�����������");
    txDrawText(900, 25, 1050, 50, "3.����");

    HDC abackground_FromTXLibHelp = txLoadImage ("���������.bmp");
    HDC bbackground_FromTXLibHelp = txLoadImage ("�����������.bmp");
    HDC cbackground_FromTXLibHelp = txLoadImage ("����.bmp");






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
