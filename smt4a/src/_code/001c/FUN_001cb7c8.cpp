#include "common.h"

extern "C" {

typedef struct Out {
    /* 0x00 */ u8 mode;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 f04;
    /* 0x08 */ u8 flag;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 f0C;
    /* 0x10 */ u32 f10;
    /* 0x14 */ u32 f14;
    /* 0x18 */ u32 f18;
    /* 0x1C */ u32 f1C;
    /* 0x20 */ u32 f20;
    /* 0x24 */ u32 f24;
    /* 0x28 */ u32 f28;
} Out;

typedef struct In {
    /* 0x00 */ u8 mode;
    /* 0x01 */ u8 flag;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 f04;
    /* 0x08 */ u32 f08;
    /* 0x0C */ u32 f0C;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u32 f14;
    /* 0x18 */ u32 f18;
    /* 0x1C */ u8 unk1C[4];
    /* 0x20 */ u32 f20;
    /* 0x24 */ u32 f24;
    /* 0x28 */ u8 unk28[0x1C];
    /* 0x44 */ u32 f44;
    /* 0x48 */ u32 f48;
} In;

u8 FUN_001d07e0(u8 mode);

/* Converts the input description into the output one (the mode through FUN_001d07e0). */
void FUN_001cb7c8(Out *out, In *in)
{
    u8 mode;

    mode = FUN_001d07e0(in->mode);
    out->mode = mode;
    out->f04 = in->f04;
    out->flag = in->flag != 0;
    out->f0C = in->f08;
    out->f10 = in->f0C;
    out->f14 = in->f44;
    out->f18 = in->f48;
    out->f1C = in->f18;
    out->f20 = in->f14;
    out->f28 = in->f20;
    out->f24 = in->f24;
}

} /* extern "C" */
