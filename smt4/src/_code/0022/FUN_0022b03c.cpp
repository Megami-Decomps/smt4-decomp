#include "common.h"

extern "C" {

int FUN_00233670(void *block, int a, int b, int c);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ u8 block[0x10];
    /* 0x84 */ u8 unk84;
} Obj;

void FUN_0022b03c(Obj *obj)
{
    FUN_00233670(obj->block, 0x2a, 5, 10);
    obj->unk84 = 1;
}

} /* extern "C" */
