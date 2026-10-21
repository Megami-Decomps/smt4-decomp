/* NON_MATCHING: retail's literal pool carries one extra unreferenced word (0x00587F28) before the constants, the early-out branches return r0 (zero) through the shared pop, and the first constant load follows the push; built loads the constants first and ends with an explicit `mov r0, #0`. */
#include "common.h"

extern "C" {

s32 gameFlagIsSet(u32 flag);
s32 inputIsQuestConfirmPressed(void);

/* Returns whether flags 0x49A and 0x404 are set, flag 0x10 is set whenever flag 0xC is, and inputIsQuestConfirmPressed succeeds. */
u32 FUN_00328200(void)
{
    return gameFlagIsSet(0x49A) != 0 && gameFlagIsSet(0x404) != 0 && (gameFlagIsSet(0xC) == 0 || gameFlagIsSet(0x10) != 0) &&
           inputIsQuestConfirmPressed() != 0;
}

} /* extern "C" */
