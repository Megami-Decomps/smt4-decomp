/* NON_MATCHING: flag value, entry array/count, and cached state saved-register allocation differs. */
#include "gamedata/DataTable.h"
#include "gamedata/GameFlags.h"
#include <stddef.h>

extern "C" {

s32 gameFlagIsSet(u32 flag);
void *aocEntryFind(u8 keyA, u8 keyB);
void *gameDataGetTableEntry(u8 keyA, u8 keyB);
void FUN_002c0a9c(u32 keyA, u32 keyB, s32 value);

// Reset cached entry state if changing this flag selects a different add-on variant.
void FUN_0023ddbc(u32 flag, u32 value)
{
    // A local view avoids raising the byte-aligned shared Table02Record's alignment.
    struct FlagVariantRecord {
        u8 keyA, keyB;
        u8 unk02[8];
        u16 firstFlag; // 0x0a
        u16 secondFlag; // 0x0c
        u8 unk0e[0x92];
    };
    struct CachedVariantState {
        u8 unk00[2];
        u8 status; // 0x02
        u8 flags; // 0x03
    };
    typedef char LayoutCheck[sizeof(FlagVariantRecord) == 0xa0 &&
        offsetof(FlagVariantRecord, firstFlag) == 0xa &&
        offsetof(FlagVariantRecord, secondFlag) == 0xc ? 1 : -1];
    if (value != 0) {
        if (gameFlagIsSet(flag))
            return;
    } else {
        if (!gameFlagIsSet(flag))
            return;
    }
    void *table = dataTableGet(2, 0);
    FlagVariantRecord *entries = static_cast<FlagVariantRecord *>(dataTableGetEntries(table));
    s32 count = dataTableGetCount(table);
    for (s32 index = 0; index < count; ++index) {
        FlagVariantRecord *entry = &entries[index];
        if (entry->firstFlag == flag || entry->secondFlag == flag) {
            u8 keyA = entry->keyA;
            u8 keyB = entry->keyB;
            CachedVariantState *state = static_cast<CachedVariantState *>(gameDataGetTableEntry(keyA, keyB));
            void *oldVariant = aocEntryFind(keyA, keyB);
            gameFlagSetValue(flag, value, 0);
            void *newVariant = aocEntryFind(keyA, keyB);
            if (oldVariant != newVariant) {
                state->status = 0;
                state->flags &= ~0x1f;
                FUN_002c0a9c(keyA, keyB, 0);
            }
            gameFlagSetValue(flag, value ^ 1, 0);
        }
    }
}
}
