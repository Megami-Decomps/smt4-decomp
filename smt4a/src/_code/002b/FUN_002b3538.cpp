#include "common.h"

extern "C" {

typedef struct Source {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 extra;
    /* 0x0C */ u8 unk0C[0x10];
    /* 0x1C */ u32 value1;
    /* 0x20 */ u32 value8;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ u32 value4;
    /* 0x2C */ u32 value2;
    /* 0x30 */ u8 unk30[4];
    /* 0x34 */ u32 value20;
    /* 0x38 */ u32 value80;
} Source;

/* Writes the value selected by the last matching bit of `mask` (1, 2, 4, 8, 0x20, 0x80) to `out[0]` and the extra word to `out[1]`. */
void FUN_002b3538(Source *source, u32 mask, u32 *out)
{
    if ((mask & 1) != 0) {
        *out = source->value1;
    }
    if ((mask & 2) != 0) {
        *out = source->value2;
    }
    if ((mask & 4) != 0) {
        *out = source->value4;
    }
    if ((mask & 8) != 0) {
        *out = source->value8;
    }
    if ((mask & 0x20) != 0) {
        *out = source->value20;
    }
    if ((mask & 0x80) != 0) {
        *out = source->value80;
    }
    out[1] = source->extra;
}

} /* extern "C" */
