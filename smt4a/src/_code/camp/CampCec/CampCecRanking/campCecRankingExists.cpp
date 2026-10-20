/* Returns nonzero while the CEC ranking screen exists. */
#include "common.h"
#include "camp/CampCec/CampCecRanking.h"

extern "C" {

extern CampCecRanking *g_campCecRanking;

u8 campCecRankingExists(void)
{
    return g_campCecRanking != NULL;
}

} /* extern "C" */
