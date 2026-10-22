/* NON_MATCHING: early completion return layout and frame-counter temporaries differ from retail's shared return block. */
#include "common.h"

extern "C" {
s32 scrGetCommandFrame();
s32 FUN_004186a4();
void scrWorkSetValue(u32 index, s32 value);
s32 scrWorkGetValue(u32 index);
s32 dataTableValueOrZero(u32 index);
u32 FUN_004186e0();
void FUN_003dea6c(u32 member, s32 mode, s32 enabled);
void FUN_001695a0();
s32 messageForwardDefaultMode(s32 message, s32 mode, u32 frame, s32 style, s32 flags);
void FUN_00418070(u32 member, s32 mode);
void partyEntryIsAvailable(u32 member);
void optionsClearFlag1();

// Poll the confirmation message and apply the selected member once the message completes.
u32 scrComm_Message_ConfirmAndApplySimple()
{
    if (scrGetCommandFrame() == 0) {
        if (!FUN_004186a4())
            return 1;
        scrWorkSetValue(0, 0);
        scrWorkSetValue(1, 0);
    }
    s32 message = dataTableValueOrZero(30);
    if (scrWorkGetValue(0) == 0) {
        u32 member = FUN_004186e0();
        FUN_003dea6c(member, 0, 1);
        FUN_001695a0();
        u32 frame = scrWorkGetValue(1);
        s32 result = messageForwardDefaultMode(message, 2, frame, 6, 0);
        scrWorkSetValue(1, scrWorkGetValue(1) + 1);
        if (result == 1) {
            scrWorkSetValue(1, 0);
            FUN_00418070(member, 0);
            partyEntryIsAvailable(member);
            optionsClearFlag1();
            return 1;
        }
    }
    return 0;
}
}
