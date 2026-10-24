#include "common.h"

struct SList {
    u32 head;
};

struct ListOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ SList list;
};

extern "C" {

void slistPushFront(SList *list, void *node);

/* Pushes the node onto the owner's list unless it is null. */
void slistPushFrontIfNotNull(ListOwner *owner, void *node)
{
    SList *list = &owner->list;
    if (node != NULL) {
        slistPushFront(list, node);
    }
}

} /* extern "C" */
