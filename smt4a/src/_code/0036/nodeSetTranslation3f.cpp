#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

/* Sets the translation column of the model's scene-node transform and flags it as changed. */
void nodeSetTranslation3f(AsdMdlNode *node, s32 index, NodeVec3 translation)
{
    AsdMdlSceneNode *sceneNode = node->sceneNode;

    sceneNode->transform.m[0][3] = translation.x;
    sceneNode->transform.m[1][3] = translation.y;
    sceneNode->transform.m[2][3] = translation.z;
    sceneNode->transform.flags |= NODE_FLAG_TRANSFORM_DIRTY;
}

} /* extern "C" */
