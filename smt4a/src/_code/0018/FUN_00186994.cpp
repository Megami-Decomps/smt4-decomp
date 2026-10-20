#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
    /* 0x0C */ u8 unk0C[0x0C];
    /* 0x18 */ struct Node *next;
} Node;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ Node *first;
} Owner;

void FUN_0019e04c(u32 value, Owner *owner);

/* Calls FUN_0019e04c with each node's value and the owner. */
void FUN_00186994(Owner *owner)
{
    Node *node;

    for (node = owner->first; node != NULL; node = node->next) {
        FUN_0019e04c(node->value, owner);
    }
}

} /* extern "C" */
