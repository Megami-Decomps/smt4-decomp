#include "shard/Shard0050.h"

extern "C" {

typedef struct Mixed5 {
    /* 0x00 */ u32 w;
    /* 0x04 */ u8 b;
} Mixed5;

void clearWordAndByte(Mixed5 *obj)
{
    obj->w = 0;
    obj->b = 0;
}

} /* extern "C" */
