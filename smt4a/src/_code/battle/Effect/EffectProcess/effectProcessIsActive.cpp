#include "common.h"

extern "C" {

extern s32 g_effectProcessActive;

/* True while the effect process exists. */
bool effectProcessIsActive(void)
{
    return g_effectProcessActive != 0;
}

} /* extern "C" */
