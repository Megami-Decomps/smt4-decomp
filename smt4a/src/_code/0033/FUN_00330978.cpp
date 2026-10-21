#include "common.h"

extern "C" {

extern void *DAT_0057f658;
void renderPhasePushPopStates(void *owner, s32 value);

s32 FUN_00330978(s32 value)
{
    if (DAT_0057f658 != NULL) {
        renderPhasePushPopStates(DAT_0057f658, value);
    }
    return 0;
}

} /* extern "C" */
