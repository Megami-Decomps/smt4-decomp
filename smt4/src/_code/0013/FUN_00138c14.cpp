#include "common.h"
#include "code/Code0013_Smt4.h"

extern "C" {

int FUN_00145c88(u32 item, void *list);

typedef struct Node {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 item;
    /* 0x0C */ u8 unk0C[0xC];
    /* 0x18 */ struct Node *next;
} Node;

typedef struct List {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ Node *head;
} List;

/* Passes every node's item of the list to FUN_00145c88. */
void FUN_00138c14(List *list)
{
    Node *node;

    for (node = list->head; node != NULL; node = node->next) {
        FUN_00145c88(node->item, list);
    }
}

} /* extern "C" */
