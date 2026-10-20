#include "common.h"

extern "C" {

int FUN_0023a5dc(void *block);
int FUN_0034ee98(void *block);
extern u32 FUN_0034ee48(void *block);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0xC];
    /* 0x00C */ u32 state;
    /* 0x010 */ u8 unk010[0x148];
    /* 0x158 */ u8 block[1];
} Obj;

u32 FUN_00350854(Obj *obj)
{
    u32 current;
    u32 limit;

    if (FUN_0034ee98(obj->block) == 0) {
        obj->state = 7;
        return 0;
    }
    if (FUN_0023a5dc(obj->block) != 0) {
        current = FUN_0023a5dc(obj->block);
        limit = FUN_0034ee48(obj->block);
        if (current <= limit) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
