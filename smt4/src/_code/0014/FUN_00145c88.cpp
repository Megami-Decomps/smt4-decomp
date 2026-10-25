/* NON_MATCHING: source/destination provider traversal matches; world-matrix result/index operand allocation still omits one retail move. */
#include "gfx/ModelBoneAttachment.h"
extern "C" {
s32 modelHasLoadedAttachment(const ModelBoneAttachmentRoot *object);
void nn_math_ARMv6_MTX34CopyAsm(SkeletonMatrix34 *destination, const SkeletonMatrix34 *source);


// Copy the parent's selected world transform into this bone, then synchronize attached descendants.
u32 FUN_00145c88(ModelBoneAttachment *attachment, ModelBoneAttachmentRoot *parent)
{
    if (!modelHasLoadedAttachment(attachment->object))
        return 0;
    ModelBoneMatrixProvider *source = parent->model->owner->secondary.skeleton.provider;
    ModelBoneMatrixProvider *destination = attachment->object->model->owner->secondary.skeleton.provider;
    ModelBoneWorldMatrixSet *worldMatrices = source->vtable->getWorldMatrices(source);
    SkeletonMatrix44 *world = &worldMatrices->matrices[attachment->sourceBone];
    SkeletonMatrix34 transform = *reinterpret_cast<SkeletonMatrix34 *>(world);
    SkeletonMatrix34 *matrix = &destination->vtable->getMatrices(destination)->matrices[attachment->destinationBone];
    nn_math_ARMv6_MTX34CopyAsm(matrix, &transform);
    ModelBoneAttachmentRoot *object = attachment->object;
    for (GfxHandleNode *child = object->children; child != NULL; child = child->next)
        FUN_00145c88(reinterpret_cast<ModelBoneAttachment *>(child->data[1]), object);
    return 1;
}
}
