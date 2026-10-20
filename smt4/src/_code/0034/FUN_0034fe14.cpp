#include "common.h"

extern "C" {

extern int FUN_0023a4f8(void *block);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ u32 state;
    /* 0x010 */ u8 unk010[0x148];
    /* 0x158 */ u8 block[1];
} Obj;

u8 FUN_0034fe14(Obj *obj)
{
    int result = FUN_0023a4f8(obj->block);

    if (result == 0) {
        obj->state = 7;
    }
    return result != 0;
}

} /* extern "C" */
