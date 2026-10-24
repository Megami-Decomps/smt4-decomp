#include "common.h"

extern "C" {

extern s32 scrGetArg(u32 index);
extern s32 scrGetCommandFrame(void);
extern s32 FUN_00348b00(u32 id);
extern s32 FUN_002c1d5c(void);
extern s32 FUN_00269dc8(void);
extern s32 FUN_003115b4(u32 id);
extern s32 uiQuestIsIdle(void);
extern s32 FUN_00296934(void);
extern s32 buttonHelpSetPreset(s32 preset);

/* Script command with a u16 argument: on its first frame it runs FUN_00348b00 and, unless
 * FUN_002c1d5c reports one, starts FUN_003115b4. Returns 0 while uiQuestIsIdle says nothing is
 * pending, otherwise sets button help preset 0x90 and returns 1. */
u32 FUN_00223288(void)
{
    u16 id = scrGetArg(0);

    if (scrGetCommandFrame() == 0) {
        FUN_00348b00(id);
        if (FUN_002c1d5c() != 0) {
            return 1;
        }
        FUN_00269dc8();
        FUN_003115b4(id);
    }
    if (uiQuestIsIdle() == 0) {
        return 0;
    }
    FUN_00296934();
    buttonHelpSetPreset(0x90);
    return 1;
}

} /* extern "C" */
