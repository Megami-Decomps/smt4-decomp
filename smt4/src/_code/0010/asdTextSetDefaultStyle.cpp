#include "shard/GlobalBlocks.h"

extern "C" {

/* Sets the default text style word. */
void asdTextSetDefaultStyle(u32 value)
{
    g_asdTextDefaults.unk2C = value;
}

} /* extern "C" */
