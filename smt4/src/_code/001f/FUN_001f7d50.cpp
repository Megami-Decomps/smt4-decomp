/* NON_MATCHING: retail retains the channel-body pointer rather than record base, changing write offsets and flag-state branch placement. */
#include "battle/btlAction.h"
#include "battle/ActionStateChannels.h"
#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
extern BtlActionGlobals g_btlAction;
void jobIsValid(u32 job);
void FUN_002569ac(ActionStateChannels *channels, s32 index);
u32 FUN_001e48d0(void);
void jobWorkStopCurrentJob(void);
u32 taskCreateDraw(const char *name, s32 priority, u32 flags, u32 stack,
                   u32 (*draw)(void), void (*destroy)(void), void *work, u32 parent);

// Rotate through the four action channels and schedule combatant action drawing.
void FUN_001f7d50(ActionStateChannelOwner *owner, s32 mode, s32 index, s32 argument, s32 parameter)
{
    owner->current = (owner->current + 1) % 4;
    jobIsValid(owner->jobs[owner->current]);
    ActionStateChannels *channels = static_cast<ActionStateChannels *>(g_btlAction.data);
    channels->entries[0].owner = owner;
    ActionStateChannel *channel = &channels->entries[owner->current];
    channel->state = 0;
    // The battle data extends beyond the canonical channel-owner prefix.
    BtlMainState *battle = reinterpret_cast<BtlMainState *>(owner);
    channel->action.record = NULL;
    BtlEntry *entry = &battle->entries[index];
    channel->action.entry = entry;
    if ((entry->flags & 0x80) == 0)
        channel->action.record = &battle->actions.records[entry->members.ids[0]];
    channel->action.parameters = reinterpret_cast<u8 *>(entry) + 0xCC;
    channel->action.index = index;
    channel->action.phase = 0;
    channel->action.parameter = parameter;
    channel->action.drawState = 0;
    channel->flags = 0;
    channel->action.mode = mode;
    channel->action.argument = argument;
    BtlMainState *channelBattle = reinterpret_cast<BtlMainState *>(channels->entries[0].owner);
    if ((channelBattle->battleFlags & 0x40) != 0)
        channel->flags = 0x80;
    else if ((channelBattle->battleFlags & 0x100) != 0)
        channel->flags = 0x1000;
    FUN_002569ac(channels, channels->entries[0].owner->current);
    u32 task = taskCreateDraw("btlAction Calc", 1, 0, 0, FUN_001e48d0,
                             jobWorkStopCurrentJob, owner, battle->encounter.ownerJob);
    owner->jobs[owner->current] = task;
}
}
