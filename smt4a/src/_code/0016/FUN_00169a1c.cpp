/* NON_MATCHING: same source as its smt4 twin FUN_002b6940: armcc shrink-wraps the negative-icon exit (cmp; bxlt lr before the push) where retail sets up the frame first, which shifts the argument copies. */
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {
extern u32 g_aocSystem;
void FUN_001849bc(s32 layer, u32 group, u32 image, s32 x, s32 y, u32 style, const void *region);

// Prefer an add-on icon; otherwise crop it from one of the two built-in atlases.
void FUN_00169a1c(s32 icon, s32 x, s32 y, s32 z)
{
    struct IconCrop { s32 left, right, top, bottom; };
    if (icon >= 0) {
        if (FUN_00191f18(g_aocSystem, icon)) {
            FUN_00191ea8(g_aocSystem, icon, x, y, z);
        } else if (icon < 512) {
            IconCrop crop;
            crop.left = (icon / 16) * 16;
            crop.right = crop.left + 16;
            crop.top = (icon % 16) * 32;
            crop.bottom = crop.top + 32;
            FUN_001849bc(2, 27, 0, x, y, z, &crop);
        } else {
            const s32 index = icon - 512;
            IconCrop crop;
            crop.left = (index / 16) * 16;
            crop.right = crop.left + 16;
            crop.top = (index % 16) * 32;
            crop.bottom = crop.top + 32;
            FUN_001849bc(2, 27, 3000, x, y, z, &crop);
        }
    }
}
}
