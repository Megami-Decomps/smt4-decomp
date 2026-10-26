/* NON_MATCHING: maximum update now uses an atLeast helper (retail order/condition reproduced); remaining: battle address computed after the entry value address, flag read-modify-writes use r1 where retail uses r2, `movs` null test on the found unit, enemy-count loop registers. */
#include "shard/W4_Match6_BtlEntry.h"

struct CommandEventBattle {
    u8 unk0000[0x84];
    u32 actor, phase;
    u8 unk008c[0x1f34];
    BtlEntry *entries;
    u8 unk1fc4[0x296];
    s16 target;
    s32 mode;
    u32 event;
    s32 targetMode;
    u32 unk2268;
    s32 maximum;
    u8 unk2270[0x2230];
    u32 flags;
};
struct CommandEventContext { CommandEventBattle *battle; };
struct CommandEventUnit { u8 unk000[0x1cc]; u16 value; };
struct CommandEventData { u8 unk000[0x14c]; u16 type; };
struct CommandEventChoice {
    u32 flags;
    u8 unk04[0x20];
    u32 effectHandle;
    CommandEventData *command;
};
extern "C" {
BtlEntry *btlMainFindEntryByListedId(CommandEventBattle *, s32);
void FUN_00246454(u32, CommandEventChoice *, BtlEntry *);
void FUN_0026beb4(u32, CommandEventChoice *, u32, u32, u32);
void FUN_002569ac(CommandEventContext *, u32);
void btlEntryValuesCopy(CommandEventContext *, CommandEventChoice *);

static __inline s32 atLeastS32(s32 value, s32 minimum)
{
    return value > minimum ? value : minimum;
}

void btlResolveCommandEvent(CommandEventContext *context, CommandEventChoice *choice)
{
    BtlEntry *target = btlMainFindEntryByListedId(context->battle, context->battle->target);
    if (target && !(context->battle->flags & 0x200)) {
        CommandEventBattle *battle = context->battle;
        battle->maximum = atLeastS32(battle->maximum, ((CommandEventUnit *)target)->value);
    }
    switch (context->battle->mode) {
    case 1:
        break;
    case 2:
        context->battle->flags |= 0x400000;
        break;
    case 3:
        choice->command->type = 4;
        return;
    }
    bool queueEffect = false;
    u32 effect = 0;
    if (context->battle->mode == 1) {
        switch (context->battle->event) {
        case 1: queueEffect = true; effect = 12; break;
        case 2: queueEffect = true; effect = 5; break;
        case 3: queueEffect = true; effect = 3; break;
        case 4: queueEffect = true; effect = 14; break;
        case 7:
            context->battle->flags |= 0x80;
            choice->flags |= 4;
            break;
        }
        CommandEventBattle *battle = context->battle;
        if (battle->targetMode == 2) {
            BtlEntry *unit = btlMainFindEntryByListedId(battle, battle->target);
            if (unit)
                FUN_00246454(0, choice, unit);
        }
        if (queueEffect)
            FUN_0026beb4(0, choice, effect, choice->effectHandle, 1);
    }
    CommandEventBattle *battle = context->battle;
    BtlEntry *enemy = &battle->entries[4];
    s32 active = 0;
    for (s32 remaining = 50; remaining > 0; --remaining, ++enemy) {
        if ((enemy->flags & BTL_ENTRY_FLAG_ACTIVE) && !(enemy->flags & BTL_ENTRY_FLAG_BLOCKED))
            ++active;
    }
    if (!active)
        battle->phase = 10;
    FUN_002569ac(context, context->battle->actor);
    btlEntryValuesCopy(context, choice);
}
}
