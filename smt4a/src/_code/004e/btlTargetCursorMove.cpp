/* NON_MATCHING: battle target cursor step (next/previous candidate with wrap-around); only the entry schedule differs: retail loads command->current before setting position to -1 */
#include "common.h"
#include "sys/RuntimeObjects.h"
#include "quest_center/qcMain.h"

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
s32 gameGlobalsGetState(void);
void sysMemClear(void *block, s32 size);

/* Moves the target cursor: confirms the same target, or steps to the next/previous candidate
 * (wrapping). Returns 1 when the cursor moved without wrapping. */
u32 btlTargetCursorMove(BtlActorRefView *actor, BtlTargetCommand *command)
{
    u32 moved = 0;
    s32 position = -1;
    s32 i;
    for (i = 0; i < BTL_TARGET_COUNT; i++) {
        if (command->current == command->order[i]) {
            position = i;
            break;
        }
    }
    sysMemClear(command->selected, BTL_TARGET_COUNT);

    if (padButtonRepeat(3) != 0 || padButtonRepeat(0xC) != 0 || gameGlobalsGetState() > 0) {
        if (padButtonRepeat(3) != 0 || padButtonRepeat(0xC) != 0)
            eventQueueAddUnique(0x100020D);
        for (i = 0; i < BTL_TARGET_COUNT; i++)
            actor->main->units[i].flags &= ~BTL_UNIT_FLAG_HIGHLIGHT;
        for (i = position + 1; i < BTL_TARGET_COUNT; i++) {
            if (command->order[i] != 0) {
                moved = 1;
                command->selected[command->order[i]] = 1;
                command->current = command->order[i];
                break;
            }
        }
        if (moved == 0) for (i = 0; i < BTL_TARGET_COUNT; i++) {
            if (command->order[i] != 0) {
                command->selected[command->order[i]] = 1;
                command->current = command->order[i];
                break;
            }
        }
    } else if (padButtonRepeat(4) != 0 || padButtonRepeat(0xD) != 0 || gameGlobalsGetState() < 0) {
        if (padButtonRepeat(4) != 0 || padButtonRepeat(0xD) != 0)
            eventQueueAddUnique(0x100020D);
        for (i = 0; i < BTL_TARGET_COUNT; i++)
            actor->main->units[i].flags &= ~BTL_UNIT_FLAG_HIGHLIGHT;
        for (i = position - 1; i >= 0; i--) {
            if (command->order[i] != 0) {
                moved = 1;
                command->selected[command->order[i]] = 1;
                command->current = command->order[i];
                break;
            }
        }
        if (moved == 0) for (i = BTL_TARGET_COUNT - 1; i >= 0; i--) {
            if (command->order[i] != 0) {
                command->selected[command->order[i]] = 1;
                command->current = command->order[i];
                break;
            }
        }
    } else {
        command->selected[command->current] = 1;
    }
    return moved;
}

} /* extern "C" */
