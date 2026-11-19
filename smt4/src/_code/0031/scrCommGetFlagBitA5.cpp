#include "common.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

int scrSetResult(int result);
extern u32 scrGetArg(u32 index);

u32 scrCommGetFlagBitA5(void)
{
    u16 id = scrGetArg(0);
    NkmEnemyRecord *record = nkmEnemyFindById(id);

    scrSetResult((record->scriptFlags & 3) >> 1);
    return 1;
}

} /* extern "C" */
