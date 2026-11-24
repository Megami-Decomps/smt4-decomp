#include "battle/BtlPendingCommandsA.h"

/* Appends a command to the battle's pending commands. */
extern "C" void btlAppendPendingCommand(BtlMainStateA *state, BtlPendingCommand command)
{
    state->pendingCommands.commands[state->pendingCommands.count].kind = command.kind;
    state->pendingCommands.commands[state->pendingCommands.count].unitIndex = command.unitIndex;
    state->pendingCommands.commands[state->pendingCommands.count].first = command.first;
    state->pendingCommands.commands[state->pendingCommands.count].second = command.second;
    state->pendingCommands.count++;
}
