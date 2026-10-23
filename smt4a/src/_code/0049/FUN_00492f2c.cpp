/* NON_MATCHING: rectangle stack slots and final coordinate-conversion/store scheduling differ. */
#include "shard/ScrollbarGeometry.h"
#include "shard/W5_W5Match2_ScalarArguments.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {
extern const u32 DAT_00587fe4[3];
extern const u32 DAT_00587ff0[3];
extern const u32 DAT_00587ffc[3];
s32 recordCompareKind(const InputKindRecord *record);
void FUN_0049368c(const AsdTextureRegion *, u32 image, s32 x, s32 y, u32 color, u32 flags);
void FUN_00492c98(u32 mode, AsdTexture *, u32 image, s32 x, s32 y, u32 width, u32 height, u32 color, u32 flags);
void FUN_004d09f8(const ScrollbarGeometry *, s32 *x, s32 *y, s32 *width, s32 *height);

void FUN_00492f2c(const ScrollbarGeometry *bar, u32 color)
{
    // The drawable extension lies beyond the shared geometry prefix.
    struct DrawingView {
        u32 reserved;
        u16 flags;
        u8 padding[0x5E];
        AsdTextureRegion *region;
    };
    const DrawingView *drawing = reinterpret_cast<const DrawingView *>(bar);
    const InputKindRecord *kind = reinterpret_cast<const InputKindRecord *>(bar);
    FUN_0049368c(drawing->region, DAT_00587fe4[recordCompareKind(kind)], 0, 0, color, 1);
    if (drawing->flags & 1)
        FUN_0049368c(drawing->region, DAT_00587fe4[recordCompareKind(kind)] + 2, 0, 0, color, 1);
    FUN_0049368c(drawing->region, DAT_00587ff0[recordCompareKind(kind)], 0, 0, color, 1);
    if (drawing->flags & 2)
        FUN_0049368c(drawing->region, DAT_00587ff0[recordCompareKind(kind)] + 2, 0, 0, color, 1);
    FUN_0049368c(drawing->region, DAT_00587ffc[recordCompareKind(kind)], 0, 0, color, 1);
    s32 x, y, width, height;
    FUN_004d09f8(bar, &x, &y, &width, &height);
    u32 image = DAT_00587ffc[recordCompareKind(kind)] + 1;
    if (drawing->flags & 0x150)
        image = DAT_00587ffc[recordCompareKind(kind)] + 2;
    const AsdTextureRegion *region = drawing->region;
    FUN_00492c98(2, region->texture, image,
        (s32)(region->x + region->width + (f32)x),
        (s32)(region->y + region->height + (f32)y),
        width, height, color, 1);
}
}
