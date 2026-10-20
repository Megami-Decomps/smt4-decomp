#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 unk04;
    /* 0x05 */ u8 kind;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 value;
} Holder;

/* Resets the object: the byte at 5 becomes 2 and the words at 4 and 8 are cleared. */
void FUN_002e9672(Holder *object)
{
    *(u32 *)&object->unk04 = 0;
    object->kind = 2;
    object->value = 0;
}

} /* extern "C" */
