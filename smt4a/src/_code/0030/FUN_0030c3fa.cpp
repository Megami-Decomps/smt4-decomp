/* NON_MATCHING: compiler uses different register allocation, frame setup or instruction scheduling than retail. */
#include "common.h"
extern "C" {
struct Node { u32 unk00; Node *next; Node *child; Node *sibling; };
/* Recursively visits children and moves sibling nodes onto the owner's chain. */
void FUN_0030c3fa(Node *owner, Node *node) {
    while (node != NULL) {
        FUN_0030c3fa(owner, node->sibling);
        node->sibling = owner->next;
        owner->next = node;
        node = node->child;
    }
}
}
