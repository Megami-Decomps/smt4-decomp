/* NON_MATCHING: the parent's child pointer is compared through r1 where retail uses r2 (same as the smt4 twin). */
#include "shard/W4_Match1b_Node.h"

extern "C" {

void nodeTreeReleaseSiblingsFirst(ReleaseTreeNode *node);

/* Releases a node once: its children's subtrees first, then unlinks it from its parent and siblings. */
void nodeTreeRelease(ReleaseTreeNode *node)
{
    if (node->unk00[2] != 0) {
        return;
    }
    if (node->child != NULL) {
        ReleaseTreeNode *sibling = node->child->next;
        if (sibling != NULL) {
            if (sibling->next != NULL) {
                nodeTreeReleaseSiblingsFirst(sibling->next);
            }
            nodeTreeRelease(sibling);
        }
        nodeTreeRelease(node->child);
        node->child = NULL;
    }
    ReleaseTreeNode *parent = node->parent;
    if (parent != NULL) {
        if (parent->child == node) {
            parent->child = node->next;
            if (node->next != NULL) {
                node->next->previous = NULL;
            }
        } else {
            if (node->previous != NULL) {
                node->previous->next = node->next;
            }
            if (node->next != NULL) {
                node->next->previous = node->previous;
            }
        }
        node->previous = NULL;
        node->next = NULL;
        node->parent = NULL;
    }
    node->unk00[2] = 1;
}

} /* extern "C" */
