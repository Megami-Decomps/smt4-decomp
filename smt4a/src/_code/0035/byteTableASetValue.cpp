#include "shard/Shard0035.h"

extern "C" {

extern ByteTableA DAT_0057f560;

void byteTableASetValue(s8 value)
{
    DAT_0057f560.value = value;
}

} /* extern "C" */
