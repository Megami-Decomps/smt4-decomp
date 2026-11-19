#include "camp/Unite/UniteEffectState.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

int btlTalkBustUpDestroy(void);
int fileSlotFree(int id);
int jobStop(u32 job, int mode);

void screenStateRelease(void)
{
    UniteEffectWork *work = g_screenStateWork;

    fileSlotFree(0x25);
    btlTalkBustUpDestroy();
    jobStop(work->process, 0);
    asdMemFree(work);
    g_screenStateWork = NULL;
}

} /* extern "C" */
