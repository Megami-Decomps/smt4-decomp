#include "shard/Shard0037.h"

extern "C" {

extern ByteTableA g_messageFlags;

void byteTableASetValue3(s8 value)
{
    g_messageFlags.value3 = value;
}

} /* extern "C" */
