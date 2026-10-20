#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ int value;
} Obj;

u8 FUN_00379a04(Obj *obj)
{
    return obj->value != 0;
}

} /* extern "C" */
