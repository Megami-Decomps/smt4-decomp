#include "common.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

int scrSetResult(int result);
extern u32 scrGetArg(u32 index);

/* Script command: result is a bit field of the record's flags halfword (masked to 0x3f, shifted right by 5). */
u32 FUN_003185b4(void)
{
    NkmEnemyRecord *record = nkmEnemyFindById((u16)scrGetArg(0));

    scrSetResult((record->flags & 0x3f) >> 5);
    return 1;
}

} /* extern "C" */
