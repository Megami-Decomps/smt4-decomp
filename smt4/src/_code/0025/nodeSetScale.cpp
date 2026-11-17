#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

/* Sets the scale of the model's scene-node transform and flags it as changed. */
void nodeSetScale(AsdMdlNode *node, s32 index, NodeVec3 scale)
{
    NodeTransform *transform = &node->sceneNode->transform;

    transform->scale = scale;
    transform->flags |= NODE_FLAG_TRANSFORM_DIRTY;
}

} /* extern "C" */
