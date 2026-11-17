/* The model-body (Obj557b18) functions the controller code calls on a content's body. */
#ifndef GFX_CONTROLLER_MODEL_H
#define GFX_CONTROLLER_MODEL_H
#include "common.h"
#include "classes/Obj557b18.h"
#include "map/MapVector.h"

extern "C" {
/* Moves the body to `position` (its translation at +0x1B4). */
void controllerSetDestination(Obj557b18 *body, const MapVector *position);
void controllerSetPositionXyz(Obj557b18 *body, f32 x, f32 y, f32 z);
/* Sets the body's scale (+0x1F0). */
void controllerSetPosition(Obj557b18 *body, f32 x, f32 y, f32 z);
/* Builds the body's rotation matrix from Euler angles in degrees. */
void controllerSetRotationEulerDegrees(Obj557b18 *body, f32 x, f32 y, f32 z);
/* The clip the body is playing. */
s32 slots4FGetActiveValue(Obj557b18 *body);
/* Starts motion `index` in the other motion slot, blending from the current one over `blend` frames. */
void FUN_003fd924(Obj557b18 *body, u32 index, u8 loop, f32 frame, f32 blend);
/* Starts material animation `index`. */
void moriModelUnitStartMaterialAnimation(Obj557b18 *body, u32 index, u8 mode, f32 speed);
/* Plays clip `index` on the body: both motion layers, the material animation and the effects. */
void modelPlayClip(Obj557b18 *body, u32 index, u8 flags, f32 time, f32 blend);
}

#endif
