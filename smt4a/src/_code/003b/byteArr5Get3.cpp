#include "shard/Shard003B.h"

extern "C" {

typedef struct ByteArr5 {
    /* 0x00 */ s8 v[5];
} ByteArr5;

extern ByteArr5 DAT_0057f6bc;

s32 byteArr5Get3(void)
{
    return DAT_0057f6bc.v[3];
}

} /* extern "C" */
