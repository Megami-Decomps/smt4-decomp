#include "shard/Shard0031.h"
#include "code/Code0031_Smt4a.h"

extern "C" {

extern OverlayRef g_campCec;

void FUN_00319aec(u8 value)
{
    OverlayObj *overlay = g_campCec.instance;

    if (overlay != NULL) {
        overlay->slideReversed = value;
        overlay->slidePhase = 1;
    }
}

} /* extern "C" */
