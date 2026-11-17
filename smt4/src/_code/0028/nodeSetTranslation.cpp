#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

/* Applies the supplied translation (x, y, z) to the model's scene node and marks its transform
 * dirty (`index` is unused). */
void nodeSetTranslation(AsdMdlNode *node, s32 index, const f32 *position)
{
    NodeTransform *transform = &node->sceneNode->transform;
    /* Retail copies the three components as one block. */
    NodeVec3 value = *(const NodeVec3 *)position;

    transform->m[0][3] = value.x;
    transform->m[2][3] = value.z;
    transform->m[1][3] = value.y;
    transform->flags |= NODE_FLAG_TRANSFORM_DIRTY;
}

} /* extern "C" */
