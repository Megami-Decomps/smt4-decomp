#include "camp/Unite/UniteGlobals.h"

extern "C" {

/* Returns the request word of the record at 0x57F290, or -1 when there is none. */
u32 uniteRequestGet(void)
{
    u32 request;

    if (g_unite != NULL) {
        request = g_unite->request;
    } else {
        request = 0xFFFFFFFF;
    }
    return request;
}

} /* extern "C" */
