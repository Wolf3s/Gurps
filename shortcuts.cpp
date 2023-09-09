#include "shortcuts.h"
#include "main.h"

void shortcuts(Character& c)
{
    if (GetKeyState('D') & 0x8000)
    {
        (c.DX = check_number(c.DX));
    }
    if (GetKeyState('F') & 0x8000)
    {
        c.FP = check_number(c.FP);
    }
    if (GetKeyState('H') & 0x8000)
    {
        c.HP = check_number(c.HP);
    }
    if (GetKeyState('I') & 0x8000)
    {
        unsigned short iq = c.IQ;
        iq = check_number(iq);
        c.Will = c.Will - (c.IQ - iq);
        c.Per = c.Per - (c.IQ - iq);
        c.IQ = iq;
    }
    if (GetKeyState('P') & 0x8000)
    {
        c.Per = check_number(c.Per);
    }
    if (GetKeyState('S') & 0x8000)
    {
        unsigned short st = c.ST;
        st = check_number(st);
        c.HP = c.HP - (c.ST - st);
        c.ST = st;
        c.UpdateBasicLift();
    }
    if (GetKeyState('T') & 0x8000)
    {
        unsigned short ht = c.HT;
        ht = check_number(ht);
        c.FP = c.FP - (c.HT - ht);
        c.HT = ht;
    }
    if (GetKeyState('W') & 0x8000)
    {
        c.Will = check_number(c.Will);
    }
}


int check_number(unsigned short num)
{
    std::cout << "Enter a value for the attribute. ";
    std::string input;
    getline(std::cin, input);

    for (unsigned short i = 0; i < input.size(); i++)
    {
        if (!isdigit(input[i]))
        {
            return num;
        }
    }
    return stoi(input);
}