/* NON_MATCHING: second command store loads buffer and count in a different order. */
#include "battle/btlMain.h"
#include "battle/BattleCommandValue.h"

// Append a command, preserving the raw bits of its integer-or-float payload.
extern "C" void FUN_003e77cc(BtlMainStateA *state, u32 kind, s32 unitIndex, s32 first, BattleCommandValue second)
{
    state->pendingCommands.commands[state->pendingCommands.count].kind = kind;
    state->pendingCommands.commands[state->pendingCommands.count].unitIndex = unitIndex;
    state->pendingCommands.commands[state->pendingCommands.count].first = first;
    state->pendingCommands.commands[state->pendingCommands.count].second = second.word;
    state->pendingCommands.count++;
}
