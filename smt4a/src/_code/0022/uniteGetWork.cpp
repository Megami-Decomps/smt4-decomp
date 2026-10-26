#include "shard/W5_W5Match2_UniteWork.h"
#include "camp/CampStateQueries.h"

extern "C" {

extern UniteWork *g_unite;

/* Returns the word at 0x57F290. */
u32 uniteGetWork(void)
{
    return (u32)g_unite;
}

} /* extern "C" */
