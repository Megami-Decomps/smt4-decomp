#include "shard/W4_Match1b_Node.h"

struct ScaleNode {
    u8 unk00[8];
    NodeOwner *owner; // 0x08
};

struct ScaleGroup {
    u8 unk00[8];
    ScaleNode *root;       // 0x08
    u8 unk0c[0xc];
    struct {
        ScaleNode *node;   // 0x18
        u8 unk1c[0x4c];
    } children[3];         // stride 0x50
};

extern "C" {

void FUN_0028c618(NodeOwner *owner, s32 unused, NodeVec3 scale);

static void setScaleNode(ScaleNode *node, NodeVec3 scale)
{
    FUN_0028c618(node->owner, 0, scale);
}

// Apply the scale to the group's root node and to each of its three child nodes.
void FUN_003351e0(ScaleGroup *group, NodeVec3 scale)
{
    setScaleNode(group->root, scale);
    for (s32 i = 0; i < 3; i++) {
        if (group->children[i].node != NULL) {
            setScaleNode(group->children[i].node, scale);
        }
    }
}

} /* extern "C" */
