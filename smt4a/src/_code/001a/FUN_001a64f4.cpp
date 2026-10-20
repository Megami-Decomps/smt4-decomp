#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ u8 flag;
} Holder;

/* Clears the byte at 0x12. */
void FUN_001a64f4(Holder *object)
{
    object->flag = 0;
}

} /* extern "C" */
