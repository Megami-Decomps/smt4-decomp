#include "common.h"

extern "C" {

extern int effGetFrameCounter(void);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ int total;
} Obj;

void effAccumulateFrames(Obj *obj)
{
    int value = effGetFrameCounter();

    obj->total = value + obj->total;
}

} /* extern "C" */
