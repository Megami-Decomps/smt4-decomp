#include "camp/CampState.h"

extern "C" {

int campFreeFileSlot(void);
int campReleaseTouchRegions(void);
int partyPanelReleaseResources(void);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int asdMemFree(void *ptr);
int jobStop(u32 job, int mode);

void campDestroy(void)
{
    CampState *block = g_camp;

    campReleaseTouchRegions();
    partyPanelReleaseResources();
    uiFadeRelease();
    buttonHelpRelease();
    campFreeFileSlot();
    jobStop(block->job, 0);
    asdMemFree(block);
    g_camp = NULL;
}

} /* extern "C" */
