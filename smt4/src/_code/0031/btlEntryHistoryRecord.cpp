#include "common.h"

extern "C" {

typedef struct BattleEntry {
    /* 0x000 */ u8 unk000[0x258];
    /* 0x258 */ u32 history[6];
    /* 0x270 */ s32 cursor;  /* next history slot */
} BattleEntry;

void *btlGetMainState(void);
BattleEntry *btlMainFindEntryByListedId(void *state, u32 id);
u32 scrGetArg(u32 index);

/* Script command: records argument 1 in the history ring of the battle entry with listed id argument 0. */
u32 btlEntryHistoryRecord(void)
{
    u32 id = scrGetArg(0);
    u32 value = scrGetArg(1);
    BattleEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    s32 *cursor;

    if (entry != NULL) {
        cursor = &entry->cursor;
        entry->history[*cursor] = value;
        *cursor = *cursor + 1;
        if (*cursor > 5) {
            *cursor = 0;
        }
    }
    return 1;
}

} /* extern "C" */
