#include "common.h"

extern "C" {

extern void *g_naviMain;

u8 NaviMain_IsCreated(void)
{
    return g_naviMain != NULL;
}

} /* extern "C" */
