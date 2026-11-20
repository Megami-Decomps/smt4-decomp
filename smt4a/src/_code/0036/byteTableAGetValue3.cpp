#include "shard/Shard0036.h"

extern "C" {

extern ByteTableA g_messageFlags;

s32 byteTableAGetValue3(void)
{
    return g_messageFlags.value3;
}

} /* extern "C" */
