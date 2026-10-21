#include "common.h"

extern "C" {

typedef __packed struct Obj {
    /* 0x000 */ u8 unk000[0x120];
    /* 0x120 */ u8 kind;
    /* 0x121 */ u8 flag;
    /* 0x122 */ u32 a;
    /* 0x126 */ u32 b;
    /* 0x12A */ u32 c;
    /* 0x12E */ u32 d;
} Obj;

void objSetKindFlagValues(Obj *obj, u8 kind, u8 flag, u32 *values)
{
    obj->kind = kind;
    obj->flag = flag;
    if (values != NULL) {
        obj->a = values[0];
        obj->b = values[1];
        obj->c = values[2];
        obj->d = values[3];
    }
}

} /* extern "C" */
