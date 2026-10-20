#include "shard/Shard003C.h"

extern "C" {

typedef struct Row4 {
    /* 0x00 */ u16 v0;
    /* 0x02 */ u16 v1;
} Row4;

extern s32 scrGetArg(s32 index);
extern void *btlGetMainState(void);
extern void *FUN_003ef960(void *state, s32 index);
extern Row4 *dataTableGetEntries(void *table);
extern void scrSetResult(u32 value);

/* Script command: result is halfword v0 of row `argument 0` of the battle's table 4. */
u32 scrCommGetBattleTable4V0(s32 argIndex)
{
    s32 row = scrGetArg(argIndex);
    void *state = btlGetMainState();
    Row4 *rows = dataTableGetEntries(FUN_003ef960(state, 4));

    scrSetResult(rows[row].v0);
    return 1;
}

} /* extern "C" */
