#include "common.h"

extern "C" {

int modelSetAnglesDegrees(u32 a, int b, u32 c);

typedef struct Inner {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u32 unk8;
} Inner;

typedef struct Slot {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Inner *inner;
    /* 0x0C */ u8 unk0C[0x44];
} Slot;

typedef struct Obj {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Inner *main;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ Slot slots[3];
} Obj;

void FUN_00293db0(Obj *obj, u32 value)
{
    Inner *inner;
    int i;

    modelSetAnglesDegrees(obj->main->unk8, 0, value);
    i = 0;
    do {
        inner = obj->slots[i].inner;
        if (inner != NULL) {
            modelSetAnglesDegrees(inner->unk8, 0, value);
        }
        i = i + 1;
    } while (i < 3);
}

} /* extern "C" */
