#include "common.h"

extern "C" {

typedef struct Pair {
    u32 first;
    u32 second;
} Pair;

typedef struct Params {
    /* 0x00 */ void *vtbl;
    /* 0x04 */ u8 type;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ Pair pair08;
    /* 0x10 */ u32 field10;
    /* 0x14 */ u32 field14;
    /* 0x18 */ u16 field18;
    /* 0x1A */ u8 unk1A[2];
    /* 0x1C */ u32 field1C;
} Params;

extern u8 DAT_0055a510;
extern u8 DAT_0055ac50;

/* Copy constructor: runs the base copy (vtable DAT_0055ac50), then installs the derived vtable DAT_0055a510. */
void FUN_0030d420(Params *dst, const Params *src)
{
    dst->vtbl = &DAT_0055ac50;
    dst->type = src->type;
    dst->pair08 = src->pair08;
    dst->field10 = src->field10;
    dst->field14 = src->field14;
    dst->field18 = src->field18;
    dst->field1C = src->field1C;
    dst->vtbl = &DAT_0055a510;
}

} /* extern "C" */
