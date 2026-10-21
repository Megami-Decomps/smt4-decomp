/* NON_MATCHING: compiler changes the register allocation and store/frame scheduling shown by retail. */
#include "common.h"
extern "C" {
struct Node { u32 unk00; Node *next; Node *child; Node *sibling; };
void FUN_002f3474(Node *, Node *, u32);
/* Moves each visited node into the owner's shared chain. */
void FUN_0030c47e(Node *owner, Node *node) {
    while (node != NULL) {
        FUN_0030c47e(owner, node->sibling);
        Node *next = node->child;
        FUN_002f3474(owner, node, 1);
        node = next;
    }
}
}
