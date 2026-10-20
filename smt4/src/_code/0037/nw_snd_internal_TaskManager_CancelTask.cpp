#include "common.h"

extern "C" {

int nn_os_LightEvent_Wait(int event);
extern int nw_snd_internal_TaskManager_RemoveTask(void);

void nw_snd_internal_TaskManager_CancelTask(u32 manager, int task)
{
    if (nw_snd_internal_TaskManager_RemoveTask() == 0) {
        nn_os_LightEvent_Wait(task + 0xc);
        return;
    }
}

} /* extern "C" */
