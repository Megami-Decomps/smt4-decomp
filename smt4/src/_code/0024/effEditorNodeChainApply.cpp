#include "common.h"

extern "C" {

int FUN_001b1b8c(void *node, int flag);

typedef struct Node {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ struct Node *next;
} Node;

void effEditorNodeChainApply(Node *node)
{
    Node *child;

    FUN_001b1b8c(node, 1);
    for (child = node->next; child != NULL; child = child->next) {
        FUN_001b1b8c(child, 0);
    }
}

} /* extern "C" */
