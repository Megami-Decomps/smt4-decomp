#include "common.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "script/ScriptArgs.h"

extern "C" {


extern BtlEntry *btlMainFindActiveEntry(void);
extern s32 btlScriptResolveGroupArg(s32 group);
extern s32 btlCommandOwnerHasSlotId(BtlEntry *entry, s32 slot);
extern void btlSideGetEntryRange(u32 group, s32 *first, s32 *count);

/* Script command: sets the result to 1 when btlCommandOwnerHasSlotId accepts a live entry (or the active one) for the argument's slot. */
s32 FUN_00323268(void)
{
    s32 slot = scrGetArg(0);
    s32 first;
    s32 count;

    btlSideGetEntryRange(btlScriptResolveGroupArg(scrGetArg(1)), &first, &count);
    for (s32 i = first; i < count + first; i++) {
        BtlMainState *state = btlGetMainState();
        BtlEntry *entry = &state->entries[i];
        if ((entry->flags & 0x10) == 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0
            && btlCommandOwnerHasSlotId(entry, slot) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        btlGetMainState();
        BtlEntry *entry = btlMainFindActiveEntry();
        if (entry != NULL && btlCommandOwnerHasSlotId(entry, slot) != 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
