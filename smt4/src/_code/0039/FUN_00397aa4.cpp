#include "common.h"

extern "C" {

int buttonHelpRelease(void);
int scrScriptProcessDestroy(u32 process);
int asdTMTexTableFreeEntry(int table);
int asdTMTexTableReleaseNode(int table, int index);
int ifTouchRegionRemove(void);
int FUN_002bff50(void);
int asdMemFree(u32 ptr);
int __aeabi_memset4(void *dst, int size, u32 value);

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

    buttonHelpRelease();
    if (0 < obj->count) {
        i = 0;
        do {
            ifTouchRegionRemove();
            i = i + 1;
        } while (i < obj->count);
        __aeabi_memset4(obj->table, 0x11e, 0xffffffff);
        obj->count = 0;
    }
    asdTMTexTableReleaseNode(0x2e, 0);
    asdTMTexTableFreeEntry(0x2e);
    scrScriptProcessDestroy(obj->script);
    asdMemFree(obj->bufferA);
    asdMemFree(obj->bufferB);
    FUN_002bff50();
}

} /* extern "C" */
