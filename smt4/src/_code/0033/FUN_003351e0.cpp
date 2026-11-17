#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

struct ScaleGroup {
    u8 unk00[8];
    AsdMdlObject *root;      // 0x08
    u8 unk0c[0xc];
    struct {
        AsdMdlObject *node;      // 0x18
        u8 unk1c[0x4c];
    } children[3];         // stride 0x50
};

extern "C" {

/* Takes the rotation by value here; other callers pass three floats (see modelPartSetRotationDegrees.cpp). */
void modelPartSetRotationDegrees(AsdMdlNode *node, s32 index, NodeVec3 degrees);

static void setModelScale(AsdMdlObject *model, NodeVec3 scale)
{
    modelPartSetRotationDegrees(model->node, 0, scale);
}

// Apply the scale to the group's root node and to each of its three child nodes.
void FUN_003351e0(ScaleGroup *group, NodeVec3 scale)
{
    setModelScale(group->root, scale);
    for (s32 i = 0; i < 3; i++) {
        if (group->children[i].node != NULL) {
            setModelScale(group->children[i].node, scale);
        }
    }
}

} /* extern "C" */
