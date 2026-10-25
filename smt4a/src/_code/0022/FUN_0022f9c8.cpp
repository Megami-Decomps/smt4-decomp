/* NON_MATCHING: selected-option cold block placement, pulse multiply association and centered-text address scheduling differ. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/TextureDrawCall.h"
#include "shard/S1ListPanel.h"

extern "C" {
void efctSetSpeed(f32 speed);
void FUN_00164b5c(u32 screen, u32 table, u32 frame, s32 x, s32 y, u32 priority);
const char *dataTableGetEntry24Member(u32 id);
const SpriteInfo *FUN_001834a4(u32 table, u32 frame);
s32 fontMeasureLineAdvance(const char *text, u32 screen);
void FUN_00162790(u32 screen, u32 color, const char *text,
    f32 x, f32 y, f32 size, f32 angle, f32 opacity);

void FUN_0022f9c8(UniteWork *work, s32 index, s32 x, s32 y, s32 selected, s32 active,
    f32 opacity, f32 fade)
{
    efctSetSpeed(fade);
    u32 color;
    if (selected) {
        FUN_00164b5c(2, 26, 11, x, y, 101);
        color = 255;
        efctSetSpeed(0.5f + (work->optionPulse.amount * 0.5f) * fade);
        if (active)
            FUN_001835b4(2, 26, 160, x, y, 111);
        else
            FUN_001835b4(2, 26, 156, x, y, 111);
    } else if (active) {
        FUN_00164b5c(2, 26, 10, x, y, 101);
        color = 0xFFFFFFFF;
        FUN_001835b4(2, 26, 160, x, y, 111);
    } else {
        FUN_00164b5c(2, 26, 9, x, y, 101);
        color = 0xFFFFFFFF;
        FUN_001835b4(2, 26, 156, x, y, 111);
    }
    opacity *= fade;
    efctSetSpeed(opacity);
    const char *name = dataTableGetEntry24Member(work->optionNamesA.ids[index]);
    const SpriteInfo *anchor = FUN_001834a4(26, 164);
    s32 width = fontMeasureLineAdvance(name, 2);
    FUN_00162790(2, color, name, (f32)(anchor->x + (anchor->size[0] - width) / 2 + x),
        (f32)(anchor->y + y), 0.55f, 0.0f, opacity);
}
}
