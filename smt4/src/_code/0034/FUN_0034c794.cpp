#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ int state;
} Obj;

u8 FUN_0034c794(Obj *obj)
{
    return obj->state == 4;
}

} /* extern "C" */
