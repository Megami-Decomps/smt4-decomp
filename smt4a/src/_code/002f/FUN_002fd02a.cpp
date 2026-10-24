#include "common.h"

extern "C" {

void FUN_00103774(u32 object);
void nn_os_Thread_FinalizeImpl(void);

/* Runs nn_os_Thread_FinalizeImpl, then FUN_00103774 on the object. */
void FUN_002fd02a(u32 object)
{
    nn_os_Thread_FinalizeImpl();
    FUN_00103774(object);
}

} /* extern "C" */
