/* NON_MATCHING: crop cells now match; retail keeps y in r6 and z in r5 (built swaps them) and stores the by-value position words separately. */
#include "shard/W9_W9Match1_PositionedLayoutTask.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "shard/W5_W5Match7_EntrySort.h"

struct IconCrop { s32 left, right, top, bottom; };

// Source rectangle of one 16x32 icon cell in an atlas.
static __inline void iconCropSet(IconCrop *crop, s32 index)
{
    crop->left = (index / 16) * 16;
    crop->right = crop->left + 16;
    crop->top = (index % 16) * 32;
    crop->bottom = crop->top + 32;
}

extern "C" {
extern u32 g_aocSystem;
void FUN_001849bc(u32 flags, u32 table, s32 image, PositionedLayoutPosition position, const void *clip);

// Prefer an add-on icon; otherwise crop it from one of the two built-in atlases.
void FUN_00169a1c(s32 icon, s32 x, s32 y, s32 z)
{
    PositionedLayoutPosition position = {x, y, z};
    if (icon >= 0) {
        if (FUN_00191f18(g_aocSystem, icon)) {
            FUN_00191ea8(g_aocSystem, icon, position.x, position.y, position.z);
        } else if (icon < 512) {
            IconCrop crop;
            iconCropSet(&crop, icon);
            FUN_001849bc(2, 27, 0, position, &crop);
        } else {
            IconCrop crop;
            iconCropSet(&crop, icon - 512);
            FUN_001849bc(2, 27, 3000, position, &crop);
        }
    }
}
}
