#include "shard/W6_W6Match3_ChunkPool.h"
#include "shard/W6_W6Match3_TreeCopy.h"

struct OnlineTreeCopyState {
    ChunkPool pool;
    TreeCopyNode* sentinel;
    u32 count;
    u8 option;
    u8 policy;
    u8 unk1a[2];
};

/* Leftmost / rightmost node of the subtree below `node`. */
static TreeCopyNode* treeMinimum(TreeCopyNode* node)
{
    while (node->left != NULL) {
        node = node->left;
    }
    return node;
}

static TreeCopyNode* treeMaximum(TreeCopyNode* node)
{
    while (node->right != NULL) {
        node = node->right;
    }
    return node;
}

extern "C" {
TreeCopyNode* FUN_00301df0(ChunkPool* pool);
TreeCopyNode* FUN_00309fcc(OnlineRecordTree* tree, const TreeCopyNode* source, TreeCopyNode* parent);

OnlineRecordTree* FUN_001301be(OnlineRecordTree* destination, const OnlineRecordTree* source, u8 option)
{
    OnlineTreeCopyState* state = reinterpret_cast<OnlineTreeCopyState*>(destination);
    const OnlineTreeCopyState* sourceState = reinterpret_cast<const OnlineTreeCopyState*>(source);
    state->pool.chunks = NULL;
    state->sentinel = NULL;
    state->count = sourceState->count;
    state->option = option;
    state->policy = sourceState->policy;
    state->pool.limit = NULL;
    state->pool.cursor = NULL;
    state->pool.freeList = NULL;
    state->sentinel = FUN_00301df0(&state->pool);
    state->sentinel->colorByte = 0;
    TreeCopyNode* root = FUN_00309fcc(destination, sourceState->sentinel->parent, state->sentinel);
    state->sentinel->parent = root;
    TreeCopyNode* sentinel = state->sentinel;
    if (root != NULL) {
        TreeCopyNode* left = treeMinimum(root);
        sentinel->left = left;
        TreeCopyNode* last = state->sentinel;
        last->right = treeMaximum(last->parent);
    } else {
        sentinel->left = sentinel;
        state->sentinel->right = state->sentinel;
    }
    return destination;
}
}
