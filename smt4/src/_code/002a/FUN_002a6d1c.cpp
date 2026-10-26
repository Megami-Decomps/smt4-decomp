#include "common.h"
#include "code/Code002a_Smt4.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 unk1C[0x10];
    /* 0x2C */ u16 unk2C;
    /* 0x2E */ u16 unk2E;
} Obj;

void FUN_002a6d1c(Obj *obj, u32 a, u32 b, u32 c, u32 d)
{
    obj->unk10 = 0;
    obj->unk14 = 0;
    obj->unk18 = 0;
    obj->unk2C = 1;
    obj->unk2E = 1;
    obj->unk00 = a;
    obj->unk04 = b;
    obj->unk08 = c;
    obj->unk0C = d;
}

} /* extern "C" */
