/* NON_MATCHING: scheduling only: retail loads the first call's index constant (mov r1, #0) after the timer-flag update and uses r1 for it, built hoists it above and uses r0/r1 the other way round. */
#include "shard/S1Mover.h"
#include "classes/Obj422318.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
void modelPartSetRotationDegrees(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);
void nodeSetScale(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);

/* Clones and shows a model, resetting its root translation, rotation and scale. */
void FUN_002329a8(Obj422318 *owner, AsdMdlObject *source)
{
    owner->handle = asdMdlManagerClone(source, 0);
    lightOwnerRegister(owner->handle, 1);
    asdMdlObjectShow(owner->handle);
    owner->timerFlags |= 2;
    Vec3f origin;
    origin.x = 0.0f;
    origin.y = 0.0f;
    origin.z = 0.0f;
    nodeSetTranslation(owner->handle->node, 0, &origin.x);
    modelPartSetRotationDegrees(owner->handle->node, 0, 0.0f, 0.0f, 0.0f);
    nodeSetScale(owner->handle->node, 0, 1.0f, 1.0f, 1.0f);
}
}
