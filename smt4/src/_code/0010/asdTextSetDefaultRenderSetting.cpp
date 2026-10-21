#include "shard/GlobalBlocks.h"

extern "C" {

extern void asdTextSetRenderSetting(u32 value);

/* Updates the default text word and the corresponding renderer setting. */
void asdTextSetDefaultRenderSetting(u32 value)
{
    g_asdTextDefaults.unk20 = value;
    asdTextSetRenderSetting(value);
}

} /* extern "C" */
