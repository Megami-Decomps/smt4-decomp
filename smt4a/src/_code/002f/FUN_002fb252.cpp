#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u8 flag;
} Holder;

/* Clears the two words and the byte at 0xC. */
void FUN_002fb252(Holder *object)
{
    object->a = 0;
    object->b = 0;
    object->flag = 0;
}

} /* extern "C" */
