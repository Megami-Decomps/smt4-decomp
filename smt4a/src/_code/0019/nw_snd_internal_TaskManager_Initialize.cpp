#include "common.h"

extern "C" {

void nn_os_CriticalSection_Initialize(u8 *p);
void FUN_00197d68(u8 *queue, u8 *buffer, int capacity);

/* Initialises the task manager's lock and its 32-entry task queue. */
void nw_snd_internal_TaskManager_Initialize(u8 *manager)
{
    nn_os_CriticalSection_Initialize(manager + 0x2c);
    FUN_00197d68(manager + 0x38, manager + 0x6c, 32);
}

} /* extern "C" */
