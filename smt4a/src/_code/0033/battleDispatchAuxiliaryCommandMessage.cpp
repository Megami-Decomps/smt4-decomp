#include "battle/btlMain.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
u32 FUN_0027099c(u32 *command);
u32 messageAuxDispatch(u32 message, u32 value);
}

/* Dispatch the battle's auxiliary message with its current command value. */
extern "C" u32 battleDispatchAuxiliaryCommandMessage(void)
{
    BtlCommandMessageStateA *state = &btlGetMainState()->commandMessage;
    u32 message = state->auxiliaryMessage;
    u32 value = FUN_0027099c(state->commandWords);
    return messageAuxDispatch(message, value);
}
