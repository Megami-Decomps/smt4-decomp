#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {

extern u8 g_rtLocale;

u8 *rt_locale(void)
{
    return &g_rtLocale;
}

} /* extern "C" */
