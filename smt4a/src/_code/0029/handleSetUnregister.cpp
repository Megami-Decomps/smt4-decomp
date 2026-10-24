#include "common.h"

extern "C" {

struct PtrListItem;
struct PtrList;

struct HandleOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ PtrListItem *item;
};

struct HandleSet {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ HandleOwner *first;
    /* 0x20 */ HandleOwner *second;
    /* 0x24 */ HandleOwner *third;
};

struct HandleContext {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ HandleSet set;
};

extern HandleContext *g_mapTrap;
extern PtrList *g_handleRegistry;

void ptrListRemoveClearOwner(PtrList *list, PtrListItem *item);

/* Unregisters the list item of each of the three handle owners from the global registry. */
void handleSetUnregister(void)
{
    HandleSet *set = &g_mapTrap->set;

    if (set->first != NULL && set->first->item != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, set->first->item);
    }
    if (set->second != NULL && set->second->item != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, set->second->item);
    }
    if (set->third != NULL && set->third->item != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, set->third->item);
    }
}

} /* extern "C" */
