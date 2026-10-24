#ifndef GFX_CONTROLLER_MODEL_H
#define GFX_CONTROLLER_MODEL_H
#include "common.h"

/* A model driven by a controller (observed prefix). Hiding sets the low two flag bits. */
struct ControllerModel {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags;
};

extern "C" {
void controllerSetDestination(ControllerModel *model, const f32 *position);
void controllerSetRotationEulerDegrees(ControllerModel *model, f32 x, f32 y, f32 z);
s32 slots4FGetActiveValue(ControllerModel *model);
void FUN_003fe86c(ControllerModel *model, u32 index, u8 flags, f32 time, f32 blend);
}

#endif
