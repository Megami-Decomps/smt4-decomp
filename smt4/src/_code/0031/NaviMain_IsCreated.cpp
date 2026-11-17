#include "mapnavi/NaviMainGlobals.h"

extern "C" {


u8 NaviMain_IsCreated(void)
{
    return g_naviMain != NULL;
}

} /* extern "C" */
