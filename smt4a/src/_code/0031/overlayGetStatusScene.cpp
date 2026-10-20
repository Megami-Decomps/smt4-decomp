#include "shard/Shard0031.h"

extern "C" {

extern OverlayRef DAT_0057f110;

StatusScene *overlayGetStatusScene(void)
{
    return &DAT_0057f110.instance->scene;
}

} /* extern "C" */
