#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x67C];
    /* 0x67C */ u32 count;
} Obj;

u8 aocIsEntryIndexValid(Obj *obj, u32 index)
{
    return index < obj->count;
}

} /* extern "C" */
