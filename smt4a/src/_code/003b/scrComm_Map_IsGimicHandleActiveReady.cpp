#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 mapGimicIsActiveHandleReady(s32 handle);

/* Script command: answers whether the map gimmick handle given as argument is active and ready. */
u32 scrComm_Map_IsGimicHandleActiveReady(void)
{
    return mapGimicIsActiveHandleReady(scrGetArg(0)) != 0;
}

} /* extern "C" */
