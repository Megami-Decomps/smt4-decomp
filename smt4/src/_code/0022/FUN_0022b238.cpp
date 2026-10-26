#include "common.h"
#include "code/Code0022_Smt4.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x530];
    /* 0x530 */ u32 entries[1];
} Obj;

u32 FUN_0022b238(Obj *obj, s32 index)
{
    return obj->entries[index];
}

} /* extern "C" */
