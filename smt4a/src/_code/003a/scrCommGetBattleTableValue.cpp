#include "shard/Shard003A.h"

extern "C" {

typedef struct Row12 {
    /* 0x00 */ u16 values[6];
} Row12;

extern s32 scrGetArg(s32 index);
extern void *btlGetMainState(void);
extern void *btlGetTable(void *state, s32 index);
extern Row12 *dataTableGetEntries(void *table);
extern void scrSetResult(u32 value);

/* Script command: result is table entry [argument 0][argument 1] of the battle's halfword table. */
u32 scrCommGetBattleTableValue(void)
{
    s32 row = scrGetArg(0);
    s32 column = scrGetArg(1);
    void *state = btlGetMainState();
    Row12 *rows = dataTableGetEntries(btlGetTable(state, 9));

    scrSetResult(rows[row].values[column]);
    return 1;
}

} /* extern "C" */
