#ifndef SMT4_ASDSDK_GFX_MODEL_ASDMOTIONCHANNELAPI_H
#define SMT4_ASDSDK_GFX_MODEL_ASDMOTIONCHANNELAPI_H
#include "common.h"
struct AsdMdlObject;
struct AsdMdlNode;
extern "C" {
void modelSetAnimationChannels(AsdMdlObject *owner, s32 index, f32 blend);
void modelSelectPrimaryMotion(AsdMdlNode *model, s32 motionIndex, f32 blend);
}
#endif
