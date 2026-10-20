/* Returns nonzero while the CEC receive screen exists. */
#include "common.h"
#include "camp/CampCec/CampCecRecv.h"

extern "C" {

extern CampCecRecv *g_campCecRecv;

u8 campCecRecvExists(void)
{
    return g_campCecRecv != NULL;
}

} /* extern "C" */
