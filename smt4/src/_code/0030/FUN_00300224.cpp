/* NON_MATCHING: The actor flag updates use r1 instead of r2, with a different branch arrangement for mode two. */
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {
s32 scrGetArg(s32 index);
BtlState *btlGetMainState(void);
BtlUnitEntry *btlMainFindEntryByListedId(BtlState *state, u32 id);
void FUN_00255180(u32 id, s32 kind, s32 value);

/* Selects one of the actor's two special battle modes and queues its corresponding update. */
u32 FUN_00300224(void)
{
    u32 id = scrGetArg(0);
    s32 mode = scrGetArg(1);
    BtlUnitEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    if (entry != NULL) {
        if (mode == 1) {
            entry->flags |= 0x20000;
            FUN_00255180(id, 0x15, 1);
        } else if (mode == 2) {
            entry->flags |= 0x40000;
            FUN_00255180(id, 0x15, 2);
        }
    }
    return 1;
}
}
