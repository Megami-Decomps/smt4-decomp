#include "common.h"

extern "C" {

extern u8 g_engineStateFlag;

void engineClearStateFlag(void)
{
    g_engineStateFlag = 0;
}

} /* extern "C" */
