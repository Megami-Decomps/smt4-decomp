#include "common.h"

extern "C" {

extern u32 FUN_00324bb8(u32 a, u32 b, u8 flag, u32 c);

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ u32 result;
} Obj;

void FUN_003dc108(Obj *obj, u32 b, u32 a, int flag, u32 c)
{
    obj->result = FUN_00324bb8(a, b, flag != 0, c);
}

} /* extern "C" */
