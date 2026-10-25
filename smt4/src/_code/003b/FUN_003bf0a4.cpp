/* NON_MATCHING: Exclusion tests merge into one mask and event-slot writes use predication instead of retail's shared branches. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include <stddef.h>
#include "battle/BtlMainAccess.h"

extern "C" {
s32 randRange(u32 maximum);
u32 FUN_002533f4(u32 first, u32 second, s32 mode);

/* Selects a forced or random battle event and assigns it to an available event slot. */
s32 FUN_003bf0a4(void)
{
    struct EventView {
        /* 0x0000 */ u8 unk0000[0xC0];
        /* 0x00C0 */ s32 primary;
        /* 0x00C4 */ s32 secondary;
        /* 0x00C8 */ u8 unk00C8[0x50];
        /* 0x0118 */ u16 chance;
        /* 0x011A */ u16 forcedEvent;
        /* 0x011C */ u8 unk011C[0x28];
        /* 0x0144 */ u32 first;
        /* 0x0148 */ u32 second;
        /* 0x014C */ u8 unk014C[0x2DE4];
        /* 0x2F30 */ u32 state;
        /* 0x2F34 */ u8 unk2F34[0x1578];
        /* 0x44AC */ u32 flags;
        /* 0x44B0 */ u8 unk44B0[5];
        /* 0x44B5 */ u8 bonus;
    };
    typedef char EventViewOffsetCheck[offsetof(EventView, chance) == 0x118 &&
        offsetof(EventView, state) == 0x2F30 && offsetof(EventView, flags) == 0x44AC &&
        offsetof(EventView, bonus) == 0x44B5 ? 1 : -1];
    BtlMainState *battle = btlGetMainState();
    EventView *event = (EventView *)battle;
    if ((event->flags & 0x20) != 0) {
        if (event->state >= 13) {
            event->state = 2;
        }
        return 1;
    }
    u32 flags = battle->battleFlags;
    if ((flags & 0x200) != 0 || (flags & 0x40000) != 0 || (flags & 0x400000) != 0) {
        return 0;
    }
    if (event->primary >= 0 && battle->encounterControl.blocked >= 3) {
        return 0;
    }
    u32 selected = event->forcedEvent;
    if (selected == 0) {
        u16 chance = event->chance;
        if ((battle->editorControl.flags & 0x20000000) == 0 && chance == 0) {
            return 0;
        }
        s32 roll = randRange(99);
        if ((battle->editorControl.flags & 0x20000000) != 0) {
            roll = -1;
        }
        if ((s32)(event->bonus * 3 + chance) <= roll) {
            return 0;
        }
        selected = FUN_002533f4(event->first, event->second, 1);
        if (selected == 0) {
            return 0;
        }
    }
    if (event->primary >= 0) {
        event->primary = selected;
        return 1;
    }
    if (event->secondary >= 0) {
        event->secondary = selected;
        return 1;
    }
    return 0;
}
}
