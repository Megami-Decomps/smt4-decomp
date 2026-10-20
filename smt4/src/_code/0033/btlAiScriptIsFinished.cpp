#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ int state;
} Obj;

u8 btlAiScriptIsFinished(Obj *obj)
{
    return obj->state == 4;
}

} /* extern "C" */
