#include "shard/Shard0031.h"
#include "shard/FUN_002bf520.h"

extern "C" {

extern OverlayRef g_campCec;

/* Returns the address of the member at 0x40 of the object at 0x57F110 + 4. */
u8 *FUN_002bf520(void)
{
    return g_campCec.instance->block40;
}

} /* extern "C" */
