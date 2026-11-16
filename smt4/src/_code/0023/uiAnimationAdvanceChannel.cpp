#include "ui/PartyPanelState.h"

struct IndexedTimerGroup {
    u8 unk00[0x20];
    TimerSlot timers[8]; // 0x20
};

extern "C" {
extern PartyPanelState *g_partyPanel;
s32 uiSlidingSpriteAdvance(TimerSlot *timer, s32 reverse);
s32 uiSpriteAdvanceAnimation(TimerSlot *timer);

// Use the directional entrance animation for the edge slots, otherwise update normally.
s32 uiAnimationAdvanceChannel(IndexedTimerGroup *group, s32 index)
{
    s32 result = 0;
    switch (index) {
    case 0:
    case 6:
        result = uiSlidingSpriteAdvance(&group->timers[index], 0);
        break;
    case 4:
        result = uiSlidingSpriteAdvance(&group->timers[index], 1);
        break;
    case 1:
    case 2:
    case 3:
    case 5:
    case 7:
        result = uiSpriteAdvanceAnimation(&group->timers[index]);
        break;
    }
    return result;
}
}
