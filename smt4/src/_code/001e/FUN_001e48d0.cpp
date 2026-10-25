/* NON_MATCHING: ready-flag lifetime, pending-state copy signedness and saved-register allocation differ. */
#include "battle/btlAction.h"
#include "battle/ActionStateChannels.h"
#include "shard/JobWork.h"
extern "C" {
extern BtlActionGlobals g_btlAction;
s32 jobIsValid(u32 job);
void FUN_003d2140(ActionStateChannels *channels);
s32 FUN_003d28d0(ActionStateChannels *channels, s32 state);

/* Commit a pending action state or start its transition, respecting the previous channel. */
u32 FUN_001e48d0(u32 job)
{
    s32 index = ((ActionStateChannelOwner *)jobGetWork(job))->current;
    ActionStateChannels *channels = static_cast<ActionStateChannels *>(g_btlAction.data);
    ActionStateTransition *channel = reinterpret_cast<ActionStateTransition *>(&channels->entries[index].flags);
    s32 previous = channels->entries[0].owner->current - 1;
    if (previous < 0)
        previous = 3;
    s32 otherState;
    if (!jobIsValid(channels->entries[0].owner->jobs[previous]))
        otherState = -1;
    else
        otherState = channels->entries[channels->entries[0].owner->current].state;
    u32 flags = channel->flags;
    s32 state = (flags & 2) ? channel->pending : channel->state;
    bool ready = true;
    if (state == 11 && static_cast<u32>(otherState) <= 27)
        ready = false;
    if (!(flags & 0x40) && ready) {
        if (flags & 2) {
            if (channel->state == 35)
                return ~0u;
            ActionStateChannels *current = static_cast<ActionStateChannels *>(g_btlAction.data);
            ActionStateChannel *active = &current->entries[current->entries[0].owner->current];
            active->state = channel->pending;
            active->frames = 0;
            active->pending = 0;
            active->timer = 0;
            FUN_003d2140(current);
            channel->flags &= ~2u;
            return 0;
        }
        if (FUN_003d28d0(static_cast<ActionStateChannels *>(g_btlAction.data), channel->state))
            channel->flags |= 2;
        if (channel->frames < 0xFFFF)
            ++channel->frames;
    }
    return 0;
}
}
