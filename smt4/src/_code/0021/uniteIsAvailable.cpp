#include "shard/W5_W5Match2_UniteWork.h"

extern "C" {

extern UniteWork *g_unite;

/* Unite is available in state two while its blocking flag is clear. */
s32 uniteIsAvailable(void)
{
    if (g_unite->state == 2 && g_unite->blocked == 0) {
        return 1;
    }
    return 0;
}

}
