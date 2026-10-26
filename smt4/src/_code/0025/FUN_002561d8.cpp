#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "code/Code0025_Smt4.h"

extern "C" {

/* Entry `index` (0-108) if its in-use bit matches `wantUsed`; NULL otherwise. */
BtlEntry *FUN_002561d8(BtlMainState *state, s32 index, s32 wantUsed)
{
    BtlEntry *entry;
    u32 used;

    if (index < 0) {
        return NULL;
    }
    if (index >= 0x6d) {
        return NULL;
    }
    entry = &state->entries[index];
    used = entry->flags & 1;
    if (wantUsed != 0) {
        if (used != 0) {
            return entry;
        }
    } else if (used == 0) {
        return entry;
    }
    return NULL;
}

} /* extern "C" */
