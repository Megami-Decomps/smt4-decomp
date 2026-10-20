/* NON_MATCHING: retail copies `node` to r4 before the branch and reads r4 for the payload argument; built reads r1 */
/* Pushes `node` onto the front of the list, constructing its payload first when `construct` is set. */
#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ struct Node *next;
    /* 0x10 */ u8 payload[1];
} Node;

typedef struct NodeList {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Node *head;
} NodeList;

extern void FUN_00124a4e(void *payload);

void FUN_002fe97c(NodeList *list, Node *node, s32 construct)
{
    node->next = list->head;
    if (construct != 0) {
        FUN_00124a4e(node->payload);
    }
    list->head = node;
}

}
