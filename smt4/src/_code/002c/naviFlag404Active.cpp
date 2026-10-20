#include "common.h"

extern "C" {

extern void *g_naviMain;

extern s32 gameFlagIsSet(u32 flag);
extern s32 FUN_0024c278(void);

/* True when navi exists, flag 0x404 is set and FUN_0024c278 agrees. */
u32 naviFlag404Active(void)
{
    if (g_naviMain == NULL) {
        return 0;
    }
    if (gameFlagIsSet(0x404) == 0) {
        return 0;
    }
    return FUN_0024c278() != 0;
}

} /* extern "C" */
