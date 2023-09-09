#include "main.h"
#include "Character.h"
#include "shortcuts.h"
#include "table.h"

void myTable(Character& c);

int main()
{
    Character character;
    Character& refCharacter = character;

    while(true)
    {
        system("cls");

        cout << "############################################################\n";
        cout << "#         WELCOME TO JAMINHO GURPS CHARACTER SHEET         #\n";
        cout << "############################################################\n";
        cout << "Character Points: " << character.totalPoints() << "\n\n";
        cout << "Use the shortcut to change de values.\n";
        
       cout << "Press Escape to exit the aplication.\n";

       myTable(refCharacter);

        system("pause");

        if (GetKeyState(VK_ESCAPE) & 0x8000)
        {
            break;
        }

        shortcuts(refCharacter);
    }

	return 0;
}