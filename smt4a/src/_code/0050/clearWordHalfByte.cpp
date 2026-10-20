#include "shard/Shard0050.h"

extern "C" {

typedef struct Mixed7 {
    /* 0x00 */ u32 w;
    /* 0x04 */ u16 h;
    /* 0x06 */ u8 b;
} Mixed7;

void clearWordHalfByte(Mixed7 *obj)
{
    obj->w = 0;
    obj->h = 0;
    obj->b = 0;
}

} /* extern "C" */
