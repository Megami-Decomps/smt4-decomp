#include "common.h"

extern "C" {

void nn_os_ThreadLocalStorage_ClearAllSlots(void);
void FUN_0016e144(void);
void FUN_0017fc88(void);

/* Clears the thread-local slots, then runs FUN_0016e144 and FUN_0017fc88. */
void FUN_0017fc74(void)
{
    nn_os_ThreadLocalStorage_ClearAllSlots();
    FUN_0016e144();
    FUN_0017fc88();
}

} /* extern "C" */
