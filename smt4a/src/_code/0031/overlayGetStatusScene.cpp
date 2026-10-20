#include "shard/Shard0031.h"

extern "C" {

extern OverlayRef g_campCec;

StatusScene *overlayGetStatusScene(void)
{
    return &g_campCec.instance->scene;
}

} /* extern "C" */
