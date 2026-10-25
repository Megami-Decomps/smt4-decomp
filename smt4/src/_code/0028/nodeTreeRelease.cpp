/* NON_MATCHING: the parent's child pointer is compared through r1 where retail uses r2. */
#include "common.h"
#include "util/NodeTreeReleaseFollowingSiblings.h"

extern "C" {

/* A tree node: children hang off `child`, linked through next/prev. */
typedef struct Node {
    u8 unk00[2];
    u8 released;       /* 0x02 */
    u8 unk03[0x21];
    struct Node *parent; /* 0x24 */
    struct Node *child;  /* 0x28 */
    struct Node *prev;   /* 0x2c */
    struct Node *next;   /* 0x30 */
} Node;


/* Releases the node's subtree and unlinks it from its parent and siblings; once only. */
void nodeTreeRelease(Node *node)
{
    Node *first;
    Node *parent;

    if (node->released != 0) {
        return;
    }
    if (node->child != NULL) {
        first = node->child->next;
        if (first != NULL) {
            if (first->next != NULL) {
                nodeTreeReleaseFollowingSiblings(first->next);
            }
            nodeTreeRelease(first);
        }
        nodeTreeRelease(node->child);
        node->child = NULL;
    }
    parent = node->parent;
    if (parent != NULL) {
        if (node == parent->child) {
            parent->child = node->next;
            if (node->next != NULL) {
                node->next->prev = NULL;
            }
        } else {
            if (node->prev != NULL) {
                node->prev->next = node->next;
            }
            if (node->next != NULL) {
                node->next->prev = node->prev;
            }
        }
        node->prev = NULL;
        node->next = NULL;
        node->parent = NULL;
    }
    node->released = 1;
}

} /* extern "C" */
