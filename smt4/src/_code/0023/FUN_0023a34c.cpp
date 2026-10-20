#include "common.h"

extern "C" {

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
} Inner;

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u8 *data;
} Obj;

/* Reads word 6 of the block at +0x1414 of the object's data into *out; returns 1 when there is no object. */
u8 FUN_0023a34c(Obj *obj, u32 *out)
{
    if (obj != NULL) {
        Inner *inner = (Inner *)(obj->data + 0x1414);

        *out = inner->unk18;
    }
    return obj == NULL;
}

} /* extern "C" */
