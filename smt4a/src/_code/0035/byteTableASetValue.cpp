#include "shard/Shard0035.h"

extern "C" {

extern ByteTableA g_messageFlags;

void byteTableASetValue(s8 value)
{
    g_messageFlags.value = value;
}

} /* extern "C" */
