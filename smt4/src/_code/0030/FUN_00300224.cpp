#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {
BtlEntry *btlMainFindEntryByListedId(BtlMainState *state, s32 id);
void FUN_00255180(u32 id, s32 kind, s32 value);

/* Selects one of the actor's two special battle modes and queues its corresponding update. */
u32 FUN_00300224(void)
{
    u32 id = scrGetArg(0);
    s32 mode = scrGetArg(1);
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);
    if (entry != NULL) {
        switch (mode) {
        case 1:
            entry->flagMask |= 0x20000;
            FUN_00255180(id, 0x15, 1);
            break;
        case 2:
            entry->flagMask |= 0x40000;
            FUN_00255180(id, 0x15, 2);
            break;
        }
    }
    return 1;
}
}
