#include "common.h"

extern "C" {

int nn_os_LightEvent_Wait(u32 *event);

extern u32 DAT_00465644;

void FUN_00147fc4(void)
{
    nn_os_LightEvent_Wait(&DAT_00465644);
}

} /* extern "C" */
