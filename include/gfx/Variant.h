#ifndef GFX_VARIANT_H
#define GFX_VARIANT_H
#include "common.h"
#include <stddef.h>

struct VariantChildNode {
    VariantChildNode *previous;
    VariantChildNode *next;
    u32 value;
};
struct VariantChildLinks {
    VariantChildNode *previous;
    VariantChildNode *next;
};
struct Variant {
    Variant();
    /* 0x00 */ u32 value;
    /* 0x04 */ u8 type;
    /* 0x05 */ u8 unk05;
    union {
        /* 0x06 */ u8 byteArg;
        /* 0x06 */ u16 halfArg;
    };
    union {
        /* 0x08 */ u8 unk08[8];
        /* 0x08 */ VariantChildLinks children;
    };
    union {
        /* 0x10 */ u32 wordArg;
        /* 0x10 */ void *allocator;
    };
};
typedef char VariantChildrenLayoutCheck[sizeof(Variant) == 0x14 &&
    sizeof(VariantChildNode) == 0xc && sizeof(VariantChildLinks) == 8 &&
    offsetof(Variant, children) == 8 && offsetof(Variant, allocator) == 0x10 ? 1 : -1];

extern "C" {
u32 FUN_005153f0(Variant *destination, const Variant *source, const u32 *token, void *allocator);
u32 variantCopy(Variant *destination, const Variant *source, void *allocator);
}
#endif
