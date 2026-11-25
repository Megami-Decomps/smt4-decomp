/* NON_MATCHING: the mask and flag loads are in retail order, but the two halves and their addresses
 * use different scratch registers. */
#include "battle/btlMain.h"
#include "camp/CampCec/CampCecView.h"
#include "gamedata/GameDataAccess_VariantJ.h"
#include "shard/BattleFlagMasks.h"

/* Allows the StreetPass list if explicitly enabled, a debug count is set, or a saved mark exists. */
extern "C" u32 FUN_003e98e0(BtlMainStateA *battle)
{
    u64 mask = g_btlMain.streetPassListOverrideMask;
    if (!(battle->markerMasks.bits & mask) && ((u32)battle->debugValues.ddmDevilCount - 1) > 3) {
        s32 used = 0;
        for (s32 i = 0; i < CAMP_CEC_VIEW_ENTRY_COUNT; i++) {
            if (((const CampCecMarkEntry *)gameDataGetMarkEntry(i))->count != 0) {
                used++;
            }
        }
        if (used < 1) {
            return 0;
        }
    }
    return 1;
}
