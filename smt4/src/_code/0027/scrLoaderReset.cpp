#include "common.h"

extern "C" {

int scrScriptProcessDestroy(u32 process);
int asdMemFree(u32 ptr);

typedef struct Obj {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 bufferA;
    /* 0x10 */ u32 bufferB;
    /* 0x14 */ u32 script;
} Obj;

void scrLoaderReset(Obj *obj)
{
    obj->unk04 = 0xf;
    obj->unk00 = 0;
    if (obj->bufferA != 0) {
        asdMemFree(obj->bufferA);
        obj->bufferA = 0;
    }
    if (obj->bufferB != 0) {
        asdMemFree(obj->bufferB);
        obj->bufferB = 0;
    }
    if (obj->script != 0) {
        scrScriptProcessDestroy(obj->script);
        obj->script = 0;
    }
}

} /* extern "C" */
