#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void soundSlotStopById(s32 id);

/* Script command: stops the sound slot with the id given as argument. */
u32 scrComm_Sound_StopSlotById(void)
{
    soundSlotStopById(scrGetArg(0));
    return 1;
}

} /* extern "C" */
