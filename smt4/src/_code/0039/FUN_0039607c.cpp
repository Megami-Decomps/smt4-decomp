#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ u8 unk74;
    /* 0x75 */ u8 unk75[3];
    /* 0x78 */ u32 unk78;
    /* 0x7C */ u32 unk7C;
    /* 0x80 */ u32 unk80;
    /* 0x84 */ u32 unk84;
    /* 0x88 */ u32 unk88;
    /* 0x8C */ u32 unk8C;
} Obj;

void FUN_0039607c(Obj *obj, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f)
{
    obj->unk78 = a;
    obj->unk74 = 1;
    obj->unk7C = b;
    obj->unk80 = c;
    obj->unk84 = d;
    obj->unk88 = e;
    obj->unk8C = f;
}

} /* extern "C" */
