#include "common.h"

extern "C" {

typedef struct Source {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u32 unk8;
    /* 0xC */ u32 unkC;
} Source;

void FUN_0039fc20(Source *source, u32 *out)
{
    out[0] = source->unk8;
    out[1] = source->unkC;
}

} /* extern "C" */
