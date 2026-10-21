#include "shard/W5_W5Match2_PlainData.h"

struct SelectionVisual {
    /* 0x000 */ u8 unk000[0x1fc];
    /* 0x1fc */ f32 opacity;
};

struct SelectionVisualRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ SelectionVisual *visual;
};

struct ControllerSelection {
    /* 0x000 */ u8 unk000[0x2c];
    /* 0x02c */ SelectionVisualRef *reference;
    /* 0x030 */ u32 controllers[3];
    /* 0x03c */ u32 changed;
    /* 0x040 */ u8 unk040[0x50c];
    /* 0x54c */ s32 selected;
};

struct SelectionRegistry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *background;
};

extern "C" {
extern SelectionRegistry *g_handleRegistry;
void controllerApplyAtUnitScale(u32 controller, Matrix44 *matrix, s32 flags);
void FUN_003fe86c(SelectionVisual *, s32 mode, s32 flags, f32 x, f32 y);
void FUN_003fd8dc(SelectionVisual *, s32 slot, u32 color);
void FUN_00406768(void *background, s32 slot, u32 color);

// Switch the active controller and refresh the selection and background colors.
void controllerSelectionSetMode(ControllerSelection *selection, s32 mode)
{
    if (selection->selected != mode) {
        if (selection->selected != -1)
            selection->reference->visual->opacity = 0.0f;
        selection->selected = mode;
        Matrix44 matrix;
        controllerApplyAtUnitScale(selection->controllers[selection->selected], &matrix, 0);
        selection->changed = 0;
        SelectionVisual *visual = selection->reference->visual;
        visual->opacity = 1.0f;
        SelectionRegistry *registry = g_handleRegistry;
        if (mode == 0) {
            FUN_003fe86c(visual, mode, 0, 0.0f, 0.0f);
            FUN_003fd8dc(visual, 8, 0xffffffff);
            FUN_00406768(registry->background, 0, 0x4c4c4cff);
            return;
        }
        if (mode == 1) {
            FUN_003fe86c(visual, mode, 0, 0.0f, 0.0f);
            FUN_003fd8dc(visual, 8, 0x999999ff);
            FUN_00406768(registry->background, 0, 0x191919ff);
            return;
        }
        if (mode == 2) {
            FUN_003fe86c(visual, mode, 1, 0.0f, 0.0f);
            FUN_003fd8dc(visual, 8, 0xffffffff);
            FUN_00406768(registry->background, 0, 0x4c4c4cff);
        }
    }
}
}
