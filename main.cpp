#include "main.h"

#define D 0x44;
#define H 0x48;
#define F 0x46;
#define I 0x49;
#define P 0x50;
#define S 0x53;
#define T 0x54;
#define W 0,57;

unsigned short ST = 10, DX = 10, IQ = 10, HT = 10, HP = ST, Will = IQ, Per = IQ, FP = HT, current_HP = 10;

int main()
{
    while(true)
    {
        system("cls");

        static short points = 0;

        // Attributes variables
        short ST_Cost, DX_Cost, IQ_Cost, HT_Cost, HP_Cost, Will_Cost, Per_Cost, FP_Cost;

        ST_Cost = (ST - 10) * 10;
        DX_Cost = (DX - 10) * 20;
        IQ_Cost = (IQ - 10) * 20;
        HT_Cost = (HT - 10) * 10;
        HP_Cost = (HP - ST) * 2;
        Will_Cost = (Will - IQ) * 5;
        Per_Cost = (Per - IQ) * 5;
        FP_Cost = (FP - HT) * 3;

        unsigned short basic_lift = (ST * ST) / 5;

        points = ST_Cost + DX_Cost + IQ_Cost + HT_Cost + HP_Cost + Will_Cost + Per_Cost + FP_Cost;

        cout << "############################################################\n";
        cout << "#         WELCOME TO JAMINHO GURPS CHARACTER SHEET         #\n";
        cout << "############################################################\n";
        cout << "Character Points: " << points << "\n\n";
        cout << "Use the shortcut to change de values.\n";

       
        // Building the attribute table
        TextTable t(205, 186, 206);

        t.add(" Attr"); 
        t.add(" Value");       
        t.add(" Cost");             
        t.add(" Sec. Att."); 
        t.add(" Value");         
        t.add(" Cost"); 
        t.endOfRow();

        t.add(" ST [S]");
        t.add(" " + to_string(ST));
        t.add(" " + to_string(ST_Cost));
        t.add(" HP   [H]");
        t.add(" " + to_string(HP));
        t.add(" " + to_string(HP_Cost));
        t.endOfRow();

        t.add(" DX [D]");
        t.add(" " + to_string(DX));
        t.add(" " + to_string(DX_Cost));
        t.add(" Will [W]");
        t.add(" " + to_string(Will));
        t.add(" " + to_string(Will_Cost));
        t.endOfRow();

        t.add(" IQ [I]");
        t.add(" " + to_string(IQ));
        t.add(" " + to_string(IQ_Cost));
        t.add(" Per  [P]");
        t.add(" " + to_string(Per));
        t.add(" " + to_string(Per_Cost));
        t.endOfRow();

        t.add(" HT [T]");
        t.add(" " + to_string(HT));
        t.add(" " + to_string(HT_Cost));
        t.add(" FP   [F]");
        t.add(" " + to_string(FP));
        t.add(" " + to_string(FP_Cost));
        t.endOfRow();
        t.endOfRow();

        t.add(" Basic Lift: ");
        t.add(" " + to_string(basic_lift));
        t.add(" Damage: thr ");
        t.add(" " + damage_thr(ST));
        t.add(" sw");
        t.add(" " + damage_sw(ST));
        t.endOfRow();

        t.setAlignment(2, TextTable::Alignment::LEFT);
        std::cout << t;

        cout << "Press Escape to exit the aplication.\n";

        system("pause");

        if (GetKeyState(VK_ESCAPE) & 0x8000)
        {
            break;
        }
        if (GetKeyState('D') & 0x8000)
        {
            DX = check_number(DX);
        }
        if (GetKeyState('F') & 0x8000)
        {
            FP = check_number(FP);
        }
        if (GetKeyState('H') & 0x8000)
        {
            HP = check_number(HP);
        }
        if (GetKeyState('I') & 0x8000)
        {
            unsigned short iq = IQ;
            iq = check_number(iq);
            Will = Will - (IQ - iq);
            Per = Per - (IQ - iq);
            IQ = iq;
        }
        if (GetKeyState('P') & 0x8000)
        {
            Per = Will = check_number(Per);
        }
        if (GetKeyState('S') & 0x8000)
        {
            unsigned short st = ST;
            st = Will = check_number(st);
            HP = HP - (ST - st);
            ST = st;
        }
        if (GetKeyState('T') & 0x8000)
        {
            unsigned short ht = HT;
            ht = Will = check_number(ht);
            FP = FP - (HT - ht);
            HT = ht;
        }
        if (GetKeyState('W') & 0x8000)
        {
            Will = check_number(Will);
        }
    }
	return 0;
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