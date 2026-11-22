#include "common.h"
extern "C" {
extern void *DAT_0057f658;
void sceneHealingUpdate(void *work, u32 value);
/* Forwards the callback value while the work object exists. */
s32 FUN_002e5900(u32 value)
{
    if (DAT_0057f658 != NULL)
        sceneHealingUpdate(DAT_0057f658, value);
    return 0;
}
}
