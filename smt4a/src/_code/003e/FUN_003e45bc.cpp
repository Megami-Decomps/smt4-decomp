/* NON_MATCHING: bitmap loads/stores use different address bases and unlock-flag switch tests are reordered. */
#include "gamedata/AppUnlockState.h"
#include "gamedata/AppPurchaseRecord.h"

extern "C" {
const AppPurchaseSortRecord *dataFindKeyedRecordWithOverrides(u32 id);
void FUN_002f0bd8(u32 cost);
void updateUnlockedEntryCount();
void gameFlagSetValue(u32 flag, u32 bank, u32 value);
AppUnlockState *gameDataBlockGetArea2D68();
s32 FUN_003e4230(u32 id);

// Unlock or preview an app purchase, charging points and updating category counts and unlock flags.
u32 FUN_003e45bc(u32 id, s32 ignoreRequirements, s32 preview)
{
    AppUnlockState *state = gameDataBlockGetArea2D68();
    const AppUnlockState *current = gameDataBlockGetArea2D68();
    if ((current->unlocked[id >> 3] & (1 << (id & 7))) != 0 ||
        (ignoreRequirements == 0 && FUN_003e4230(id) != 0)) {
        return 0;
    }
    if (preview == 0) {
        s32 signedId = static_cast<s32>(id);
        s32 byte = signedId / 8;
        u8 mask = static_cast<u8>(1 << (signedId % 8));
        state->unlocked[byte] |= mask;
        state->newlyUnlocked[byte] |= mask;
        updateUnlockedEntryCount();
        const AppPurchaseSortRecord *cost = dataFindKeyedRecordWithOverrides(id);
        FUN_002f0bd8(cost != NULL ? cost->primaryKey : 0);
        // The category extends past the shared sorting prefix.
        struct CatalogView {
            u8 unk00[0x22];
            u8 type;
            u8 unk23[7];
            u16 category;
        };
        const CatalogView *record = reinterpret_cast<const CatalogView *>(dataFindKeyedRecordWithOverrides(id));
        if (record->type == 0) {
            ++state->categoryCounts[record->category & 0x3f];
        }
        switch (id) {
        case 46:
            gameFlagSetValue(0x520, 0, 1);
            break;
        case 24:
            gameFlagSetValue(0x521, 0, 1);
            break;
        case 118:
            gameFlagSetValue(0x527, 0, 1);
            break;
        }
    }
    return 1;
}
}
