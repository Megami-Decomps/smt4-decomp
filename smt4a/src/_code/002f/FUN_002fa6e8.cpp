#include "common.h"

extern "C" {

void onlineJobSetStateDone(u32 object);
void FUN_002faf62(void);

/* Runs FUN_002faf62, then onlineJobSetStateDone on the object. */
void FUN_002fa6e8(u32 object)
{
    FUN_002faf62();
    onlineJobSetStateDone(object);
}

} /* extern "C" */
