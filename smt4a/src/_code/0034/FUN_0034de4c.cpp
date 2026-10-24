#include "common.h"

struct Obj34de4cData {
    u8 unk00[0x1be];
    u16 value;
};

struct Obj34de4cUnit {
    u8 unk00[0x28];
    Obj34de4cData *data;
};

extern "C" {
extern u32 g_btlScriptUnit;
Obj34de4cUnit *btlUnitGet(u32 id);

/* Script command: sets the halfword at 0x1be of the script unit's data record to 19. */
s32 FUN_0034de4c(void)
{
    Obj34de4cData *data = btlUnitGet(g_btlScriptUnit)->data;
    data->value = 19;
    return 1;
}
}
