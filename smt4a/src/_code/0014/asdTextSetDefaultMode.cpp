#include "shard/Gx464d48.h"

extern "C" {

void asdTextSetCurrentMode(u32 value);
void asdTextSetDefaultMode(u32 value)
{
    g_asdTextDefaults.unk24 = value;
    asdTextSetCurrentMode(value);
}

} /* extern "C" */
