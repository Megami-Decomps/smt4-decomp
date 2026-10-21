/* NON_MATCHING: retail emits 'push {r2, r3, r4, r5, r6, lr}'; compiler emits 'push {r3, r4, r5, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Node { Node *next; Node *previous; u32 result; u8 address; };
struct Object { u8 unk00[0x14]; Node *sentinel; };
s32 FUN_002ee978(const void *address);
s32 wordRefsDiffer_002ee988(Node **first, Node **second);
u32 *FUN_002fe278(Object *object, s32 value) {
    Node *node = object->sentinel->next;
    while (wordRefsDiffer_002ee988(&node, &object->sentinel)) {
        if (FUN_002ee978(&node->address) == value) return &node->result;
        node = node->next;
    }
    return NULL;
}
}
