/* NON_MATCHING: primary animation reset stores are scheduled differently. */
/* Resets the target-selection animation when changing display mode. */
#include "battle/btlTargetSelect.h"

extern "C" {
extern BtlTargetSelect *g_btlTargetSelect;

void FUN_002eb278(u32 mode)
{
    /* The mode and animation fields extend beyond the shared UI prefixes. */
    struct PrimaryView {
        u8 unk000[0xE5];
        u8 active;
        u8 unk0E6[2];
        f32 phase;
        f32 speed;
        f32 elapsed;
        u8 unk0F4[4];
        f32 progress;
        f32 target;
        f32 values[8];
        u8 unk120[4];
        f32 timer;
        f32 duration;
    };
    struct MarkerView { u8 unk00[0xF]; u8 active; };
    struct SecondaryView {
        u8 unk00[4];
        MarkerView markers[5];
        u8 unk54[4];
        f32 timer;
        f32 duration;
    };
    struct SelectionView {
        PrimaryView *primary;
        SecondaryView *secondary;
        u8 mode;
    };
    SelectionView *selection = (SelectionView *)g_btlTargetSelect;
    if (selection->mode != mode) {
        if (mode == 1) {
            PrimaryView *primary = selection->primary;
            primary->elapsed = 0.0f;
            primary->phase = 0.0f;
            primary->timer = 0.0f;
            primary->duration = 40.0f;
            for (s32 i = 0; i < 8; ++i) {
                primary->values[i] = 0.0f;
            }
            primary->progress = 0.0f;
            primary->speed = 4.0f;
            primary->target = 0.0f;
            primary->active = 0;
        }
        if (selection->mode == 2) {
            SecondaryView *secondary = selection->secondary;
            for (s32 i = 0; i < 5; ++i) {
                secondary->markers[i].active = 0;
            }
            secondary->timer = 0.0f;
            secondary->duration = 40.0f;
        }
    }
    selection->mode = mode;
}
}
