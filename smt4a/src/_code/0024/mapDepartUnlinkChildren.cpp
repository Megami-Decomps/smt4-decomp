/* Matches with -O2 (requested): built at a lower optimisation level than the game code. */
/* Calls ptrListRemoveClearOwner for the linked child of each of the two entries, if present. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *child;
} Entry;

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ Entry *first;
    /* 0x10 */ Entry *second;
} Holder;

extern Holder *g_mapDepartWork;
extern u32 g_handleRegistry;

extern void ptrListRemoveClearOwner(u32 arg, void *child);

void mapDepartUnlinkChildren(void)
{
    Entry *entry = g_mapDepartWork->first;

    if (entry != NULL && entry->child != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, entry->child);
    }
    entry = g_mapDepartWork->second;
    if (entry != NULL && entry->child != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, entry->child);
    }
}

}
