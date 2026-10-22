#include "shard/Shard0031.h"

extern "C" {

extern OverlayRef g_campCec;

/* Stores `value` in the word at 0x14C of the held object, if there is one. */
void FUN_002e2404(u32 value)
{
    if (g_campCec.instance != NULL) {
        g_campCec.instance->unk14C = value;
    }
}

} /* extern "C" */
