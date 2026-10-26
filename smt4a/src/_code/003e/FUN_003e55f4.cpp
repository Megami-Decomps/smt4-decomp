/* Marks the linked child of each of the four entries as touched (flags |= 3) and notifies it. */
#include "common.h"
#include "code/Code003e_Smt4a.h"

extern "C" {

typedef struct Child {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 flags;
} Child;

typedef struct Entry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Child *child;
} Entry;

typedef struct Slot {
    /* 0x00 */ Entry *entry;
    /* 0x04 */ u8 unk04[0x58];
} Slot; /* 0x5C */

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Entry *primary;
    /* 0x0C */ u8 unk0C[0x18];
    /* 0x24 */ Slot slots[3];
} Holder;

extern u32 g_handleRegistry;

extern void ptrListRemoveClearOwner(u32 arg, Child *child);

void FUN_003e55f4(Holder *holder)
{
    Child *child;
    s32 i;

    child = holder->primary->child;
    if (child != NULL) {
        child->flags |= 3;
        ptrListRemoveClearOwner(g_handleRegistry, child);
    }
    for (i = 0; i < 3; i++) {
        child = holder->slots[i].entry->child;
        if (child != NULL) {
            child->flags |= 3;
            ptrListRemoveClearOwner(g_handleRegistry, child);
        }
    }
}

}
