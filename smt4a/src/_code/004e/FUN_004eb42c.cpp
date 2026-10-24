/* NON_MATCHING: battle target cursor step (next/previous candidate with wrap-around); written from the decompilation, retail unrolls the unit-flag clear loop by two and schedules differently */
#include "common.h"

#define BTL_TARGET_COUNT 0x6D
#define BTL_UNIT_STRIDE 0x1D0
#define BTL_UNIT_FLAG_HIGHLIGHT 8

struct BtlUnitSlot {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u8 unk54[0x17C];
};

struct BtlMainUnits {
    /* 0x0000 */ u8 unk0000[0x1ED4];
    /* 0x1ED4 */ BtlUnitSlot *units;
};

struct BtlActorRefView {
    BtlMainUnits *main;
};

struct BtlTargetCommand {
    /* 0x000 */ u8 unk000[0x38];
    /* 0x038 */ u8 selected[BTL_TARGET_COUNT];
    /* 0x0A5 */ u8 unk0A5[0x18];
    /* 0x0BD */ u8 order[BTL_TARGET_COUNT];   /* candidate target ids in cursor order, 0: unused */
    /* 0x12A */ u8 unk12A[0x482];
    /* 0x5AC */ u32 current;
};

extern "C" {
s32 padButtonRepeat(u32 button);
s32 gameGlobalsGetState(void);
void eventQueueAddUnique(u32 event);
void sysMemClear(void *block, s32 size);

static __inline void btlClearHighlights(BtlActorRefView *actor)
{
    actor->main->units[0].flags &= ~BTL_UNIT_FLAG_HIGHLIGHT;
    for (s32 i = 1; i < BTL_TARGET_COUNT; i++)
        actor->main->units[i].flags &= ~BTL_UNIT_FLAG_HIGHLIGHT;
}

/* Moves the target cursor: confirms the same target, or steps to the next/previous candidate
 * (wrapping). Returns 1 when the cursor moved without wrapping. */
u32 FUN_004eb42c(BtlActorRefView *actor, BtlTargetCommand *command)
{
    u32 moved = 0;
    s32 position = 0;
    for (;;) {
        if (command->current == command->order[position])
            break;
        position++;
        if (position >= BTL_TARGET_COUNT) {
            position = -1;
            break;
        }
    }
    sysMemClear(command->selected, BTL_TARGET_COUNT);

    bool forward = padButtonRepeat(3) != 0 || padButtonRepeat(0xC) != 0 || gameGlobalsGetState() >= 1;
    if (forward) {
        if (padButtonRepeat(3) != 0 || padButtonRepeat(0xC) != 0)
            eventQueueAddUnique(0x100020D);
        btlClearHighlights(actor);
        for (s32 i = position + 1; i < BTL_TARGET_COUNT; i++) {
            if (command->order[i] != 0) {
                moved = 1;
                command->selected[command->order[i]] = 1;
                command->current = command->order[i];
                return moved;
            }
        }
        for (s32 i = 0; i < BTL_TARGET_COUNT; i++) {
            if (command->order[i] != 0) {
                command->selected[command->order[i]] = 1;
                command->current = command->order[i];
                return 0;
            }
        }
        return 0;
    }

    bool backward = padButtonRepeat(4) != 0 || padButtonRepeat(0xD) != 0 || gameGlobalsGetState() < 0;
    if (!backward) {
        command->selected[command->current] = 1;
        return moved;
    }
    if (padButtonRepeat(4) != 0 || padButtonRepeat(0xD) != 0)
        eventQueueAddUnique(0x100020D);
    btlClearHighlights(actor);
    for (s32 i = position - 1; i >= 0; i--) {
        if (command->order[i] != 0) {
            command->selected[command->order[i]] = 1;
            command->current = command->order[i];
            return 1;
        }
    }
    for (s32 i = BTL_TARGET_COUNT - 1; i >= 0; i--) {
        if (command->order[i] != 0) {
            command->selected[command->order[i]] = 1;
            command->current = command->order[i];
            return 0;
        }
    }
    return moved;
}

} /* extern "C" */
