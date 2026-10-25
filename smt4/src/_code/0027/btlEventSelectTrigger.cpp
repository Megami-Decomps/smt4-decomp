/* NON_MATCHING: condition switch lowers to comparisons, initialization stores reorder and controller registers differ; -O2 candidate. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/W4_Match6_BtlScript.h"
#include "battle/BtlMainAccess.h"

struct BattleEventTrigger {
    u8 type;
    u8 condition;
    u16 unitId;
    char entry[0x20];
};
struct BattleEventController {
    s32 state;
    u32 running;
    u8 unk08[8];
    void *group; // 0x10
    u32 unk14;
    BattleEventTrigger *events; // 0x18
    s32 eventCount;
    s32 selected; // 0x20
    u32 selectedType;
    s32 delay;
    u8 stopped; // 0x2c
};
extern "C" {
s32 tableGroupFindEntryIndex(void *, const char *);

u32 btlEventSelectTrigger(BattleEventController *controller, u32 type, s32 slot, u32 queryOnly)
{
    if (controller->state != 0 && (controller->state != 10 || controller->delay >= 1))
        return 0;
    if (!controller->events)
        return 0;
    if (!queryOnly) {
        controller->selected = -1;
        controller->selectedType = 0;
        controller->running = 0;
    }
    BtlMainState *battle = btlGetMainState();
    BattleEventTrigger *event = controller->events;
    for (s32 i = 0; i < controller->eventCount; ++i, ++event) {
        if (event->type != type)
            continue;
        if (((type == 3 || type == 4) || (type == 7 || type == 5)) && slot >= 0) {
            s32 special = FUN_003bf570(slot);
            BtlEntry *unit = &battle->entries[slot];
            switch (event->condition) {
            case 1:
                if (special || unit->id != event->unitId)
                    continue;
                break;
            case 2:
                if (!special || unit->id != event->unitId)
                    continue;
                break;
            case 3:
                if (!(unit->flags & 2))
                    continue;
                break;
            case 4:
                if (!(unit->flags & 0x20))
                    continue;
                break;
            }
        }
        if (!queryOnly) {
            switch (type) {
            case 0:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                ((BtlMainState *)battle)->battleFlags |= 0x100000;
                break;
            }
        }
        s32 index = tableGroupFindEntryIndex(controller->group, event->entry);
        if (index >= 0) {
            if (!queryOnly) {
                controller->selected = index;
                controller->stopped = 0;
                controller->selectedType = type;
            }
            return 1;
        }
    }
    return 0;
}
}
