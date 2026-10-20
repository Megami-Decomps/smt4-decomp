#include "common.h"

extern "C" {

int FUN_002bbb74(u32 a, int b);
int FUN_002bbbc8(void);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x52C];
    /* 0x52C */ u32 unk52C;
    /* 0x530 */ u8 unk530[0xC4];
    /* 0x5F4 */ u8 unk5F4;
} Obj;

void FUN_00343324(Obj *obj)
{
    FUN_002bbbc8();
    FUN_002bbb74(obj->unk52C, (int)obj + 0x118c);
    obj->unk5F4 = 0;
}

} /* extern "C" */
