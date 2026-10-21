/* NON_MATCHING: retail constructor chaining retains adjusted this and wrapper addresses in r0; typed calls require saved pointers. */
#include "common.h"
#include "shard/W6_W6Match3_ChunkPool.h"

struct PoolTreeNode28;

struct TreeNode {
    u32 color; // 0x00
    TreeNode *parent; // 0x04
    TreeNode *left; // 0x08
    TreeNode *right; // 0x0c
};
struct TreeStorage {
    void *blocks; // 0x00
    TreeNode *freeNodes; // 0x04
    TreeNode *current; // 0x08
    TreeNode *end; // 0x0c
    TreeNode *sentinel; // 0x10
    u32 count; // 0x14
    u8 state; // 0x18
    u8 mode; // 0x19
    u8 unk1a[2];
};
struct OwnerValue {
    const void *vtable;
    u16 value; // 0x04
};
struct TreeOwner {
    u32 unk00;
    TreeStorage tree; // 0x04
    OwnerValue value; // 0x20
};

extern "C" {
PoolTreeNode28* FUN_00300690(ChunkPool*);
void FUN_002eb530(OwnerValue *);
void constructObj00559344(OwnerValue *, u16);

// Initialize the pooled tree and its value wrapper.
TreeOwner *FUN_002f1378(TreeOwner *owner, u8 mode)
{
    TreeStorage *tree = &owner->tree;
    tree->blocks = NULL;
    tree->sentinel = NULL;
    tree->count = 0;
    tree->state = 0;
    tree->mode = mode;
    tree->end = NULL;
    tree->current = NULL;
    tree->freeNodes = NULL;
    tree->sentinel = reinterpret_cast<TreeNode*>(FUN_00300690(reinterpret_cast<ChunkPool*>(tree)));
    tree->sentinel->parent = NULL;
    tree->sentinel->left = tree->sentinel;
    tree->sentinel->right = tree->sentinel;
    FUN_002eb530(&owner->value);
    OwnerValue initialValue;
    constructObj00559344(&initialValue, 1);
    owner->value.value = initialValue.value;
    return owner;
}
}
