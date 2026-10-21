#include "common.h"

namespace { struct Label { u16 value; u16 text; }; struct Labels { Label entries[4]; u8 flag; }; }

extern "C" {
/* Reads or updates the requested object state. */
extern Labels DAT_00465278;
void FUN_002d56c4(u16 first, u16 second, u16 third, u16 fourth)
{
    DAT_00465278.flag = 1;
    DAT_00465278.entries[0].text = first;
    DAT_00465278.entries[1].text = second;
    DAT_00465278.entries[2].text = third;
    DAT_00465278.entries[3].text = fourth;
}
}
