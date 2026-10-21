#include "common.h"

extern "C" {

extern u8 g_engineStateFlag;
void engineSetStateFlag(void)
{
    g_engineStateFlag = 1;
}

} /* extern "C" */
