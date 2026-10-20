#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ u8 unk00[0xAC];
    /* 0xAC */ struct Node *next;
} Node;

typedef struct Owner {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ Node *head;
} Owner;

/* Number of nodes in the owner's list. */
int effEditorNodeListCount(Owner *owner)
{
    int count = 0;
    Node *node;

    for (node = owner->head; node != NULL; node = node->next) {
        count++;
    }
    return count;
}

} /* extern "C" */
