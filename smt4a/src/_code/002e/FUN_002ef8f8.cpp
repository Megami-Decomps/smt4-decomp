/* NON_MATCHING: Thumb frame setup, maximum-attempt update and counter-loop scheduling differ; 114 built versus 106 retail rows. */
#include "addon/OnlineHistoryCompletion.h"

extern "C" {
OnlineHistoryQueueItem *arrayElementAddress_002eee88(void *queue, s32 index);
s32 FUN_0010acb8(u32 handle);
void FUN_002ef584(void *queue, OnlineHistoryEntry *entry);
s32 FUN_002eed8c(OnlineHistoryEntry *entry);
u32 FUN_0043222c(OnlineHistoryCompletionState *state, OnlineHistoryEntry *entry);
OnlineHistoryOptions *FUN_002ef01c(OnlineHistoryCore *core);
void onlineTimeGetNow(OnlineHistoryTimestamp *timestamp);
u32 FUN_002eacbc(OnlineHistoryCompletionState *state);
s32 FUN_002eb188(OnlineHistoryCore *core, u16 channel, u32 value,
                 OnlineHistoryEntry *entry, void *result);

void FUN_002ef8f8(OnlineHistoryCompletionState *state, OnlineHistoryEntry *entry)
{
    if ((entry->flags & 0xF) == 3) {
        for (s32 index = 0; index < state->entryCount + 1; ++index) {
            OnlineHistoryQueueItem *item = arrayElementAddress_002eee88(state->queue, index);
            if (FUN_0010acb8(item->handle)) {
                ++state->rejected;
                FUN_002ef584(state->core->pendingQueue, entry);
                return;
            }
        }
    }
    u16 attempts = entry->attempts + 1;
    entry->attempts = attempts;
    if (state->longest < attempts) {
        state->longest = attempts;
    }
    if (entry->attempts >= 2) {
        ++state->repeated;
        state->accumulated += FUN_002eed8c(entry);
    }
    entry->node->value = FUN_0043222c(state, entry);
    FUN_002ef584(state->core->pendingQueue, entry);
    if (FUN_002ef01c(state->core)->timestampsEnabled) {
        OnlineHistoryTimestamp timestamp;
        onlineTimeGetNow(&timestamp);
        state->timestamp = timestamp;
    }
    u32 value = FUN_002eacbc(state);
    if (!FUN_002eb188(state->core, state->channel, value, entry, state->result)) {
        ++state->failed;
    }
}
}
