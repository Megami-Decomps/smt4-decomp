#include "shard/Sys464af0.h"

extern "C" {

/* Clears the bits of `mask` in the system flags word. */
void settings5BClearFlags(u32 mask)
{
    g_gfxSettings.unk08 = g_gfxSettings.unk08 & ~mask;
}

} /* extern "C" */
