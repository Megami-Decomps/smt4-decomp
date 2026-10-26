/* NON_MATCHING: scheduling only at the start: retail keeps `mov r0,#12` before loading bufferA, built hoists the load */
/* Resets the object to state 12 with the given flag, frees its three buffers, then enters state 13 and pokes the two device slots that are in mode 3. */
#include "common.h"
#include "code/Code0013.h"
#include "AsdSDK/AsdMemAlloc.h"

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

extern void scrScriptProcessDestroy(void *buffer);
extern void campButtonHelpAcquire(u8 flag);
extern void FUN_003d54f8(s32 slot, s32 mode);

void FUN_0047e430(Object *obj, u8 flag)
{
    obj->flag = flag;
    obj->state = 12;
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
        campButtonHelpAcquire(obj->flag);
    }
    obj->state = 13;
    if (FUN_0013def0(0) == 3) {
        FUN_003d54f8(0, 5);
    }
    if (FUN_0013def0(1) == 3) {
        FUN_003d54f8(1, 5);
    }
}

}
