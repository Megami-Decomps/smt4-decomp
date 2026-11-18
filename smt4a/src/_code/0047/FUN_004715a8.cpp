/* NON_MATCHING: the g_aocMain argument load and the entryCount pointer (add r5,#1024/#68) now match; retail re-reads the count through that pointer after the store (armcc forwards the stored value instead) and loads the kind 0x33 constant before the first test. */
#include "addon/aocMain.h"
#include "gamedata/TableEntryCache.h"
#include "addon/AocSystemA.h"

extern "C" {

s32 asdFsIsSdCardDetected(void);
s32 objGetFlagBit16(AocMain *main);
void asdOperatorDeleteB(void *block);
void *asdOperatorNewE(u32 bytes);
EntryState *__aeabi_vec_ctor_nocookie_nodtor(EntryState *, void (*)(EntryState *), u32 size, u32 count);
void aocLoadPackageFilesByKind(AocSystemA *owner, s32 kind, s32 capacity, EntryState *output);

/* Rebuilds the state entries for the packages of `kind`, or drops the pending flag when no SD card is present. */
static __inline void rebuildStates(AocSystemA *owner, s32 kind)
{
    if (owner->states != NULL) {
        asdOperatorDeleteB(owner->states);
        owner->states = NULL;
    }
    owner->stateCount = 0;
    s32 *entryCount = &owner->stateCount;
    if (asdFsIsSdCardDetected() != 0) {
        if (objGetFlagBit16(g_aocMain) != 0) {
            s32 count = aocCountPackageItemsOfType(owner, kind);
            owner->stateCount = count;
            if (*entryCount > 0) {
                EntryState *states = (EntryState *)asdOperatorNewE(count * sizeof(EntryState));
                if (states != NULL) {
                    states = __aeabi_vec_ctor_nocookie_nodtor(states, entryStateClear, sizeof(EntryState), *entryCount);
                }
                owner->states = states;
            }
            aocLoadPackageFilesByKind(owner, kind, owner->stateCount, owner->states);
        }
    } else {
        g_aocMain->flags &= ~0x10000u;
    }
}

/* Rebuilds the state entries for the add-on content packages (kind 0x33). */
void FUN_004715a8(AocSystemA *owner)
{
    rebuildStates(owner, 0x33);
}

} /* extern "C" */
