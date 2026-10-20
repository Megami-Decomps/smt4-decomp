#include "shard/Shard0051.h"

extern "C" {

typedef struct Words4B {
    /* 0x00 */ u32 w[4];
    /* 0x10 */ u8 b;
} Words4B;

void words4BClear(Words4B *obj)
{
    if (obj != NULL) {
        obj->w[0] = 0;
        obj->w[1] = 0;
        obj->w[2] = 0;
        obj->w[3] = 0;
        obj->b = 0;
    }
}

} /* extern "C" */
