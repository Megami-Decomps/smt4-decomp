#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 value;
} Holder;

/* Clears the word at 0x8. */
void FUN_0018d01c(Holder *object)
{
    object->value = 0;
}

} /* extern "C" */
