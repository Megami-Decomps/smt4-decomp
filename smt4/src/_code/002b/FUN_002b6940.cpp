/* NON_MATCHING: armcc shrink-wraps the negative-icon exit (cmp; bxlt lr before the push); retail sets up the frame first. Everything after the prologue matches. */
#include "shard/W9_W9Match1_PositionedLayoutTask.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "code/Code0014_Smt4.h"

extern "C" {
extern u32 g_aocSystem;
void FUN_002b04e8(s32 layer, u32 group, u32 image, s32 x, s32 y, u32 style, const void *region);

// Prefer an add-on icon; otherwise crop it from one of the two built-in atlases.
void FUN_002b6940(s32 icon, s32 x, s32 y, s32 z)
{
    struct IconCrop { s32 left, right, top, bottom; };
    if (icon >= 0) {
        if (FUN_0014143c(g_aocSystem, icon)) {
            effectSubmitPackageRequest(g_aocSystem, icon, x, y, z);
        } else if (icon < 512) {
            IconCrop crop;
            crop.left = (icon / 16) * 16;
            crop.right = crop.left + 16;
            crop.top = (icon % 16) * 32;
            crop.bottom = crop.top + 32;
            FUN_002b04e8(2, 37, 0, x, y, z, &crop);
        } else {
            const s32 index = icon - 512;
            IconCrop crop;
            crop.left = (index / 16) * 16;
            crop.right = crop.left + 16;
            crop.top = (index % 16) * 32;
            crop.bottom = crop.top + 32;
            FUN_002b04e8(2, 37, 3000, x, y, z, &crop);
        }
    }
}
}
