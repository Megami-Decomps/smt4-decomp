/* Returns nonzero once the CEC view screen has finished. */
#include "common.h"
#include "camp/CampCec/CampCecView.h"

extern "C" {

extern CampCecView *g_campCecView;

u8 campCecViewIsDone(void)
{
    return g_campCecView->done != 0;
}

} /* extern "C" */
