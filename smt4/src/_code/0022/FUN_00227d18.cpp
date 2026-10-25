#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct MainEntry {
    /* 0x00 */ u32 flags;
} MainEntry;

MainEntry *btlMainFindEntryByListedId(void *state, u32 id);
int FUN_00337900(void *state, MainEntry *entry, s32 kind);

/* Looks up the main entry for a listed id and runs FUN_00337900 for each of its flag bits 0x2000 (kind 1) and 0x4000 (kind 2). */
void FUN_00227d18(u32 id)
{
    MainEntry *entry = btlMainFindEntryByListedId(static_cast<void *>(btlGetMainState()), id);

    if (entry->flags & 0x2000) {
        FUN_00337900(static_cast<void *>(btlGetMainState()), entry, 1);
    }
    if (entry->flags & 0x4000) {
        FUN_00337900(static_cast<void *>(btlGetMainState()), entry, 2);
    }
}

} /* extern "C" */
