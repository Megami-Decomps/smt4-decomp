#include "shard/Shard003B.h"

extern "C" {

typedef struct StateTable {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ s32 state94;
} StateTable;

extern u8 asdTMTexTableNodeIsLoaded(s32 a, u32 b);
extern u32 requestIdToCode(s32 index);

/* Marks entry `index` of the state table at +0x94 as 1 unless it is 2 or 3 (only when asdTMTexTableNodeIsLoaded says it is not locked). */
void stateTableMarkIfUnlocked(StateTable *table, s32 index)
{
    StateTable *entry;
    s32 state;

    if (asdTMTexTableNodeIsLoaded(0x2E, requestIdToCode(index)) == 0) {
        entry = (StateTable *)((u8 *)table + index * 4);
        state = entry->state94;
        if (state != 3 && state != 2) {
            entry->state94 = 1;
        }
    }
}

} /* extern "C" */
