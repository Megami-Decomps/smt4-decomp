/* NON_MATCHING: Otime duplicates traversal tests and splits the stack frame; Ospace is near but places the range endpoints in reversed stack slots. */
#include "shard/W6_W6Match3_TreeCopy.h"

extern "C" void FUN_00301be2(TreeCopyNode** result, OnlineRecordTree* tree,
    TreeCopyNode* const* first, TreeCopyNode* const* last);
extern "C" TreeCopyNode* FUN_00309fcc(OnlineRecordTree* tree,
    const TreeCopyNode* source, TreeCopyNode* parent);

// Replace the tree's nodes, preserving its existing sentinel and allocator state.
extern "C" OnlineRecordTree* onlineTreeAssign(OnlineRecordTree* destination,
    const OnlineRecordTree* source)
{
    if (destination != source) {
        TreeCopyNode* last = destination->sentinel;
        TreeCopyNode* first = last->left;
        TreeCopyNode* erased;
        FUN_00301be2(&erased, destination, &first, &last);
        TreeCopyNode* root = FUN_00309fcc(destination,
            source->sentinel->parent, destination->sentinel);
        destination->sentinel->parent = root;
        TreeCopyNode* sentinel = destination->sentinel;
        if (root == NULL) {
            sentinel->left = sentinel;
            destination->sentinel->right = destination->sentinel;
        } else {
            TreeCopyNode* left = root;
            while (left->left != NULL) {
                left = left->left;
            }
            sentinel->left = left;
            TreeCopyNode* right = destination->sentinel->parent;
            while (right->right != NULL) {
                right = right->right;
            }
            destination->sentinel->right = right;
        }
        destination->count = source->count;
    }
    return destination;
}
