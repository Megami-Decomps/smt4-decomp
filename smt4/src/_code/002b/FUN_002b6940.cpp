/* NON_MATCHING: position register allocation and crop/argument store scheduling differ. */
#include "shard/W9_W9Match1_PositionedLayoutTask.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "code/Code0014_Smt4.h"

extern "C" {
extern u32 g_aocSystem;
void FUN_002b04e8(u32 flags, u32 table, s32 image, PositionedLayoutPosition position, const void *clip);

// Prefer an add-on icon; otherwise crop it from one of the two built-in atlases.
void FUN_002b6940(s32 icon, s32 x, s32 y, s32 z)
{
    struct IconCrop { s32 left, right, top, bottom; };
    PositionedLayoutPosition position = {x, y, z};
    if (icon >= 0) {
        if (FUN_0014143c(g_aocSystem, icon)) {
            effectSubmitPackageRequest(g_aocSystem, icon, position.x, position.y, position.z);
        } else if (icon < 512) {
            IconCrop crop;
            crop.left = (icon / 16) * 16;
            crop.right = crop.left + 16;
            crop.top = (icon % 16) * 32;
            crop.bottom = crop.top + 32;
            FUN_002b04e8(2, 37, 0, position, &crop);
        } else {
            IconCrop crop;
            crop.left = ((icon - 512) / 16) * 16;
            crop.right = crop.left + 16;
            crop.top = ((icon - 512) % 16) * 32;
            crop.bottom = crop.top + 32;
            FUN_002b04e8(2, 37, 3000, position, &crop);
        }
    }
}
}
