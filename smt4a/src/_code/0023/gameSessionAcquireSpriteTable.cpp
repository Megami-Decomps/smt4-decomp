#include "shard/Shard0033.h"

extern "C" {

extern ObjBRef g_gameGlobals;

void asdTMTexTableLoadSprites(s32 table);
void FUN_0014afd0(s32 table, s32 index);

/* Counts one more user of table 0x12: the first user (depth 0 or less) prepares it and runs FUN_0014afd0 on its three entries. */
void gameSessionAcquireSpriteTable(void)
{
    s32 i;

    if (g_gameGlobals.spriteTableUsers <= 0) {
        asdTMTexTableLoadSprites(0x12);
        i = 0;
        do {
            FUN_0014afd0(0x12, i);
            i = i + 1;
        } while (i < 3);
    }
    g_gameGlobals.spriteTableUsers = g_gameGlobals.spriteTableUsers + 1;
}

} /* extern "C" */
