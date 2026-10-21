/* NON_MATCHING: retail emits 'push {r0, r1, r2, r3, r4, r5, r6, lr}'; compiler emits 'push {r4, r5, r6, r7, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Node { Node *next; Node *previous; u8 address[8]; };
struct Owner { u8 unk00[0x10]; Node *sentinel; };
s32 onlineSockAddrEquals(const void *, const void *);
s32 wordRefsDiffer_002fd750(Node **first, Node **second);
void FUN_00307d38(u32 *result, Owner *owner, Node **position);
void FUN_002fdbec(Owner *owner, const void *address) {
    Node *node = owner->sentinel->next;
    while (wordRefsDiffer_002fd750(&node, &owner->sentinel)) {
        Node *next = node->next;
        if (onlineSockAddrEquals(node->address, address)) {
            u32 result;
            Node *position = node;
            FUN_00307d38(&result, owner, &position);
        }
        node = next;
    }
}
}
