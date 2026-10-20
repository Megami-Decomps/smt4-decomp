#include "common.h"

extern "C" {

struct Node;
struct Pool;

typedef struct PoolVtbl {
    /* 0x0 */ void *unk0;
    /* 0x4 */ void (*release)(struct Pool *pool, void *item);
} PoolVtbl;

typedef struct Pool {
    /* 0x0 */ PoolVtbl *vtbl;
} Pool;

typedef struct Item {
    /* 0x0 */ void (**vtbl)(struct Item *item);
} Item;

/* A pooled item linked into a circular list of nodes sharing one item. */
typedef struct Node {
    /* 0x0 */ Pool *pool;
    /* 0x4 */ Item *item;
    /* 0x8 */ struct Node *next;
    /* 0xC */ struct Node *prev;
} Node;

/* Unlinks the node; the last node of a list destroys the item and returns it to the pool. */
Node *poolNodeUnlinkAndDestroy(Node *node)
{
    Node *next = node->next;

    if (next == NULL || next == node) {
        if (node->item != NULL) {
            node->item->vtbl[0](node->item);
            node->pool->vtbl->release(node->pool, node->item);
        }
    } else {
        next->prev = node->prev;
        node->prev->next = node->next;
        node->next = NULL;
        node->prev = NULL;
    }
    node->item = NULL;
    return node;
}

} /* extern "C" */
