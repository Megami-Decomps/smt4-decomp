#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 value;
} Obj;

void word14Clear(Obj *obj)
{
    obj->value = 0;
}

} /* extern "C" */
