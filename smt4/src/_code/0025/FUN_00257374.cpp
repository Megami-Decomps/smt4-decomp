#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0C[0x10];
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u8 unk30[4];
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 unk38;
} Obj;

/* Selects the field named by the highest set bit of `mask` into out[0]; out[1] gets unk08. */
void FUN_00257374(Obj *obj, u32 mask, u32 *out)
{
    if ((mask & 1) != 0) {
        out[0] = obj->unk1C;
    }
    if ((mask & 2) != 0) {
        out[0] = obj->unk2C;
    }
    if ((mask & 4) != 0) {
        out[0] = obj->unk28;
    }
    if ((mask & 8) != 0) {
        out[0] = obj->unk20;
    }
    if ((mask & 0x20) != 0) {
        out[0] = obj->unk34;
    }
    if ((mask & 0x80) != 0) {
        out[0] = obj->unk38;
    }
    out[1] = obj->unk08;
}

} /* extern "C" */
