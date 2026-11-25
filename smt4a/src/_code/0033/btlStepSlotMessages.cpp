#include "battle/BtlMainAccess.h"
#include "script/ScriptArgs.h"

extern "C" {

extern s16 g_battleSlotCount; /* 0x5e2058 */

u32 messageWindowShowOrPoll(s32 state, s32 index, u32 frame, s32 mode, s32 first, u32 second);

/* Inlined body of messageForwardDefaultMode: opens or polls without a custom duration. */
static u32 showMessageDefaultMode(u32 owner, u32 index, u32 frame, s32 mode, s32 option)
{
    return messageWindowShowOrPoll(owner, index, frame, mode, option, 0);
}

enum { BATTLE_SLOT_MESSAGE_MODE = 13, MESSAGE_STEP_FINISHED = 1 };

/* Steps every battle slot's message and returns the last unfinished result, or 1 when all are finished. */
s32 btlStepSlotMessages(void)
{
    u32 frame = scrGetCommandFrame();
    BtlMainStateExtA *state = btlGetMainStateExt();
    s32 result = MESSAGE_STEP_FINISHED;

    for (s32 i = 0; g_battleSlotCount > i; ++i) {
        u32 value = showMessageDefaultMode(state->infoWindow, i, frame, BATTLE_SLOT_MESSAGE_MODE, 0);
        if (value != MESSAGE_STEP_FINISHED) {
            result = value;
        }
    }
    return result;
}

} /* extern "C" */
