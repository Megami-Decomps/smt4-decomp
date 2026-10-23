#include "shard/W6_W6Match5_SecondarySort.h"

extern "C" {
u32 scrGetArg(u32);
s32 scrGetCommandFrame(void);
void FUN_0028eeb8(u32);
void scrWorkSetValue(s32, s32);
s32 scrWorkGetValue(s32);
const void *fileSlotGetBuffer(u32);
void uiBindRecordRewardText(u32, s32, s32);
void FUN_002bff50(void);
s32 messageForwardDefaultMode(const void *, s32, s32, s32, s32);
s32 FUN_0029022c(void);
u16 FUN_002903f0(void);
void gameOptionsEnableAndReset(void);

/* Run the swap confirmation message and reset options when the selected kinds require it. */
u32 scrComm_Party_ConfirmSwap(void)
{
    u16 id = scrGetArg(0);
    if (scrGetCommandFrame() == 0) {
        FUN_0028eeb8(id);
        scrWorkSetValue(0, 0);
        scrWorkSetValue(1, 0);
    }
    const void *messages = fileSlotGetBuffer(0x1E);
    if (scrWorkGetValue(0) == 0) {
        uiBindRecordRewardText(id, 0, 1);
        FUN_002bff50();
        s32 result = messageForwardDefaultMode(messages, 0, scrWorkGetValue(1), 6, 0);
        scrWorkSetValue(1, scrWorkGetValue(1) + 1);
        if (result == 1) {
            scrWorkSetValue(1, 0);
            if (FUN_0029022c()) {
                const SecondarySortRecord *previous = dataTable1bOr1cGetRecord(FUN_002903f0());
                const SecondarySortRecord *selected = dataTable1bOr1cGetRecord(id);
                if (previous != NULL && selected != NULL &&
                    ((previous->classification.kind != 5 && previous->classification.kind != 4 &&
                      previous->classification.kind != 1) || selected->classification.kind != 0)) {
                    gameOptionsEnableAndReset();
                }
            }
            return 1;
        }
    }
    return 0;
}
}
