/* NON_MATCHING: Zero stack arguments are materialized at the call rather than shared across the lookup loop; return-block placement differs. */
#include "battle/btlAction.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
void FUN_002505c0(s32 index, u32 value, void *resource, u32 mode, u32 unique, u32 options, u32 target);
extern BtlActionResourceEntry DAT_00435ea0[14];
}

/* Queues an action from a keyed resource with an offset into its index range. */
extern "C" u32 FUN_0023c1bc(u32 id, u32 value, s32 offset)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        for (s32 i = 0; i < 14; ++i) {
            BtlActionResourceEntry *entry = &DAT_00435ea0[i];
            if (entry->id == id) {
                if (entry != NULL && entry->resource != NULL) {
                    FUN_002505c0(entry->baseIndex + offset, value, entry->resource, 0, 1, 0, 0);
                }
                return 0;
            }
        }
    }
    return 0;
}
