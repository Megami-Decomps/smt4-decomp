#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/FUN_0028f670.h"

extern "C" {


extern UniteWorkIV *g_unite;

u8 FUN_0028f670(void)
{
    int value = 0;

    if (g_unite != NULL) {
        value = g_unite->common.state;
    }
    return g_unite == NULL || value == 0x24;
}

} /* extern "C" */
