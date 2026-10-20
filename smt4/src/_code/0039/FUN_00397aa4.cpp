#include "common.h"

extern "C" {

int FUN_002917b8(void);
int scrScriptProcessDestroy(u32 process);
int asdTMTexTableFreeEntry(int table);
int FUN_002ae898(int table, int index);
int FUN_002b8cc8(void);
int FUN_002bff50(void);
int asdMemFree(u32 ptr);
int FUN_002c424c(void *dst, int size, u32 value);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x64C];
    /* 0x64C */ u32 bufferB;
    /* 0x650 */ u32 bufferA;
    /* 0x654 */ u32 script;
    /* 0x658 */ u8 unk658[0x1C8];
    /* 0x820 */ u8 table[0x11E];
    /* 0x93E */ s16 count;
} Obj;

void FUN_00397aa4(Obj *obj)
{
    int i;

    FUN_002917b8();
    if (0 < obj->count) {
        i = 0;
        do {
            FUN_002b8cc8();
            i = i + 1;
        } while (i < obj->count);
        FUN_002c424c(obj->table, 0x11e, 0xffffffff);
        obj->count = 0;
    }
    FUN_002ae898(0x2e, 0);
    asdTMTexTableFreeEntry(0x2e);
    scrScriptProcessDestroy(obj->script);
    asdMemFree(obj->bufferA);
    asdMemFree(obj->bufferB);
    FUN_002bff50();
}

} /* extern "C" */
