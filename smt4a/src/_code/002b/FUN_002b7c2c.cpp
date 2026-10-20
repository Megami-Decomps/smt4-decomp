#include "common.h"

extern "C" {

void ptrListRemoveClearOwner(u32 owner, u32 handle);

typedef struct Object {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 handle;
} Object;

typedef struct Record {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[0x27];
    /* 0x28 */ u8 enabled;
    /* 0x29 */ u8 unk29[3];
    /* 0x2C */ Object *object;
    /* 0x30 */ u8 hasObject;
    /* 0x31 */ u8 unk31[0x23];
} Record;                       /* 0x54 */

/* The table at 0x581038 holds 16 records from 0x5C and, overlapping their start, two rows of eight object slots from 0x20 (only seven per row are used). */
typedef struct Table {
    /* 0x00 */ u8 unk00[0x5C];
    /* 0x5C */ Record records[0x10];
} Table;

typedef struct ObjectRows {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Object *objects[2][8];
} ObjectRows;

extern u32 g_handleRegistry;
extern Table *g_mapHakai;

/* Releases the handle of every record object that is active, enabled and present, and of every object in the two rows of seven slots. */
void FUN_002b7c2c(void)
{
    Record *record;
    Object *object;
    u32 handle;
    s32 i;
    s32 j;

    i = 0;
    do {
        record = &g_mapHakai->records[i];
        handle = 0;
        if (record->active != 0) {
            handle = (u32)record->enabled;
        }
        if (record->active != 0 && handle != 0) {
            handle = (u32)record->hasObject;
            if (handle != 0) {
                object = record->object;
            }
            if (handle != 0 && object != NULL) {
                handle = object->handle;
                if (handle != 0) {
                    ptrListRemoveClearOwner(g_handleRegistry, handle);
                }
            }
        }
        i = i + 1;
    } while (i < 0x10);
    i = 0;
    do {
        j = 0;
        do {
            object = ((ObjectRows *)g_mapHakai)->objects[i][j];
            if (object != NULL) {
                handle = object->handle;
            }
            if (object != NULL && handle != 0) {
                ptrListRemoveClearOwner(g_handleRegistry, handle);
            }
            j = j + 1;
        } while (j < 7);
        i = i + 1;
    } while (i < 2);
}

} /* extern "C" */
