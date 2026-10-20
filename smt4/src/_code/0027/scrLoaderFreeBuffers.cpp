#include "common.h"

extern "C" {

int scrScriptProcessDestroy(u32 process);
int asdMemFree(u32 ptr);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 bufferA;
    /* 0x10 */ u32 bufferB;
    /* 0x14 */ u32 script;
} Obj;

void scrLoaderFreeBuffers(Obj *obj)
{
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
