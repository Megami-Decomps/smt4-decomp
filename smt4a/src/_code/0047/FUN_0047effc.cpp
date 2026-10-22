/* NON_MATCHING: Zero stack arguments are materialized at the call rather than shared across the lookup loop; return-block placement differs. */
#include "battle/btlAction.h"

extern "C" {
void FUN_004fb43c(s32 index, u32 value, void *resource, u32 mode, u32 unique, u32 options, u32 target);
void *jyoucyuGetTableEntry(u32 index);
extern BtlActionResourceEntry DAT_00573ce0[14];
}

/* Queues an action from a keyed resource with an offset into its index range. */
extern "C" u32 FUN_0047effc(u32 id, u32 value, s32 offset)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        for (s32 i = 0; i < 14; ++i) {
            BtlActionResourceEntry *entry = &DAT_00573ce0[i];
            if (entry->id == id) {
                if (entry != NULL && entry->resource != NULL) {
                    FUN_004fb43c(entry->baseIndex + offset, value, entry->resource, 0, 1, 0, 0);
                }
                return 0;
            }
        }
    }
    return 0;
}
