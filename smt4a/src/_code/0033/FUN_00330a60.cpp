#include "common.h"

extern "C" {

extern void *g_gameOverJobRecord;
void drawStereoTwoPassOverlay(void *owner);

s32 FUN_00330a60(u32 job)
{
    if (g_gameOverJobRecord != NULL) {
        drawStereoTwoPassOverlay(g_gameOverJobRecord);
    }
    return 0;
}

} /* extern "C" */
