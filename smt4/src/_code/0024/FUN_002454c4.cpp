#include "common.h"

extern "C" {

extern u32 namedVariantTableGetEntries(u32 a, u32 b, u8 flag);

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ u32 unk1CFC;
} Obj;

void FUN_002454c4(Obj *obj, u32 b, u32 a, int flag)
{
    u32 value = namedVariantTableGetEntries(a, b, flag != 0);

    obj->unk1CFC = value;
}

} /* extern "C" */
