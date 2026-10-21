#include "common.h"

namespace { struct Node { u8 padding[0x90]; u32 key; u8 gap[0x18]; Node *next; }; struct Owner { u8 padding[0x8c]; Node *first; }; }

extern "C" {
/* Reads or updates the requested task state. */
Node *nodeListFindByKey(const Owner *owner, u32 key)
{
    for (Node *node = owner->first; node != NULL; node = node->next) {
        if (node->key == key) {
            return node;
        }
    }
    return NULL;
}
}
