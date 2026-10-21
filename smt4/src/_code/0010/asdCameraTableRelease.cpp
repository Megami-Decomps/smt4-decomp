#include "common.h"

extern "C" {

int FUN_002bc9cc(s32 resource);

typedef struct ResourceTable {
    /* 0x00 */ s32 slots[0x20];
    /* 0x80 */ u32 unk80;
    /* 0x84 */ u32 unk84;
} ResourceTable;

typedef struct ResourceOwner {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ ResourceTable *table;
} ResourceOwner;

extern ResourceOwner g_asdCamera;

/* Releases every nonzero slot of the owner's table, then its two trailing entries. */
s32 asdCameraTableRelease(void)
{
    s32 i = 0;
    ResourceTable *table = g_asdCamera.table;

    do {
        if (table->slots[i] != 0) {
            FUN_002bc9cc(table->slots[i]);
        }
        i++;
    } while (i < 0x20);
    FUN_002bc9cc(table->unk80);
    FUN_002bc9cc(table->unk84);
    return 0;
}

} /* extern "C" */
