#include "shard/Shard004F.h"

extern "C" {

typedef struct Words10 {
    /* 0x00 */ u32 w[10];
} Words10;

void words10CopyHighToLow(Words10 *obj)
{
    obj->w[0] = obj->w[7];
    obj->w[1] = obj->w[8];
    obj->w[2] = obj->w[9];
}

} /* extern "C" */
