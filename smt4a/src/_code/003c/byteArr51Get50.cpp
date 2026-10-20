#include "shard/Shard003C.h"

extern "C" {

typedef struct ByteArr51 {
    /* 0x00 */ s8 v[0x51];
} ByteArr51;

extern ByteArr51 DAT_005f19fc;

s32 byteArr51Get50(void)
{
    return DAT_005f19fc.v[0x50];
}

} /* extern "C" */
