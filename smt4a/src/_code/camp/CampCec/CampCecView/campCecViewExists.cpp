/* Returns nonzero while the CEC view screen exists. */
#include "common.h"
#include "camp/CampCec/CampCecView.h"

extern "C" {

extern CampCecViewA *g_campCecView;

u8 campCecViewExists(void)
{
    return g_campCecView != NULL;
}

} /* extern "C" */
