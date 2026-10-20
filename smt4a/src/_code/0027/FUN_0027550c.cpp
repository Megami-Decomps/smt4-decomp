#include "common.h"

extern "C" {

void ptrListRemoveClearOwner(u32 owner, s32 handle);

typedef struct Object {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 handle;
} Object;

typedef struct Slot {
    /* 0x00 */ Object *object;
    /* 0x04 */ u8 unk04[0x44];
} Slot;                         /* 0x48 */

typedef struct SlotTable {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ Slot slots[0x18];
} SlotTable;
extern u32 g_handleRegistry;
extern SlotTable *g_mapObj;

/* Calls ptrListRemoveClearOwner for the handle of each of the 0x18 slot objects that has one. */
void FUN_0027550c(void)
{
    Object *object;
    s32 handle;
    s32 i;

    i = 0;
    do {
        object = g_mapObj->slots[i].object;
        handle = (s32)g_mapObj;
        if (object != NULL) {
            handle = object->handle;
        }
        if (object != NULL && handle != 0) {
            ptrListRemoveClearOwner(g_handleRegistry, handle);
        }
        i = i + 1;
    } while (i < 0x18);
}

} /* extern "C" */
