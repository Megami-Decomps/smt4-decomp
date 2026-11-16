#include "common.h"

extern "C" {

void handleSlotCloseAndClear(u32 object);
void nn_os_Thread_FinalizeImpl(void);

/* Runs nn_os_Thread_FinalizeImpl, then handleSlotCloseAndClear on the object. */
void _ZN9Obj2fd02aD1Ev(u32 object)
{
    nn_os_Thread_FinalizeImpl();
    handleSlotCloseAndClear(object);
}

} /* extern "C" */
