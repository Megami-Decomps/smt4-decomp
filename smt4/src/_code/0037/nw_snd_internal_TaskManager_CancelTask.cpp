#include "common.h"

extern "C" {

int FUN_002c3424(int event);
extern int nw_snd_internal_TaskManager_RemoveTask(void);

void nw_snd_internal_TaskManager_CancelTask(u32 manager, int task)
{
    if (nw_snd_internal_TaskManager_RemoveTask() == 0) {
        FUN_002c3424(task + 0xc);
        return;
    }
}

} /* extern "C" */
