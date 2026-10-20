/* Returns nonzero once the CEC receive screen has finished. */
#include "common.h"
#include "camp/CampCec/CampCecRecv.h"

extern "C" {

extern CampCecRecv *g_campCecRecv;

u8 campCecRecvIsDone(void)
{
    return g_campCecRecv->done != 0;
}

} /* extern "C" */
