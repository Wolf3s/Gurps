#include "main.h"



void shortcuts(
    unsigned short * ST, unsigned short * DX, unsigned short * IQ, unsigned short * HT, 
    unsigned short * HP, unsigned short * Will, unsigned short * Per, unsigned short * FP)
{
    if (GetKeyState('D') & 0x8000)
    {
        *DX = check_number(*DX);
    }
    if (GetKeyState('F') & 0x8000)
    {
        *FP = check_number(*FP);
    }
    if (GetKeyState('H') & 0x8000)
    {
        *HP = check_number(*HP);
    }
    if (GetKeyState('I') & 0x8000)
    {
        unsigned short iq = *IQ;
        iq = check_number(iq);
        *Will = *Will - (*IQ - iq);
        *Per = *Per - (*IQ - iq);
        *IQ = iq;
    }
    if (GetKeyState('P') & 0x8000)
    {
        *Per = check_number(*Per);
    }
    if (GetKeyState('S') & 0x8000)
    {
        unsigned short st = *ST;
        st = check_number(st);
        *HP = *HP - (*ST - st);
        *ST = st;
    }
    if (GetKeyState('T') & 0x8000)
    {
        unsigned short ht = *HT;
        ht = check_number(ht);
        *FP = *FP - (*HT - ht);
        *HT = ht;
    }
    if (GetKeyState('W') & 0x8000)
    {
        *Will = check_number(*Will);
    }
}


int check_number(int num)
{
    cout << "Enter a value for the attribute. ";
    string input;
    getline(cin, input);

    for (int i = 0; i < input.size(); i++)
    {
        if (!isdigit(input[i]))
        {
            return num;
        }
    }
    return stoi(input);
}