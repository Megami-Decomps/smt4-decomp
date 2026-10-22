#include "common.h"

struct ControllerPresetPosition {
    f32 x;
    f32 y;
    f32 z;
};
struct ControllerPresetState {
    /* 0x00 */ ControllerPresetPosition position;
    /* 0x0C */ u8 unk0c[0x10];
    /* 0x1C */ void *holder;
    /* 0x20 */ u8 unk20[0x10];
    /* 0x30 */ s32 mode;
};
extern "C" {
void controllerTargetNodeStart(void *holder, s32 index, f32 time);
void linkHolderRunAll(void *holder, ControllerPresetPosition *position);
}

/* Choose a controller preset and apply its position to every linked target. */
extern "C" void controllerApplyPreset(ControllerPresetState *state, u32 preset)
{
    if (state == NULL) {
        return;
    }
    state->position.x = 1.2f;
    state->position.y = 5.3f;
    state->position.z = 0.5f;
    s32 index;
    switch (preset) {
    case 0: state->mode = 1; index = 0; break;
    case 1: state->mode = 1; index = 1; break;
    case 2: state->mode = 1; index = 39; break;
    case 3: state->mode = 55; index = 37; break;
    case 4: state->mode = 1; index = 2; break;
    case 5: state->mode = 1; index = 20; break;
    case 6: state->mode = 6; index = 3; break;
    case 7: state->mode = 10; index = 22; break;
    case 8: state->mode = 13; index = 14; break;
    case 9: state->mode = 30; index = 8; break;
    case 10:
        state->mode = 38;
        index = 35;
        state->position.x = 1.0f;
        state->position.y = 5.4f;
        state->position.z = 1.5f;
        break;
    default: state->mode = 1; index = 0; break;
    }
    controllerTargetNodeStart(state->holder, index, 0.0f);
    ControllerPresetPosition position = state->position;
    linkHolderRunAll(state->holder, &position);
}
