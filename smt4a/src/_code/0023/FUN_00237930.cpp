#include "common.h"

extern "C" {

u8 FUN_003d3738(void);
int sWinHasValue(void);
int scrGetCommandFrame(void);
void taskWindowRelease(int arg);

/* Runs FUN_003d3738 if scrGetCommandFrame reports 0; returns true (after calling taskWindowRelease) when sWinHasValue reports 0. */
bool FUN_00237930(void)
{
    if (scrGetCommandFrame() == 0) {
        FUN_003d3738();
    }
    int result = sWinHasValue();
    if (result == 0) {
        taskWindowRelease(result);
    }
    return result == 0;
}

} /* extern "C" */
