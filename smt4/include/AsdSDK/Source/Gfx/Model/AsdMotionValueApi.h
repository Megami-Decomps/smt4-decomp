#ifndef SMT4_ASDSDK_GFX_MODEL_ASDMOTIONVALUEAPI_H
#define SMT4_ASDSDK_GFX_MODEL_ASDMOTIONVALUEAPI_H
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
/* The active motion's scalar value, or zero when no motion is active. */
f32 ownerGetFloatValue(const AsdMdlNode *node);
f32 sndObjectForwardField8(const AsdMdlObject *object);
/* The outer model holder stores its model object at offset eight. */
f32 FUN_0027f94c(const void *holder);
}
#endif
