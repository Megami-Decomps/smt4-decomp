#include "shard/W5_W5Match2_UniteWork.h"

extern "C" {

extern UniteWork *g_unite;

/* Return the current request, or -1 while the unite work is absent. */
u32 uniteGetRequest(void)
{
    u32 request;
    if (g_unite != NULL) {
        request = g_unite->request;
    } else {
        request = 0xFFFFFFFF;
    }
    return request;
}

}
