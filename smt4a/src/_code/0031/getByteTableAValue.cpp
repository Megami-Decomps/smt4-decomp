#include "shard/Shard0031.h"

extern "C" {

extern ByteTableA g_messageFlags;

s32 getByteTableAValue(void)
{
    return g_messageFlags.value;
}

} /* extern "C" */
