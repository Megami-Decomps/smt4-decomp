#include "common.h"

extern "C" {

extern int counterPairRemaining(void *block);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x158];
    /* 0x158 */ u8 block[1];
} Obj;

u8 block158OwnerHasRemaining(Obj *obj)
{
    return counterPairRemaining(obj->block) != 0;
}

} /* extern "C" */
