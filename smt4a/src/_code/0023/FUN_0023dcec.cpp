#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
u32 dataTableGetEntry24Byte0(u32 id);
const char *dataTableGetEntry24Member(u32 id);
s32 saveOptionIsEnabled(u32 option);
void efctSetSpeed(f32 value);
f32 vec2GetSpeed(const void *object);
void FUN_00164b5c(u32 layer, u32 group, s32 image, s32 x, s32 y, s32 order);
void FUN_001835b4(u32 layer, u32 group, s32 image, s32 x, s32 y, s32 order);
PanelTextLayoutEntryPrefixA *FUN_001834a4(u32 group, u32 image);
void FUN_00162790(u32 layer, u32 style, const char *text,
                  f32 x, f32 y, f32 depth, f32 spacing, f32 scale);

/* The speed object the option pulse reads sits at 0x13C of the work; its speed is the f32 at +0x20. */
struct OptionSpeedView {
    u8 prefix[0x13C];
    u8 speedObject[0x24];
};

void FUN_0023dcec(UniteWork *work, s32 row, s32 x, s32 y, s32 selected,
                  f32 baseScale, f32 factor)
{
    u32 option = dataTableGetEntry24Byte0(work->optionNamesA.ids[row]);
    efctSetSpeed(factor);
    f32 scale = baseScale * factor;
    u32 style;
    if (selected) {
        FUN_00164b5c(2, 0x1A, 0x10, x, y, 0x65);
        FUN_001835b4(2, 0x1A, 0x95, x, y, 0x6A);
        if (saveOptionIsEnabled(option)) {
            efctSetSpeed(vec2GetSpeed(&reinterpret_cast<OptionSpeedView *>(work)->speedObject) * factor);
            FUN_001835b4(2, 0x1A, 0x97, x, y, 0x6D);
            efctSetSpeed(scale);
            FUN_001835b4(2, 0x1A, 0x91, x, y, 0x6F);
        } else {
            efctSetSpeed(vec2GetSpeed(&reinterpret_cast<OptionSpeedView *>(work)->speedObject));
            FUN_001835b4(2, 0x1A, 0x96, x, y, 0x6F);
            efctSetSpeed(scale);
        }
        style = 0xFF;
    } else {
        FUN_00164b5c(2, 0x1A, 0x0F, x, y, 0x65);
        FUN_001835b4(2, 0x1A, 0x90, x, y, 0x6A);
        if (saveOptionIsEnabled(option))
            FUN_001835b4(2, 0x1A, 0x91, x, y, 0x6F);
        style = ~0u;
    }
    const char *text = dataTableGetEntry24Member(work->optionNamesA.ids[row]);
    const PanelTextLayoutEntryPrefixA *anchor = FUN_001834a4(0x1A, 0xA4);
    FUN_00162790(2, style, text, (f32)(anchor->x + x), (f32)(anchor->y + y),
                 0.55f, 0.0f, scale);
}
}
