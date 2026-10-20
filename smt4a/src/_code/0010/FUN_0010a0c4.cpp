#include "common.h"

extern "C" {

typedef struct FlagByteHolder {
    /* 0x000 */ u8 unk000[0x109];
    /* 0x109 */ u8 flag;
} FlagByteHolder;

/* Stores `flag` at 0x109. */
void FUN_0010a0c4(FlagByteHolder *object, u8 flag)
{
    object->flag = flag;
}

} /* extern "C" */
