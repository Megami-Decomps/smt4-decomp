/* Per-frame check: when idle, tries to start from the two queued ids; reports whether the follow-up condition fired (and then plays sound 0x92). */
#include "common.h"

extern "C" {

void sysPlaySe(s32 soundId);
s32 eventIsSkipping(void);
u32 scrGetArg(s32 index);
s32 scrGetCommandFrame(void);
void uiQuestCreate(s32 value);
s32 uiQuestIsIdle(void);
void uiQuestOpenDetails(u32 id);
void uiQuestClose(void);
void flagEntrySetValue(u32 first, u32 second);

u8 FUN_003b7044(void)
{
    u16 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    s32 result;

    if (scrGetCommandFrame() == 0) {
        flagEntrySetValue(first, second);
        result = eventIsSkipping();
        if (result != 0) {
            return 1;
        }
        uiQuestCreate(result);
        uiQuestOpenDetails(first);
    }
    result = uiQuestIsIdle();
    if (result != 0) {
        uiQuestClose();
        sysPlaySe(0x92);
        return 1;
    }
    return 0;
}

} /* extern "C" */
