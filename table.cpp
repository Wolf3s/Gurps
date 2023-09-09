#include "Table.h"
#include "shortcuts.h"

void myTable(Character& c)
{
	// Building the attribute table
	TextTable t('-', '|', '+');

	t.add(" Attr");
	t.add(" Value");
	t.add(" Cost");
	t.add(" Sec. Att.");
	t.add(" Value");
	t.add(" Cost");
	t.endOfRow();

	t.add(" ST [S]");
	t.add(" " + to_string(c.ST));
	t.add(" " + to_string(c.ST_Cost));
	t.add(" HP   [H]");
	t.add(" " + to_string(c.HP));
	t.add(" " + to_string(c.HP_Cost));
	t.endOfRow();

	t.add(" DX [D]");
	t.add(" " + to_string(c.DX));
	t.add(" " + to_string(c.DX_Cost));
	t.add(" Will [W]");
	t.add(" " + to_string(c.Will));
	t.add(" " + to_string(c.Will_Cost));
	t.endOfRow();

	t.add(" IQ [I]");
	t.add(" " + to_string(c.IQ));
	t.add(" " + to_string(c.IQ_Cost));
	t.add(" Per  [P]");
	t.add(" " + to_string(c.Per));
	t.add(" " + to_string(c.Per_Cost));
	t.endOfRow();

	t.add(" HT [T]");
	t.add(" " + to_string(c.HT));
	t.add(" " + to_string(c.HT_Cost));
	t.add(" FP   [F]");
	t.add(" " + to_string(c.FP));
	t.add(" " + to_string(c.FP_Cost));
	t.endOfRow();
	t.endOfRow();

	t.add(" Basic Lift: ");
	t.add(" " + to_string(c.basic_lift));
	t.add(" Damage: thr ");
	t.add(" " + damage_thr(c.ST));
	t.add(" sw");
	t.add(" " + damage_sw(c.ST));
	t.endOfRow();

	t.setAlignment(2, TextTable::Alignment::LEFT);
	
	std::cout << t;
}