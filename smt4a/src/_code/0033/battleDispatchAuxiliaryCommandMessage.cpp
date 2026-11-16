#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"

extern "C" {
u32 btlGetActiveShareRating(u32 *command);
u32 messageAuxDispatch(u32 message, u32 value);
}

/* Dispatch the battle's auxiliary message with its current command value. */
extern "C" u32 battleDispatchAuxiliaryCommandMessage(void)
{
    BtlCommandMessageStateA *state = &btlGetMainState()->commandMessage;
    u32 message = state->auxiliaryMessage;
    u32 value = btlGetActiveShareRating(state->commandWords);
    return messageAuxDispatch(message, value);
}
