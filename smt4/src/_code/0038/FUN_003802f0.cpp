#include "common.h"

extern "C" {

int FUN_00379450(void);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x190];
    /* 0x190 */ u32 unk190;
    /* 0x194 */ u8 unk194[0x2BC];
    /* 0x450 */ u32 unk450;
    /* 0x454 */ u32 unk454;
    /* 0x458 */ u8 unk458[4];
    /* 0x45C */ u8 unk45C;
    /* 0x45D */ u8 unk45D;
    /* 0x45E */ u8 unk45E;
} Obj;

void FUN_003802f0(Obj *obj)
{
    FUN_00379450();
    obj->unk190 = 0;
    obj->unk45C = 0;
    obj->unk45D = 1;
    obj->unk45E = 0;
    obj->unk450 = 0;
    obj->unk454 = 0;
}

} /* extern "C" */
