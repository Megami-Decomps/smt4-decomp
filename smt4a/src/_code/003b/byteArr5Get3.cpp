#include "shard/Shard003B.h"

extern "C" {

typedef struct ByteArr5 {
    /* 0x00 */ s8 v[5];
} ByteArr5;

extern ByteArr5 g_saveLoadProcess;

s32 byteArr5Get3(void)
{
    return g_saveLoadProcess.v[3];
}

} /* extern "C" */
