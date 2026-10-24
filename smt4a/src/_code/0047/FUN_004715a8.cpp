/* NON_MATCHING: retail reaches entryCount through a pointer kept in r5 (no store-to-load forwarding, count re-read for the vector constructor) and loads g_aocMain before the SD card branch. */
#include "addon/aocMain.h"
#include "gamedata/GroupedFileTables.h"
#include "gamedata/TableEntryCache.h"

extern "C" {

/* The owner of the grouped package files, with the per-package state entries it builds. */
struct AocPackageStates {
    /* 0x000 */ GroupedFileTables tables;
    /* 0x31C */ u8 unk31C[0x444 - sizeof(GroupedFileTables)];
    /* 0x444 */ s32 entryCount;
    /* 0x448 */ u8 unk448[4];
    /* 0x44C */ EntryState *entries;
};

extern AocMain *g_aocMain;

s32 asdFsIsSdCardDetected(void);
s32 objGetFlagBit16(void);
void asdOperatorDeleteB(void *block);
void *asdOperatorNewE(u32 bytes);
EntryState *__aeabi_vec_ctor_nocookie_nodtor(EntryState *, void (*)(EntryState *), u32 size, u32 count);
s32 aocCountPackageItemsOfType(AocPackageStates *owner, u32 kind);
void FUN_004701d8(AocPackageStates *owner, s32 kind, s32 capacity, EntryState *output);

/* Rebuilds the state entries for the packages of `kind`, or drops the pending flag when no SD card is present. */
static __inline void rebuildStates(AocPackageStates *owner, s32 kind)
{
    if (owner->entries != NULL) {
        asdOperatorDeleteB(owner->entries);
        owner->entries = NULL;
    }
    owner->entryCount = 0;
    if (asdFsIsSdCardDetected() != 0) {
        if (objGetFlagBit16() != 0) {
            s32 count = aocCountPackageItemsOfType(owner, kind);
            owner->entryCount = count;
            if (owner->entryCount > 0) {
                EntryState *states = (EntryState *)asdOperatorNewE(count * sizeof(EntryState));
                if (states != NULL) {
                    states = __aeabi_vec_ctor_nocookie_nodtor(states, entryStateClear, sizeof(EntryState), owner->entryCount);
                }
                owner->entries = states;
            }
            FUN_004701d8(owner, kind, owner->entryCount, owner->entries);
        }
    } else {
        g_aocMain->flags &= ~0x10000u;
    }
}

/* Rebuilds the state entries for the add-on content packages (kind 0x33). */
void FUN_004715a8(AocPackageStates *owner)
{
    rebuildStates(owner, 0x33);
}

} /* extern "C" */
