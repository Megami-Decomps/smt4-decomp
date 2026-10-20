#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 a;
    /* 0x2C */ u32 b;
    /* 0x30 */ u8 unk30[4];
    /* 0x34 */ u32 c;
    /* 0x38 */ u8 unk38;
    /* 0x39 */ u8 flagA;
    /* 0x3A */ u8 flagB;
    /* 0x3B */ u8 flagC;
} Holder;

/* Clears the three flags and the three words. */
void FUN_0030fecc(Holder *object)
{
    object->flagB = 0;
    object->flagC = 0;
    object->flagA = 0;
    object->a = 0;
    object->b = 0;
    object->c = 0;
}

} /* extern "C" */
