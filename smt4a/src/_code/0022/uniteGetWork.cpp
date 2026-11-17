#include "camp/Unite/UniteGlobals.h"
#include "camp/CampStateQueries.h"

extern "C" {

/* Returns the word at 0x57F290. */
u32 uniteGetWork(void)
{
    return (u32)g_unite;
}

} /* extern "C" */
