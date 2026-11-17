#include "camp/Unite/UniteGlobals.h"

extern "C" {

u32 uniteGetWork(void)
{
    return (u32)g_unite;
}

} /* extern "C" */
