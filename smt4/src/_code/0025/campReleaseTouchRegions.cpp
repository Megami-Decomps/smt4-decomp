#include "camp/CampState.h"

extern "C" {
void ifTouchRegionRemove(void);
void ifTouchResetSelection(void);

// Release the camp's registered touch regions and clear the current selection.
void campReleaseTouchRegions(void)
{
    CampState *camp = g_camp;
    if (camp->touchRegionCount != 0) {
        for (s32 index = 0; index < camp->touchRegionCount; ++index) {
            ifTouchRegionRemove();
            camp->touchRegions[index] = -1;
        }
        camp->touchRegionCount = 0;
        ifTouchResetSelection();
    }
}
}
