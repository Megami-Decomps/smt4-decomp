/* NON_MATCHING: register swap only: retail keeps the constant 1 in r8 and the alternate table base in r7, armcc here the reverse.
 * Copying the parameter into a local (`void *menu` cast to `work`, as the IV twin FUN_003a07a0 casts its ShopWork *)
 * gives IDENTICAL, but so does a same-type copy, so it is not kept without evidence the parameter had another type. */
#include "shard/Shard0049.h"

struct EquipmentDetailPair { s32 first, second; };
struct EquipmentImageGroup { u32 images[8]; };
struct EquipmentDetailImages {
    u8 prefix[0xB8];
    EquipmentImageGroup first;
    EquipmentImageGroup second;
};
struct AlternateEquipmentDetails {
    EquipmentDetailPair pages[8];
    EquipmentDetailPair lockedFirst;
    EquipmentDetailPair lockedFourth;
};

extern "C" {
extern const EquipmentDetailPair DAT_00588ef0[];
extern const AlternateEquipmentDetails g_shopTabNeighbors;
extern const EquipmentDetailImages g_equipMenuStateHandlerInit;
s32 gameFlagIsSet(u32);
void FUN_0049368c(const AsdTextureRegion *, u32, s32, s32, u32, u32);

/* Draws the equipment detail decorations of the current page, unless the page is locked. */
void FUN_00494574(EquipmentMenuState *work, s32 selection)
{
    if (work->sound.mode == 0) {
        if (selection == 7) {
            return;
        }
    } else if (work->sound.mode == 1) {
        if (selection == 7) {
            return;
        }
    }
    if (work->page != 0 || (!work->sound.restricted && gameFlagIsSet(0x410)) || work->sound.mode == 1) {
        u32 color = work->detail.color;
        FUN_0049368c(&work->detail.region, 0x65, 0, 0, color, 1);
        FUN_0049368c(&work->detail.region, 0x66, 0, 0, color, 1);
        s32 firstIndex;
        s32 secondIndex;
        if (work->sound.mode == 1) {
            firstIndex = g_shopTabNeighbors.pages[work->page].first;
            secondIndex = g_shopTabNeighbors.pages[work->page].second;
            if (work->page == 0 && (work->sound.restricted || !gameFlagIsSet(0x410))) {
                firstIndex = g_shopTabNeighbors.lockedFirst.first;
                secondIndex = g_shopTabNeighbors.lockedFirst.second;
            } else if (work->page == 3 && (work->sound.restricted || !gameFlagIsSet(0x410))) {
                firstIndex = g_shopTabNeighbors.lockedFourth.first;
                secondIndex = g_shopTabNeighbors.lockedFourth.second;
            }
        } else {
            firstIndex = DAT_00588ef0[work->page].first;
            secondIndex = DAT_00588ef0[work->page].second;
        }
        EquipmentImageGroup first = g_equipMenuStateHandlerInit.first;
        EquipmentImageGroup second = g_equipMenuStateHandlerInit.second;
        FUN_0049368c(&work->detail.region, first.images[firstIndex], 0, 0, color, 1);
        FUN_0049368c(&work->detail.region, second.images[secondIndex], 0, 0, color, 1);
    }
}
}
