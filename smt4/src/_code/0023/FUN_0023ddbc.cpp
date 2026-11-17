/* NON_MATCHING: flag value, entry array/count, and cached state saved-register allocation differs. */
#include "gamedata/EncountData.h"
#include "gamedata/GameFlags.h"
#include <stddef.h>
#include "addon/AocSystem_Smt4.h"

extern "C" {

s32 gameFlagIsSet(u32 flag);
void *gameDataGetTableEntry(u8 keyA, u8 keyB);
void weightedTableRollNextValue(u32 keyA, u32 keyB, s32 value);

// Reset cached entry state if changing this flag selects a different add-on variant.
void FUN_0023ddbc(u32 flag, u32 value)
{
    struct CachedVariantState {
        u8 unk00[2];
        u8 status; // 0x02
        u8 flags; // 0x03
    };
    if (value != 0) {
        if (gameFlagIsSet(flag))
            return;
    } else {
        if (!gameFlagIsSet(flag))
            return;
    }
    void *table = dataTableGet(2, 0);
    EncountRecord *entries = encountRecords(table);
    s32 count = dataTableGetCount(table);
    for (s32 index = 0; index < count; ++index) {
        EncountRecord *entry = &entries[index];
        if (entry->requiredFlag == flag || entry->excludedFlag == flag) {
            u8 keyA = entry->map;
            u8 keyB = entry->area;
            CachedVariantState *state = static_cast<CachedVariantState *>(gameDataGetTableEntry(keyA, keyB));
            void *oldVariant = aocEntryFind(keyA, keyB);
            gameFlagSetValue(flag, value, 0);
            void *newVariant = aocEntryFind(keyA, keyB);
            if (oldVariant != newVariant) {
                state->status = 0;
                state->flags &= ~0x1f;
                weightedTableRollNextValue(keyA, keyB, 0);
            }
            gameFlagSetValue(flag, value ^ 1, 0);
        }
    }
}
}
