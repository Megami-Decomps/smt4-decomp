/* NON_MATCHING: branch layout and icon-coordinate registers differ; texture lookup is a retail debug forwarding stub with a recovered call ABI. */
#include "ui/DemonIconPanel.h"
#include "shard/S1ListPanel.h"

extern "C" {
SpriteInfo *FUN_002bf4f0(AsdTextureRegion *region, u32 image);
void devilDrawIconRelative(AsdTextureRegion *region, s32 demon, s32 x, s32 y, u32 color);
s32 partyHasStoredDemon(u16 demon);
void FUN_00231bcc(AsdTextureRegion *region, u32 image, s32 x, s32 y, u32 color, u32 flags);

// Draw a row's demon icon and, when requested, its stored-demon badge.
void FUN_0022dcac(DemonIconPanel *panel, s32 showOwned, s32 demon,
                  s32 row, s32 alternate, u32 color)
{
    SpriteInfo *rowInfo;
    if (alternate)
        rowInfo = FUN_002bf4f0(&panel->region, row + 0x42F);
    else
        rowInfo = FUN_002bf4f0(&panel->region, row + 0x40E);
    s32 x = rowInfo->x;
    s32 y = rowInfo->y;
    SpriteInfo *iconInfo;
    if (alternate)
        iconInfo = FUN_002bf4f0(&panel->region, 0x495);
    else
        iconInfo = FUN_002bf4f0(&panel->region, 0x487);
    devilDrawIconRelative(&panel->region, (s16)demon, iconInfo->x + x, iconInfo->y + y, color);
    if (showOwned && partyHasStoredDemon(demon)) {
        if (!alternate) {
            FUN_00231bcc(&panel->region, 0x486, x, y, color, 1);
            return;
        }
        FUN_00231bcc(&panel->region, 0x494, x, y, color, 1);
    }
}
}
