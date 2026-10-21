/* Per-frame check: when idle, tries to start from the two queued ids; reports whether the follow-up condition fired (and then plays sound 0x92). */
#include "common.h"

extern "C" {

void sysPlaySe(s32 soundId);
s32 FUN_00162ea4(void);
u32 scrGetArg(s32 index);
s32 scrGetCommandFrame(void);
void FUN_002f0c18(s32 value);
s32 uiQuestIsIdle(void);
void FUN_002f1554(u32 id);
void FUN_0034aae4(void);
void FUN_00418870(u32 first, u32 second);

u8 FUN_003b7044(void)
{
    u16 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    s32 result;

    if (scrGetCommandFrame() == 0) {
        FUN_00418870(first, second);
        result = FUN_00162ea4();
        if (result != 0) {
            return 1;
        }
        FUN_002f0c18(result);
        FUN_002f1554(first);
    }
    result = uiQuestIsIdle();
    if (result != 0) {
        FUN_0034aae4();
        sysPlaySe(0x92);
        return 1;
    }
    return 0;
}

} /* extern "C" */
