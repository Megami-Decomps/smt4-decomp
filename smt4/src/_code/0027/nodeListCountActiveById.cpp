#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 flags;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ int id;
    /* 0x0C */ struct Node *next;
} Node;

typedef struct List {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ Node *head;
} List;

/* Number of nodes with the given id that don't have flag 4 set. */
int nodeListCountActiveById(List *list, int id)
{
    int count = 0;
    Node *node;

    for (node = list->head; node != NULL; node = node->next) {
        if ((node->id == id) && ((node->flags & 4) == 0)) {
            count = count + 1;
        }
    }
    return count;
}

} /* extern "C" */
