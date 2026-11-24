/* NON_MATCHING: the early `return 1` is built as `moveq r0, #1; beq` to its own epilogue; retail branches straight to the shared `mov r0, #1; pop` at the end. */
#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/Shard0047.h"
#include "code/Code0041_Smt4a.h"

extern "C" {
s32 scrGetCommandFrame();
void scrWorkSetValue(u32 index, s32 value);
s32 scrWorkGetValue(u32 index);
s32 dataTableValueOrZero(u32 index);
void scrMessageSetSpeakerTitle(u32 member, s32 mode, s32 enabled);
void messageSetScriptDisplayMode();
s32 messageForwardDefaultMode(s32 message, s32 mode, u32 frame, s32 style, s32 flags);
void partyEntryIsAvailable(u32 member);
void optionsClearFlag1();

// Poll the confirmation message and apply the selected member once the message completes.
u32 scrComm_Message_ConfirmAndApplySimple()
{
    if (scrGetCommandFrame() == 0) {
        if (!rosterHasLeader())
            return 1;
        scrWorkSetValue(0, 0);
        scrWorkSetValue(1, 0);
    }
    s32 message = dataTableValueOrZero(30);
    if (scrWorkGetValue(0) == 0) {
        u32 member = rosterGetLeaderId();
        scrMessageSetSpeakerTitle(member, 0, 1);
        messageSetScriptDisplayMode();
        s32 result = messageForwardDefaultMode(message, 2, scrWorkGetValue(1), 6, 0);
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
