#include "common.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

int scrSetResult(int result);
extern u32 scrGetArg(u32 index);

/* Script command: result is a bit field of the record's flags halfword (masked to 0xff, shifted right by 7). */
u32 FUN_0031884c(void)
{
    NkmEnemyRecord *record = nkmEnemyFindById((u16)scrGetArg(0));

    scrSetResult((record->flags & 0xff) >> 7);
    return 1;
}

} /* extern "C" */
