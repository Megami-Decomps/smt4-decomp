#include "common.h"

extern "C" {

s32 padIsButtonPressed(s32 button);

/* Script command: answers whether pad button 0 is pressed. */
u32 scrComm_Pad_IsButton0Pressed(void)
{
    return padIsButtonPressed(0) != 0;
}

} /* extern "C" */
