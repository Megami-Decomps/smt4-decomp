#ifndef GFX_MODELBONEATTACHMENT_H
#define GFX_MODELBONEATTACHMENT_H
#include "AsdSDK/Source/Gfx/Model/AsdMotionModel.h"
#include "gfx/ModelBoneLookup.h"
#include "gfx/HandleRegistry.h"
struct ModelBoneAttachmentRoot {
    u8 unk00[8];
    AsdMotionModel *model;
    GfxHandleNode *children;
};
struct ModelBoneAttachment {
    ModelBoneAttachmentRoot *object;
    s32 destinationBone;
    s32 sourceBone;
};
typedef char ModelBoneAttachmentLayoutCheck[
    offsetof(ModelBoneAttachmentRoot, model) == 8 && offsetof(ModelBoneAttachmentRoot, children) == 0xc &&
    offsetof(ModelBoneAttachment, sourceBone) == 8 && sizeof(ModelBoneAttachment) == 0xc ? 1 : -1];
#endif
