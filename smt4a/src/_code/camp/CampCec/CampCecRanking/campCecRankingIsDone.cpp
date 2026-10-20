/* Returns nonzero once the CEC ranking screen has finished. */
#include "common.h"
#include "camp/CampCec/CampCecRanking.h"

extern "C" {

extern CampCecRanking *g_campCecRanking;

u8 campCecRankingIsDone(void)
{
    return g_campCecRanking->done != 0;
}

} /* extern "C" */
