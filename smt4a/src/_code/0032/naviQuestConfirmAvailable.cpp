#include "common.h"

extern "C" {

extern void *g_naviMain;

s32 gameFlagIsSet(u32 flag);
s32 inputIsQuestConfirmPressed(void);

/* With the navigation screen up, returns whether flags 0x49A and 0x404 are set, flag 0x10 is set whenever flag 0xC is, and inputIsQuestConfirmPressed succeeds. */
u32 naviQuestConfirmAvailable(void)
{
    if (g_naviMain == NULL) {
        return 0;
    }
    if (gameFlagIsSet(0x49A) == 0) {
        return 0;
    }
    if (gameFlagIsSet(0x404) == 0) {
        return 0;
    }
    if (gameFlagIsSet(0xC) != 0 && gameFlagIsSet(0x10) == 0) {
        return 0;
    }
    return inputIsQuestConfirmPressed() != 0;
}

} /* extern "C" */
