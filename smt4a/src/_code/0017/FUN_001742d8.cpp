#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x98];
    /* 0x98 */ u8 flag;
} Holder;

/* Sets the byte at 0x98. */
void FUN_001742d8(Holder *object)
{
    object->flag = 1;
}

} /* extern "C" */
