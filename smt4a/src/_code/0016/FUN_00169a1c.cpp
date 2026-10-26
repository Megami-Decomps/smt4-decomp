/* NON_MATCHING: position register allocation and crop/argument store scheduling differ. */
#include "shard/W9_W9Match1_PositionedLayoutTask.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/W5_W5Match7_EntrySort.h"

extern "C" {
extern u32 g_aocSystem;
void FUN_001849bc(u32 flags, u32 table, s32 image, PositionedLayoutPosition position, const void *clip);

// Prefer an add-on icon; otherwise crop it from one of the two built-in atlases.
void FUN_00169a1c(s32 icon, s32 x, s32 y, s32 z)
{
    struct IconCrop { s32 left, right, top, bottom; };
    PositionedLayoutPosition position = {x, y, z};
    if (icon >= 0) {
        if (FUN_00191f18(g_aocSystem, icon)) {
            FUN_00191ea8(g_aocSystem, icon, position.x, position.y, position.z);
        } else if (icon < 512) {
            IconCrop crop;
            crop.left = (icon / 16) * 16;
            crop.right = crop.left + 16;
            crop.top = (icon % 16) * 32;
            crop.bottom = crop.top + 32;
            FUN_001849bc(2, 27, 0, position, &crop);
        } else {
            IconCrop crop;
            crop.left = ((icon - 512) / 16) * 16;
            crop.right = crop.left + 16;
            crop.top = ((icon - 512) % 16) * 32;
            crop.bottom = crop.top + 32;
            FUN_001849bc(2, 27, 3000, position, &crop);
        }
    }
}
}
