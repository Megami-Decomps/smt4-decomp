/* NON_MATCHING: fog color conversion order, VFP save grouping and depth-range arithmetic scheduling differ. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

struct ModelFogSettings {
    u8 unk00[0x40];
    s32 mode; // 0x40
    s32 red, green, blue; // 0x44..0x4c
    s32 start, distance; // 0x50..0x54
    u32 parameter; // 0x58
};
struct ModelFogRange {
    u32 mode;
    f32 start, end;
    u32 parameter;
};
// The model's fog data extends beyond the shared AsdMdlNode prefix.
struct ModelFogView {
    u8 unk00[0xb4];
    f32 red, green, blue, alpha; // 0xb4..0xc0
    u32 unkC4;
    s32 rangeOffset; // 0xc8, relative to this field
};
extern "C" {
u32 asdModelIdListGet(s32 index, s32 list);

// Apply normalized fog color and mapped depth range to the primary model.
void FUN_00340350(const ModelFogSettings *settings)
{
    f32 start = (f32)settings->start * 0.001f + 25570.0f;
    f32 end = (f32)settings->start * 0.001f + (f32)settings->distance * 0.001f + 25570.0f;
    f32 red = (f32)settings->red * 0.003921569f;
    f32 green = (f32)settings->green * 0.003921569f;
    f32 blue = (f32)settings->blue * 0.003921569f;
    AsdMdlObject *model = (AsdMdlObject *)asdModelIdListGet(0, 0);
    ModelFogView *fog = (ModelFogView *)model->node;
    fog->blue = blue;
    fog->alpha = 1.0f;
    fog->red = red;
    fog->green = green;
    ModelFogRange *range = fog->rangeOffset ? (ModelFogRange *)((u8 *)&fog->rangeOffset + fog->rangeOffset) : NULL;
    switch (settings->mode) {
    case 0: range->mode = 1; break;
    case 1: range->mode = 2; break;
    case 2: range->mode = 3; break;
    }
    range->start = start;
    range->end = end;
    range->parameter = settings->parameter;
}
}
