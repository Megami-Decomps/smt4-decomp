#include "common.h"

extern "C" {

u16 *FUN_002b63c0(u16 id);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0xD0C];
    /* 0xD0C */ u32 id;
} Obj;

u16 FUN_00383674(Obj *obj)
{
    return *FUN_002b63c0((u16)obj->id);
}

} /* extern "C" */
