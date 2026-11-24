#include "battle/BtlPendingCommands.h"

/* Appends a command to the battle's listed actions for the turn. */
extern "C" void btlAppendPendingCommand(BtlMainState *state, BtlPendingCommand command)
{
    state->listedActions.actions[state->listedActions.count].kind = command.kind;
    state->listedActions.actions[state->listedActions.count].unitIndex = command.unitIndex;
    state->listedActions.actions[state->listedActions.count].first = command.first;
    state->listedActions.actions[state->listedActions.count].second = command.second;
    state->listedActions.count++;
}
