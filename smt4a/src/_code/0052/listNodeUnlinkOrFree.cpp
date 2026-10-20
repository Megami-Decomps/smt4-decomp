#include "shard/Shard0051.h"

extern "C" {

typedef struct LinkNode LinkNode;
typedef struct PayloadObj PayloadObj;
typedef struct PayloadVtbl {
    /* 0x00 */ void (*destroy)(PayloadObj *obj);
} PayloadVtbl;
struct PayloadObj {
    /* 0x00 */ const PayloadVtbl *vtbl;
};

typedef struct OwnerObj OwnerObj;
typedef struct OwnerVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*free)(OwnerObj *owner, PayloadObj *payload);
} OwnerVtbl;
struct OwnerObj {
    /* 0x00 */ const OwnerVtbl *vtbl;
};

struct LinkNode {
    /* 0x00 */ OwnerObj *owner;
    /* 0x04 */ PayloadObj *payload;
    /* 0x08 */ LinkNode *next;
    /* 0x0C */ LinkNode *prev;
};

/* Unlinks the node from its list or, when it is the only member, destroys its payload and frees it. */
LinkNode *listNodeUnlinkOrFree(LinkNode *node)
{
    LinkNode *next = node->next;

    if (next == NULL || next == node) {
        if (node->payload != NULL) {
            node->payload->vtbl->destroy(node->payload);
            node->owner->vtbl->free(node->owner, node->payload);
        }
    } else {
        next->prev = node->prev;
        node->prev->next = node->next;
        node->next = NULL;
        node->prev = NULL;
    }
    node->payload = NULL;
    return node;
}

} /* extern "C" */
