#include "common.h"

extern "C" {

void nn_os_ThreadLocalStorage_ClearAllSlots(void);
void FUN_00128110(void);
void FUN_00138364(void);

/* Clears the thread-local slots, then runs FUN_00128110 and FUN_00138364. */
void FUN_00138350(void)
{
    nn_os_ThreadLocalStorage_ClearAllSlots();
    FUN_00128110();
    FUN_00138364();
}

} /* extern "C" */
