#include "common.h"

extern "C" {

typedef struct Params {
    /* 0x00 */ void *vtbl;
    /* 0x04 */ u32 field04;
    /* 0x08 */ u8 field08;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 field0C;
    /* 0x10 */ u8 field10;
} Params;

extern u8 DAT_005590ec;

/* Copy constructor: installs the vtable and copies the fields of `src`. */
void FUN_0030cbc0(Params *dst, const Params *src)
{
    dst->vtbl = &DAT_005590ec;
    dst->field04 = src->field04;
    dst->field08 = src->field08;
    dst->field0C = src->field0C;
    dst->field10 = src->field10;
}

} /* extern "C" */
