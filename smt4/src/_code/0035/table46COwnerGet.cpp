#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x46C];
    /* 0x46C */ u32 entries[1];
} Obj;

u32 table46COwnerGet(Obj *obj, int index)
{
    return obj->entries[index];
}

} /* extern "C" */
