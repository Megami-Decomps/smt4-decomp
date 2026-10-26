/* NON_MATCHING: compiler tail-calls the angle conversion helper rather than retaining retail PUSH/BL/POP. */
#include "common.h"
#include "gfx/EulerPhaseRotation.h"
extern "C" {
struct Angles { f32 x,y,z; };
struct RotationResource { u8 unk00[0x4C]; u8 rotation[1]; };
struct RotationOwner { u8 unk00[0x2C]; RotationResource *resource; u8 unk30[0x54]; Angles angles; };
void FUN_0024bfb8(Matrix34Data *matrix,f32 x,f32 y,f32 z);
/* Keep the supplied degree angles and apply their radian form to the resource. */
void modelSetAnglesDegrees(RotationOwner *owner,u32 unused,const Angles *angles) { owner->angles=*angles; FUN_0024bfb8((Matrix34Data *)owner->resource->rotation,angles->x*0.01745329238474369f,angles->y*0.01745329238474369f,angles->z*0.01745329238474369f); }
}
