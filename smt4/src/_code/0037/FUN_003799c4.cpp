#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x8];
    /* 0x08 */ int value;
} Obj;

u8 FUN_003799c4(Obj *obj)
{
    return obj->value != 0;
}

} /* extern "C" */
