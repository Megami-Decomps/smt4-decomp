/* NON_MATCHING: table/index and state/address register allocation differs from retail. */
#include "shard/Shard003B.h"
#include "util/CalleeContracts.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

typedef struct StateTable {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ s32 states[9];
} StateTable;

extern u32 requestIdToCode(s32 index);

/* Marks entry `index` of the state table at +0x94 as 1 unless it is 2 or 3 (only when asdTMTexTableNodeIsLoaded says it is not locked). */
void stateTableMarkIfUnlocked(StateTable *table, s32 index)
{
    s32 state;

    if (table == NULL) {
        return;
    }
    if (asdTMTexTableNodeIsLoaded(0x2E, requestIdToCode(index)) == 0) {
        state = table->states[index];
        if (state != 3 && state != 2) {
            table->states[index] = 1;
        }
    }
}

} /* extern "C" */
