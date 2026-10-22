#ifndef SYS_VARIANTTOKEN_H
#define SYS_VARIANTTOKEN_H

#include "common.h"

struct VariantToken {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ VariantToken *next;
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 unk09;
    /* 0x0A */ u8 type;
    /* 0x0B */ u8 unk0B;
};

#endif
