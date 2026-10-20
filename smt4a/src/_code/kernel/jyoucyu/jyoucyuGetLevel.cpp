/* Returns the resident module's current level. */
#include "common.h"

extern "C" {

extern s8 g_jyoucyuLevel;

s32 jyoucyuGetLevel(void)
{
    return g_jyoucyuLevel;
}

} /* extern "C" */
