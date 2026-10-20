#include "common.h"

extern "C" {

extern u32 DAT_00465644[];
extern void nn_os_LightEvent_ClearSignal(u32 *event);

void FUN_002a818c(void)
{
    nn_os_LightEvent_ClearSignal(DAT_00465644);
}

} /* extern "C" */
