/* NON_MATCHING: near (205 rows against 206): retail shares the `if (dialogIsActive()) infoWinStartTimer(1)` tail and the clear-and-return-0 stub between its early exits, and runs the bit-clear through r1/r2; ours repeats the tails inline and clears through r0. Conditions, order of checks and constants follow retail. */
#include "battle/BattleUnitSlot.h"

#define PICK_ACTIVE_FLAGS 0x140
#define PICK_FLAG_ARMED_A 0x40
#define PICK_FLAG_ARMED_B 0x100
#define PICK_BLOCK_FLAGS 0x80001

/* The battle job's work (observed fields). */
struct BtlPickWork {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u32 job;
    /* 0x0024 */ u8 unk0024[0x3C];
    /* 0x0060 */ u8 unk0060[4];
    /* 0x0064 */ s32 mode;
    /* 0x0068 */ u8 unk0068[0x14];
    /* 0x007C */ u32 flags;
    /* 0x0080 */ u8 unk0080[0x4420];
    /* 0x44A0 */ u32 state;
    /* 0x44A4 */ u8 unk44A4[4];
    /* 0x44A8 */ u32 blockFlags;
};

/* The unit's battle record and its action (observed fields). */
struct BtlPickAction {
    /* 0x000 */ u8 unk000[0x14C];
    /* 0x14C */ s16 kind;
};

struct BtlPickUnit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ BtlPickAction *action;
};

extern "C" {

extern s32 g_btlScriptUnit;
extern u32 g_btlActionReflect;
extern s32 g_btlUiBlock;

BtlPickWork *jobGetWork(void);
s32 dialogIsActive(void);
void infoWinStartTimer(s32 value);
s32 jobIsValid(u32 job);
s32 btlReflectCountEntriesById(u32 reflect, u32 id);
s32 FUN_003adab8(void);
s32 btlScriptUnitIsPresentAndActive(BtlPickWork *work);
s32 FUN_002c1658(s32 button, s32 repeat);
void FUN_0027e874(void);
void FUN_003c033c(s32 a, s32 b);
s32 FUN_00337324(BtlPickWork *work);
void eventQueueAddUniqueIfValid(u32 event);

/* Handles the battle pick buttons: while nothing blocks it, a press of the first button arms or disarms
 * the first selection, the second button the second; every block path clears both armed bits (and shows
 * the info window timer if a dialog is open). Always returns 0. */
u32 FUN_001b5154(void)
{
    BtlPickWork *work = jobGetWork();
    u32 *state;

    if ((work->blockFlags & PICK_BLOCK_FLAGS) != 0) {
        work->state = work->state & ~PICK_ACTIVE_FLAGS;
        if (dialogIsActive() != 0) {
            infoWinStartTimer(1);
        }
        return 0;
    }
    state = &work->state;
    if ((*state & 0x100000) != 0) {
        *state = *state & ~PICK_ACTIVE_FLAGS;
        if (dialogIsActive() != 0) {
            infoWinStartTimer(1);
        }
        return 0;
    }
    if ((*state & 0x200) != 0) {
        *state = *state & ~PICK_ACTIVE_FLAGS;
        return 0;
    }
    if (jobIsValid(work->job) != 0) {
        *state = *state & ~PICK_ACTIVE_FLAGS;
        if (dialogIsActive() != 0) {
            infoWinStartTimer(1);
        }
        return 0;
    }
    if ((work->flags & 1) != 0) {
        *state = *state & ~PICK_ACTIVE_FLAGS;
        if (dialogIsActive() != 0) {
            infoWinStartTimer(1);
        }
        return 0;
    }
    if (work->mode == 0x16) {
        *state = *state & ~PICK_ACTIVE_FLAGS;
        if (dialogIsActive() != 0) {
            infoWinStartTimer(1);
        }
        return 0;
    }
    if (work->mode == 0x14 || work->mode == 0x15) {
        *state = *state & ~PICK_ACTIVE_FLAGS;
        return 0;
    }
    if (g_btlScriptUnit != 0) {
        BtlPickUnit *unit = reinterpret_cast<BtlPickUnit *>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));

        if (unit != NULL && unit->action != NULL &&
            (unit->action->kind == 7 || unit->action->kind == 9 || unit->action->kind == 13)) {
            *state = *state & ~PICK_ACTIVE_FLAGS;
            if (dialogIsActive() != 0) {
                infoWinStartTimer(1);
            }
            return 0;
        }
    }
    if (btlReflectCountEntriesById(g_btlActionReflect, 0x2A) > 0) {
        return 0;
    }
    if (g_btlUiBlock == 0 || FUN_003adab8() == 0 || btlScriptUnitIsPresentAndActive(work) == 0) {
        return 0;
    }
    if ((*state & PICK_FLAG_ARMED_A) != 0) {
        if (FUN_002c1658(1, 1) == 0) {
            return 0;
        }
        FUN_0027e874();
        infoWinStartTimer(1);
        *state = *state & ~PICK_FLAG_ARMED_A;
        eventQueueAddUniqueIfValid(0x100016E);
        return 0;
    }
    if ((*state & PICK_FLAG_ARMED_B) != 0) {
        if (FUN_002c1658(1, 1) == 0) {
            return 0;
        }
        FUN_0027e874();
        infoWinStartTimer(1);
        *state = *state & ~PICK_FLAG_ARMED_B;
        eventQueueAddUniqueIfValid(0x100016E);
        return 0;
    }
    if (FUN_002c1658(7, 1) != 0) {
        FUN_0027e874();
        FUN_003c033c(0, 0);
        *state = *state | PICK_FLAG_ARMED_A;
        eventQueueAddUniqueIfValid(0x100016D);
        return 0;
    }
    if (FUN_002c1658(8, 1) == 0) {
        return 0;
    }
    if (FUN_00337324(work) == 0) {
        return 0;
    }
    FUN_0027e874();
    FUN_003c033c(1, 0);
    *state = *state | PICK_FLAG_ARMED_B;
    eventQueueAddUniqueIfValid(0x100016D);
    return 0;
}

} /* extern "C" */
