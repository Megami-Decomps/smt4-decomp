#include "common.h"

struct PresetSelection {
    u8 unk00[0x14];
    u32 bank;
    u32 index;
    u8 unk1c[0x14];
    u32 options;
    u32 kind;
    u32 arguments[3];
};

struct PresetSelectionController {
    u8 unk00[0x11f0];
    PresetSelection *selected;
    s8 dirty;
    u8 submittedState;
};

extern "C" {
void FUN_00183da0(u32 bank, u32 index, u32 kind, u32 options, u32, u32, u32);
void dataSubmitSelectedPresetBlock(s32 enabled);

// Upload a changed preset and synchronize whether a preset is selected.
void FUN_0016c4b8(PresetSelectionController *controller, PresetSelection *selected)
{
    if (controller->dirty || controller->selected != selected) {
        controller->selected = selected;
        if (selected != NULL) {
            FUN_00183da0(selected->bank, selected->index, selected->kind, selected->options,
                         selected->arguments[0], selected->arguments[1], selected->arguments[2]);
            controller->submittedState = 3;
        }
    }
    controller->dirty = 0;
    u8 state;
    if (selected != NULL) {
        state = 1;
        if (controller->submittedState == state)
            return;
    } else {
        state = 0;
        if (controller->submittedState == state)
            return;
    }
    dataSubmitSelectedPresetBlock(state);
    controller->submittedState = state;
}
}
