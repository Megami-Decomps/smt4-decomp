#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0xE];
    /* 0x0E */ u16 unk0E;
    /* 0x10 */ u16 unk10;
    /* 0x12 */ u8 unk12[0x18];
    /* 0x2A */ u16 unk2A;
    /* 0x2C */ u16 unk2C;
} Obj;

u8 FUN_002954bc(Obj *obj)
{
    if (obj != NULL) {
        obj->unk2A = obj->unk0E;
        obj->unk2C = obj->unk10;
    }
    return obj != NULL;
}

} /* extern "C" */
