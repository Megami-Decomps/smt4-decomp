#include "camp/Unite/UniteGlobals.h"

extern "C" {

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
