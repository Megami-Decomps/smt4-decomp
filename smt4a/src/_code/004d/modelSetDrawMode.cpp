#include "shard/S1GfxModel.h"
#include "shard/W5_W5Match2_PlainData.h"
#include "gfx/CameraAnimationApply.h"

struct SceneModeObject {
    /* 0x000 */ u8 unk000[0x1fc];
    /* 0x1fc */ f32 weight;
};

struct ModelModeState {
    /* 0x000 */ u8 unk000[0x40];
    /* 0x040 */ ModelSlot *slots[2];
    /* 0x048 */ void *controllers[3];
    /* 0x054 */ s32 timer;
    /* 0x058 */ u8 unk058[0x50c];
    /* 0x564 */ s32 mode;
    /* 0x568 */ u8 unk568[0xc];
    /* 0x574 */ s32 slot;
};

struct ModelModeRegistry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *renderer;
};

extern "C" {
extern ModelModeRegistry *g_handleRegistry;
void FUN_003fe86c(SceneModeObject *, s32 mode, s32 enabled, f32 start, f32 end);
void FUN_003fd8dc(SceneModeObject *, s32 slot, u32 color);
void FUN_00406768(void *renderer, s32 slot, u32 color);

// Change the controller and the scene's draw-mode/color treatment.
void modelSetDrawMode(ModelModeState *state, s32 mode)
{
    if (state->mode != mode) {
        if (state->mode != -1) {
            static_cast<SceneModeObject *>(state->slots[state->slot]->sceneObject)->weight = 0.0f;
        }
        state->mode = mode;
        Matrix44 matrix;
        controllerApplyAtUnitScale(state->controllers[state->mode], &matrix, 0);
        state->timer = 0;
        SceneModeObject *object = static_cast<SceneModeObject *>(state->slots[state->slot]->sceneObject);
        object->weight = 1.0f;
        ModelModeRegistry *registry = g_handleRegistry;
        if (mode == 0) {
            FUN_003fe86c(object, mode, 0, 0.0f, 0.0f);
            FUN_003fd8dc(object, 8, 0xffffffff);
            FUN_00406768(registry->renderer, 0, 0x4c4c4cff);
        } else if (mode == 1) {
            FUN_003fe86c(object, mode, 0, 0.0f, 0.0f);
            FUN_003fd8dc(object, 8, 0x999999ff);
            FUN_00406768(registry->renderer, 0, 0x191919ff);
        } else if (mode == 2) {
            FUN_003fe86c(object, mode, 1, 0.0f, 0.0f);
            FUN_003fd8dc(object, 8, 0xffffffff);
            FUN_00406768(registry->renderer, 0, 0x4c4c4cff);
        }
    }
}
}
