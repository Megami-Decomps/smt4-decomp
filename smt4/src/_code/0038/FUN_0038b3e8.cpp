#include "common.h"

extern "C" {

extern int FUN_002348a8(void *block);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 block[1];
} Obj;

u8 FUN_0038b3e8(Obj *obj)
{
    return FUN_002348a8(obj->block) != 0;
}

} /* extern "C" */
