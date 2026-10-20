/* Allocates and constructs a node from the pool and links it into the list (its link member lives at +0x1B0); returns the node, or NULL if the pool is exhausted. */
#include "common.h"

extern "C" {

typedef struct Node {
    /* 0x000 */ u8 unk000[0x1B0];
    /* 0x1B0 */ u8 link[1];
} Node;

typedef struct List {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 head[4];
    /* 0x08 */ u8 end[1];
} List;

extern void *nw_snd_internal_PoolImpl_AllocImpl(void);
extern Node *FUN_00466b00(void *memory);
extern void nw_ut_internal_LinkListImpl_insert(void *list, void *position, void *link);

Node *FUN_004626dc(List *list)
{
    void *memory = nw_snd_internal_PoolImpl_AllocImpl();
    Node *node;

    if (memory == NULL) {
        node = NULL;
    } else {
        node = FUN_00466b00(memory);
    }
    void *head = list->head;
    void *end = list->end;
    void *link = node->link;

    nw_ut_internal_LinkListImpl_insert(head, end, link);
    return node;
}

}
