#include "common.h"

extern "C" {

extern void *g_naviMain;

extern s32 gameFlagIsSet(u32 flag);
extern s32 inputIsQuestConfirmPressed(void);

/* True when navi exists, flag 0x404 is set and inputIsQuestConfirmPressed agrees. */
u32 naviFlag404Active(void)
{
    if (g_naviMain == NULL) {
        return 0;
    }
    if (gameFlagIsSet(0x404) == 0) {
        return 0;
    }
    return inputIsQuestConfirmPressed() != 0;
}

} /* extern "C" */
