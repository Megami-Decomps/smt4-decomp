/* The model-body (Obj557b18) functions the controller code calls on a content's body. */
#ifndef GFX_CONTROLLER_MODEL_H
#define GFX_CONTROLLER_MODEL_H
#include "common.h"
#include "classes/Obj557b18.h"
#include "map/MapVector.h"
#include "code/Code003f.h"

/* What the name lookups below return when the body's resource has no animation of that name. */
#define MODEL_MOTION_NONE 0xffff

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
void motionPlayerStartBlended(Obj557b18 *body, u32 index, u8 loop, f32 frame, f32 blend);
/* Starts material animation `index`. */
void moriModelUnitStartMaterialAnimation(Obj557b18 *body, u32 index, u8 mode, f32 speed);
/* Starts clip `index` of the body's animation resource. */
void animationSelectClip(Obj557b18 *body, u32 index, u8 mode, f32 frame);
/* The index of the motion, material animation and clip the body's resource names `name` (FUN_003fdadc gives
 * the name of the body's state), or MODEL_MOTION_NONE. */
u32 ownerSlotSetText(Obj557b18 *body, u32 name);
u32 FUN_001a79e8(Obj557b18 *body, u32 name);
u32 FUN_004ffab8(Obj557b18 *body, u32 name);
/* Plays clip `index` on the body: both motion layers, the material animation and the effects. */
void modelPlayClip(Obj557b18 *body, u32 index, u8 flags, f32 time, f32 blend);
}

#endif
