#include "common.h"

struct Obj3919b8Inner {
    u8 unk00[0x50];
    u32 value;
};

struct Obj3919b8 {
    u8 unk00[0x3c];
    Obj3919b8Inner **handle;
};

extern "C" u32 DAT_005c1130;

/* Copies DAT_005c1130 into the object's inner record. */
extern "C" void FUN_003919b8(Obj3919b8 *obj)
{
    (*obj->handle)->value = DAT_005c1130;
}
