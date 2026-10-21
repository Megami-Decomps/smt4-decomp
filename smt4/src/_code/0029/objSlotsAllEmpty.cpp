#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ int unk04;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ int unk10;
    /* 0x14 */ u8 unk14[0x4C];
    /* 0x60 */ int unk60;
    /* 0x64 */ u8 unk64[0x4C];
    /* 0xB0 */ int unkB0;
} Obj;

/* 1 when none of the four slots (0x04, 0x10, 0x60, 0xB0) is set. */
u32 objSlotsAllEmpty(Obj *obj)
{
    int value = obj->unk04;
    u8 empty = value == 0;

    if (empty) {
        value = obj->unk10;
    }
    if (empty && value == 0) {
        empty = obj->unk60 == 0;
        if (empty) {
            value = obj->unkB0;
        }
        if (empty && value == 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
