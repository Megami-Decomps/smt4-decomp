#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xD];
    /* 0x0D */ u8 unk0D;
    /* 0x0E */ u8 unk0E;
} Obj;

void FUN_00287314(Obj *obj)
{
    obj->unk0D = 0;
    obj->unk0E = 1;
}

} /* extern "C" */
