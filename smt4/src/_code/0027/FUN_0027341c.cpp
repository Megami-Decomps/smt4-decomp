/* Resets the object to state 11 with the given flag, freeing its three buffers. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 state;
    /* 0x08 */ u8 flag;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ void *bufferA;
    /* 0x10 */ void *bufferB;
    /* 0x14 */ void *bufferC;
} Object;

extern void asdMemFree(void *buffer);
extern void scrScriptProcessDestroy(void *buffer);
extern void FUN_0028d6d0(u8 flag);

void FUN_0027341c(Object *obj, u8 flag)
{
    obj->flag = flag;
    obj->state = 11;
    obj->unk00 = 0;
    if (obj->bufferA != NULL) {
        asdMemFree(obj->bufferA);
        obj->bufferA = NULL;
    }
    if (obj->bufferB != NULL) {
        asdMemFree(obj->bufferB);
        obj->bufferB = NULL;
    }
    if (obj->bufferC != NULL) {
        scrScriptProcessDestroy(obj->bufferC);
        obj->bufferC = NULL;
    }
    if (obj->flag != 0) {
        FUN_0028d6d0(obj->flag);
    }
}

}
