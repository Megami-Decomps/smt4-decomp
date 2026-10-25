/* NON_MATCHING: the flag read-modify-write temp is r1 (retail r2, with the argument constant loaded before the OR). */
#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {
BtlUnitEntry *btlMainFindEntryByListedId(BtlMainState *state, s32 id);
void FUN_00255180(u32 id, s32 kind, s32 value);

/* Selects one of the actor's two special battle modes and queues its corresponding update. */
u32 FUN_00300224(void)
{
    u32 id = scrGetArg(0);
    s32 mode = scrGetArg(1);
    BtlUnitEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    if (entry != NULL) {
        switch (mode) {
        case 1:
            entry->flags |= 0x20000;
            FUN_00255180(id, 0x15, 1);
            break;
        case 2:
            entry->flags |= 0x40000;
            FUN_00255180(id, 0x15, 2);
            break;
        }
    }
    return 1;
}
}
