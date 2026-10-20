#include "shard/Shard0038.h"

extern "C" {

typedef struct ByteTriple {
    /* 0x00 */ s8 v0;
    /* 0x01 */ s8 v1;
    /* 0x02 */ s8 v2;
} ByteTriple;

extern ByteTriple g_saveLoadProcess;

s32 byteTripleGetV0(void)
{
    return g_saveLoadProcess.v0;
}

} /* extern "C" */
