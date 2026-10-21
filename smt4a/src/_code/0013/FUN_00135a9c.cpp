/* NON_MATCHING: retail uses push {r1, r2, r3, lr} where the compiled block uses push {r0, r1, r2, r3, lr}. */
#include "common.h"

struct TreeNode {
    u8 unk00[0x08];
    u32 value; // 0x08
};

struct Tree {
    u8 unk00[0x10];
    TreeNode* node; // 0x10
};

extern "C" void FUN_0030f2ca(u32* argument, Tree* tree, u32* value,
                             TreeNode** node);

extern "C" void FUN_00135a9c(Tree* tree, u32 unusedFirst,
                             u32 unusedSecond, u32 argument)
{
    TreeNode* node = tree->node;
    u32 value = node->value;
    FUN_0030f2ca(&argument, tree, &value, &node);
}
