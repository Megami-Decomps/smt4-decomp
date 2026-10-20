#include "common.h"

extern "C" {

extern int FUN_0023a5dc(void *block);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x158];
    /* 0x158 */ u8 block[1];
} Obj;

u8 FUN_00350e18(Obj *obj)
{
    return FUN_0023a5dc(obj->block) != 0;
}

} /* extern "C" */
