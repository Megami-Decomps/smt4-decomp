#include "shard/Shard0032.h"

extern "C" {

extern FlagsAt6C g_quadColorState;

u8 flagsAt6CGet(void)
{
    return g_quadColorState.value;
}

} /* extern "C" */
