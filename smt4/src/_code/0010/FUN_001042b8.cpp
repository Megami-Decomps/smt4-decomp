#include "common.h"

extern "C" {

int FUN_0011d100(void);
void nn_os_CriticalSection_Leave(void *section);

extern u8 DAT_004e4138[];

void FUN_001042b8(void)
{
    nn_os_CriticalSection_Leave(DAT_004e4138);
    FUN_0011d100();
}

} /* extern "C" */
