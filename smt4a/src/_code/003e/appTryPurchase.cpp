/* NON_MATCHING: bitmap loads/stores use different address bases; unlock-flag if-chain now preserves retail test order. */
#include "gamedata/AppUnlockState.h"
#include "gamedata/AppUnlockBits.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GauntletAppTable.h"
#include "gamedata/DataTableAccess.h"

extern "C" {
void FUN_002f0bd8(u32 cost);
void updateUnlockedEntryCount();

s32 shopGetEntryAvailability(u32 id);

// Unlock or preview an app purchase, charging points and updating category counts and unlock flags.
u32 appTryPurchase(u32 id, s32 ignoreRequirements, s32 preview)
{
    AppUnlockState *state = (AppUnlockState *)gameDataBlockGetArea2D68();
    const AppUnlockState *current = (const AppUnlockState *)gameDataBlockGetArea2D68();
    if ((current->unlocked[id >> 3] & (1 << (id & 7))) != 0 ||
        (ignoreRequirements == 0 && shopGetEntryAvailability(id) != 0)) {
        return 0;
    }
    if (preview == 0) {
        s32 signedId = static_cast<s32>(id);
        s32 byte = signedId / 8;
        u8 mask = static_cast<u8>(1 << (signedId % 8));
        state->unlocked[byte] |= mask;
        state->newlyUnlocked[byte] |= mask;
        updateUnlockedEntryCount();
        const GauntletAppRecordA *cost = (const GauntletAppRecordA *)dataFindKeyedRecordWithOverrides(id);
        FUN_002f0bd8(cost != NULL ? cost->cost : 0);
        const GauntletAppRecordA *record = (const GauntletAppRecordA *)dataFindKeyedRecordWithOverrides(id);
        if (record->kind == 0) {
            ++state->categoryCounts[record->levelAndCategory & 0x3f];
        }
        if (id == 46) {
            gameFlagSetValue(0x520, 0, 1);
        } else if (id == 24) {
            gameFlagSetValue(0x521, 0, 1);
        } else if (id == 118) {
            gameFlagSetValue(0x527, 0, 1);
        }
    }
    return 1;
}
}
