#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

extern s32 gameFlagSlotAdvanceCounter(u32 id);
extern s32 FUN_00162ea4(void);
extern s32 FUN_002f0c18(void);
extern s32 FUN_002f1554(u32 id);
extern s32 uiQuestIsIdle(void);
extern s32 FUN_0034aae4(void);
extern s32 sysPlaySe(s32 preset);

/* Script command with a u16 argument: on its first frame it runs gameFlagSlotAdvanceCounter and, unless
 * FUN_00162ea4 reports one, starts FUN_002f1554. Returns 0 while uiQuestIsIdle says nothing is
 * pending, otherwise sets button help preset 0x92 and returns 1. */
u32 FUN_0031e644(void)
{
    u16 id = scrGetArg(0);

    if (scrGetCommandFrame() == 0) {
        gameFlagSlotAdvanceCounter(id);
        if (FUN_00162ea4() != 0) {
            return 1;
        }
        FUN_002f0c18();
        FUN_002f1554(id);
    }
    if (uiQuestIsIdle() == 0) {
        return 0;
    }
    FUN_0034aae4();
    sysPlaySe(0x92);
    return 1;
}

} /* extern "C" */
