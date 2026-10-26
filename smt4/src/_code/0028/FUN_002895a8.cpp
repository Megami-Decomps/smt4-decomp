#include "common.h"
#include "code/Code0028_Smt4.h"

extern "C" {

int buttonHelpRelease(void);
int scrScriptProcessDestroy(u32 process);
int asdMemFree(u32 ptr);

typedef struct Obj {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 bufferA;
    /* 0x10 */ u32 bufferB;
    /* 0x14 */ u32 script;
} Obj;

void FUN_002895a8(Obj *obj)
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
    if (obj->unk08 != 0) {
        buttonHelpRelease();
        return;
    }
}

} /* extern "C" */
