#include "common.h"

namespace { struct Label { u16 value; u16 text; }; struct Labels { Label entries[4]; u8 flag; }; }

extern "C" {
/* Reads or updates the requested state. */
extern Labels DAT_00465278;
void FUN_002d56f0(void)
{
    DAT_00465278.flag = 0;
    DAT_00465278.entries[0].text = 45;
    DAT_00465278.entries[1].text = 45;
    DAT_00465278.entries[2].text = 45;
    DAT_00465278.entries[3].text = 45;
}
}
