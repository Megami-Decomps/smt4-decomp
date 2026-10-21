#include "shard/Scene43dcf0.h"

struct IndexedTimerGroup {
    u8 unk00[0x20];
    TimerSlot timers[8]; // 0x20
};

extern "C" {
s32 FUN_002b8ee0(TimerSlot *timer, s32 reverse);
s32 FUN_002bf818(TimerSlot *timer);

// Use the directional entrance animation for the edge slots, otherwise update normally.
s32 FUN_00233344(IndexedTimerGroup *group, s32 index)
{
    s32 result = 0;
    switch (index) {
    case 0:
    case 6:
        result = FUN_002b8ee0(&group->timers[index], 0);
        break;
    case 4:
        result = FUN_002b8ee0(&group->timers[index], 1);
        break;
    case 1:
    case 2:
    case 3:
    case 5:
    case 7:
        result = FUN_002bf818(&group->timers[index]);
        break;
    }
    return result;
}
}
