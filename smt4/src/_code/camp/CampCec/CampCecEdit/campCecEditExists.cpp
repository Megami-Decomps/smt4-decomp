/* Returns nonzero while the CEC edit screen exists. */
#include "common.h"
#include "camp/CampCec/CampCecEdit.h"

extern "C" {

extern CampCecEdit *g_campCecEdit;

u8 campCecEditExists(void)
{
    return g_campCecEdit != NULL;
}

} /* extern "C" */
