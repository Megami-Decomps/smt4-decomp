#ifndef SMT4_ASDSDK_GFX_MODEL_ASDMOTIONCONTROLAPI_H
#define SMT4_ASDSDK_GFX_MODEL_ASDMOTIONCONTROLAPI_H
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionChannelApi.h"
struct ScalarAnimationOwner;
/* Observed common model-holder prefix, not a complete holder definition. */
struct AsdModelHolderPrefix {
    u8 prefix[8];
    AsdMdlObject *model;
};
extern "C" {
void modelSetScale(AsdMdlNode *model, f32 speed);
void FUN_0028703c(ScalarAnimationOwner *model, f32 time);
/* These forward into the adjacent real callee; armlink removes the tail branch. */
void FUN_002a5704(void *holder, s32 motionIndex, f32 blend);
void FUN_0029bb08(void *holder, f32 speed);
void FUN_00287030(void *holder, f32 time);
}
#endif
