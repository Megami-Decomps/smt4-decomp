#include "common.h"

extern "C" {

extern u8 DAT_00465644[];
extern u8 nn_os_LightEvent_TryWait(u8 *event);

u8 FUN_0013b870(void)
{
    return nn_os_LightEvent_TryWait(DAT_00465644);
}

} /* extern "C" */
