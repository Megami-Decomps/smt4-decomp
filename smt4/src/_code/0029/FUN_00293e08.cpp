/* NON_MATCHING: retail saves the by-value scale in s16..s18 in x,y,z order (vmov.f64 d8,d0); built saves z,y,x. Stride and calls match. */
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

void nodeSetScale(NodeOwner *owner, s32 unused, NodeVec3 scale);

// Apply the scale to the group's root node and to each of its three child nodes.
void FUN_00293e08(ScaleGroup *group, NodeVec3 scale)
{
    nodeSetScale(group->root->owner, 0, scale);
    for (s32 i = 0; i < 3; i++) {
        if (group->children[i].node != NULL) {
            nodeSetScale(group->children[i].node->owner, 0, scale);
        }
    }
}

} /* extern "C" */
