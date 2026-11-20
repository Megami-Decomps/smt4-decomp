#include "common.h"

extern "C" {

u8 spriteWindowAdvanceOrCancel(void);
int sWinHasValue(void);
int scrGetCommandFrame(void);
void taskWindowRelease(int arg);

/* Runs spriteWindowAdvanceOrCancel if scrGetCommandFrame reports 0; returns true (after calling taskWindowRelease) when sWinHasValue reports 0. */
bool scrCommPollWindowAndReleaseTask(void)
{
    if (scrGetCommandFrame() == 0) {
        spriteWindowAdvanceOrCancel();
    }
    int result = sWinHasValue();
    if (result == 0) {
        taskWindowRelease(result);
    }
    return result == 0;
}

} /* extern "C" */
