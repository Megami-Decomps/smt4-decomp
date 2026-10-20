#include "common.h"

extern "C" {

extern int _ZN9Obj422594D1Ev(void *block);
extern int FUN_00263c34(int value);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x2E8];
    /* 0x2E8 */ u8 block[1];
} Obj;

int FUN_0027e974(Obj *obj)
{
    int value = _ZN9Obj422594D1Ev(obj->block);

    value = FUN_00263c34(value - 0x34);
    return value - 0x2b4;
}

} /* extern "C" */
