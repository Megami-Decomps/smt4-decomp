#include "common.h"

extern "C" {

void ptrListRemoveClearOwner(u32 owner, s32 handle);

typedef struct Object {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 handle;
} Object;

typedef struct Slot {
    /* 0x00 */ Object *object;
    /* 0x04 */ u8 unk04[0x38];
} Slot;                         /* 0x3C */

typedef struct SlotTable {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ Slot slots[0x40];
} SlotTable;
extern u32 g_handleRegistry;
extern SlotTable *g_mapNpcWork;

/* Calls ptrListRemoveClearOwner for the handle of each of the 0x40 slot objects that has one, from the last slot to the first. */
void resourceRemoveSlotOwners(void)
{
    Object *object;
    s32 handle;
    s32 i;

    i = 0x3F;
    do {
        object = g_mapNpcWork->slots[i].object;
        handle = (s32)g_mapNpcWork;
        if (object != NULL) {
            handle = object->handle;
        }
        if (object != NULL && handle != 0) {
            ptrListRemoveClearOwner(g_handleRegistry, handle);
        }
        i = i - 1;
    } while (i >= 0);
}

} /* extern "C" */
