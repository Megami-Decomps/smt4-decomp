#include "common.h"

extern "C" {

void FUN_00241b24(void *object, s32 flag);

typedef struct Node {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ struct Node *next;
} Node;

/* Calls FUN_00241b24(object, 1), then FUN_00241b24(node, 0) for each node chained after it. */
void effEditorNodeChainApply(Node *object)
{
    Node *node;

    FUN_00241b24(object, 1);
    for (node = object->next; node != NULL; node = node->next) {
        FUN_00241b24(node, 0);
    }
}

} /* extern "C" */
