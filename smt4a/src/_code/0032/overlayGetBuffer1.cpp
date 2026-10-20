#include "shard/Shard0032.h"

extern "C" {

#include "shard/Shard0031.h"
extern OverlayRef g_campCec;

void *overlayGetBuffer1(void)
{
    return g_campCec.instance->buffer1;
}

} /* extern "C" */
