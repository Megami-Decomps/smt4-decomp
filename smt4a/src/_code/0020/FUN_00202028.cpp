#include "common.h"

extern "C" {

extern u8 g_engineStateFlag;
void FUN_00202028(void)
{
    g_engineStateFlag = 1;
}

} /* extern "C" */
