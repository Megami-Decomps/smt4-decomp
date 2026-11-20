#include "quest_center/QuestRecord.h"

extern "C" {
u32 scrGetArg(u32);
s32 scrGetCommandFrame(void);
void gameFlagEntryActivate(u32);
void scrWorkSetValue(s32, s32);
s32 scrWorkGetValue(s32);
const void *fileSlotGetBuffer(u32);
void uiBindRecordRewardText(u32, s32, s32);
void messageSetConfirmDisplayMode(void);
s32 messageForwardDefaultMode(const void *, s32, s32, s32, s32);
s32 rosterHasLeader(void);
u16 rosterGetLeaderId(void);
void gameOptionsEnableAndReset(void);

/* Run the swap confirmation message and reset options when the selected kinds require it. */
u32 scrComm_Party_ConfirmSwap(void)
{
    u16 id = scrGetArg(0);
    if (scrGetCommandFrame() == 0) {
        gameFlagEntryActivate(id);
        scrWorkSetValue(0, 0);
        scrWorkSetValue(1, 0);
    }
    const void *messages = fileSlotGetBuffer(0x1E);
    if (scrWorkGetValue(0) == 0) {
        uiBindRecordRewardText(id, 0, 1);
        messageSetConfirmDisplayMode();
        s32 result = messageForwardDefaultMode(messages, 0, scrWorkGetValue(1), 6, 0);
        scrWorkSetValue(1, scrWorkGetValue(1) + 1);
        if (result == 1) {
            scrWorkSetValue(1, 0);
            if (rosterHasLeader()) {
                const QuestRecord *previous = questDataGetRecord(rosterGetLeaderId());
                const QuestRecord *selected = questDataGetRecord(id);
                if (previous != NULL && selected != NULL &&
                    ((previous->kind != 5 && previous->kind != 4 &&
                      previous->kind != 1) || selected->kind != 0)) {
                    gameOptionsEnableAndReset();
                }
            }
            return 1;
        }
    }
    return 0;
}
}
