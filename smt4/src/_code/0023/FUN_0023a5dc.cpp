#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ s32 end;
    /* 0x5C */ s32 position;
} Obj;

/* Distance left between position and end. */
int FUN_0023a5dc(Obj *obj)
{
    return obj->end - obj->position;
}

} /* extern "C" */
