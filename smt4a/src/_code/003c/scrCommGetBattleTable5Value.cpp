#include "shard/Shard003C.h"

extern "C" {

typedef struct Row6 {
    /* 0x00 */ u16 v0;
    /* 0x02 */ u16 v1;
    /* 0x04 */ u16 v2;
} Row6;

extern s32 scrGetArg(s32 index);
extern void *btlGetMainState(void);
extern void *btlGetTable(void *state, s32 index);
extern Row6 *dataTableGetEntries(void *table);
extern void scrSetResult(u32 value);

/* Script command: result is halfword `argument 1` (1..3) of row `argument 0` of the battle's table 5, else 0. */
u32 scrCommGetBattleTable5Value(void)
{
    s32 row = scrGetArg(0);
    s32 column = scrGetArg(1);
    void *state = btlGetMainState();
    Row6 *rows = dataTableGetEntries(btlGetTable(state, 5));
    u16 value = 0;

    switch (column) {
    case 1:
        value = rows[row].v0;
        break;
    case 2:
        value = rows[row].v1;
        break;
    case 3:
        value = rows[row].v2;
        break;
    }
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
