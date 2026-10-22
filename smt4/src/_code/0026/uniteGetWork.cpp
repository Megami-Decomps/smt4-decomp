#include "shard/W5_W5Match2_UniteWork.h"

extern "C" {

extern UniteWorkIV *g_unite;

u32 uniteGetWork(void)
{
    return (u32)g_unite;
}

} /* extern "C" */
