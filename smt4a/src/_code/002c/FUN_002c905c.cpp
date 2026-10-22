#include "shard/W5_W5Match2_UniteWork.h"

extern "C" {

extern UniteWork *g_unite;

/* Returns 1 when the record is busy with request 8..0xE. */
u32 FUN_002c905c(void)
{
    s32 request;

    if ((g_unite->menu.active != 0) &&
        (((request = g_unite->request, request == 8 || request == 9 ||
           (request == 10 || request == 0xB)) || ((request == 0xC || request == 0xD) || request == 0xE)))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
