#include "common.h"

extern "C" {

int FUN_002b2b64(u32 value);

typedef struct Inner {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u32 unk8;
} Inner;

typedef struct Obj {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ Inner *inner;
} Obj;

void FUN_0027f94c(Obj *obj)
{
    FUN_002b2b64(obj->inner->unk8);
}

} /* extern "C" */
