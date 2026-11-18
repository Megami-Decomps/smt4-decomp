/* Returns the address of the camp's state block. */
#include "common.h"
#include "camp/Camp.h"

extern "C" {

extern CampResult g_campState;

CampResult *campGetState(void)
{
    return &g_campState;
}

} /* extern "C" */
