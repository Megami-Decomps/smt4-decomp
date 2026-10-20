#include "shard/Shard0050.h"

extern "C" {

typedef struct Mixed9 {
    /* 0x00 */ u32 w0;
    /* 0x04 */ u32 w1;
    /* 0x08 */ u8 b;
} Mixed9;

void clearTwoWordsAndByte(Mixed9 *obj)
{
    obj->w0 = 0;
    obj->w1 = 0;
    obj->b = 0;
}

} /* extern "C" */
