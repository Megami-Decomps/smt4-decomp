#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ int unk1C;
} Obj;

/* Argument validation: returns an error code or 0. */
u32 argsValidate(Obj *obj, int a, int b, u32 count)
{
    u32 result;

    if (obj->unk1C == 0) {
        result = 0xd820ebf8;
    } else if (a == 0 || b == 0) {
        result = 0xe0e0ebf6;
    } else if (count > 0x10) {
        result = 0xe0e0ebec;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
