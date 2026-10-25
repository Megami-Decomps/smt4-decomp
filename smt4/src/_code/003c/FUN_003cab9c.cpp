/* NON_MATCHING: retail keeps the result 1 in r6 and returns through one shared exit, reads the action kind with ldrsh and dispatches phases 0/1/2/5 through a different branch tree; this build returns from each path and uses ldrh. */
#include "common.h"
#include "battle/btlUnit.h"

/* The record of a combatant's chosen action: its id is at 0x62. */
struct TurnRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ s16 id;
};

/* The actor performing the action: its pending flags (0xFA) and the kind of action (0x14C). */
struct TurnActor {
    /* 0x000 */ u8 unk000[0xFA];
    /* 0x0FA */ u16 flags;
    /* 0x0FC */ u8 unk0FC[0x50];
    /* 0x14C */ u16 kind;
    /* 0x14E */ s16 skill;
};

struct TurnState {
    /* 0x0000 */ u8 unk0000[0x84];
    /* 0x0084 */ s32 actorIndex;
    /* 0x0088 */ u8 unk0088[0x4418];
    /* 0x44A0 */ u32 stateFlags;
};

struct TurnOwner {
    /* 0x00 */ TurnState *state;
};

/* The work area of one performed action. */
struct TurnWork {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u16 unk004;
    /* 0x006 */ u16 duration;
    /* 0x008 */ s32 phase;
    /* 0x00C */ u8 unk00C[0x18];
    /* 0x024 */ TurnRecord *record;
    /* 0x028 */ TurnActor *actor;
    /* 0x02C */ u8 unk02C[0x540];
    /* 0x56C */ u32 elapsed;
    /* 0x570 */ u8 unk570[0x24];
    /* 0x594 */ u32 argument;
};

/* One script slot of the battle (0xF1C bytes each); the byte at 9 is its command. */
struct TurnScriptSlot {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ u8 command;
    /* 0x0A */ u8 unk0A[0xF12];
};

struct DataTable40Record {
    /* 0x00 */ u8 unk00[0x45];
    /* 0x45 */ u8 flag;
};

extern "C" {
extern TurnScriptSlot *g_btlScriptUnit;
extern void *DAT_00435d18;

s32 objSlotStateIsActiveRange(TurnOwner *owner, s32 slot);
void slotResetIdle(TurnOwner *owner, s32 slot, u32 value);
s32 FUN_003dc504(void);
void FUN_003da010(void *resources);
void FUN_003dcaac(void *resources, u32 value);
DataTable40Record *dataTable40FindById(s32 id);
void btlTargetSetFlag10(TurnOwner *owner, s32 targetId, s32 primary);

/* Drives the action's animation phases; returns 1 when the action is over and its script command is set. */
u32 FUN_003cab9c(TurnOwner *owner, TurnWork *work)
{
    switch (work->phase) {
    case 0:
        if (objSlotStateIsActiveRange(owner, 0) != 0) {
            slotResetIdle(owner, 0, 0x1e);
        }
        work->phase = 1;
        /* fall through */
    case 1:
        FUN_003dc504();
        if (DAT_00435d18 == 0) {
            return 0;
        }
        FUN_003da010(DAT_00435d18);
        work->phase = 2;
        return 0;
    case 2:
        if (FUN_003db7b4(DAT_00435d18) == 0) {
            return 0;
        }
        work->phase = 5;
        if ((owner->state->stateFlags & 4) == 0) {
            FUN_003dcaac(DAT_00435d18, work->argument);
        }
        break;
    case 5:
        break;
    default:
        return 0;
    }
    if (work->elapsed != 0 && work->elapsed > work->duration) {
        return 0;
    }
    u8 command;
    switch (work->actor->kind) {
    case 1:
    case 2:
    case 3:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
        if (work->actor->kind == 2) {
            DataTable40Record *skill = dataTable40FindById(work->actor->skill);
            if (skill != 0 && skill->flag != 0) {
                if ((owner->state->stateFlags & 0x40) != 0) {
                    work->flags |= 0x80;
                } else if ((owner->state->stateFlags & 0x100) != 0) {
                    work->flags |= 0x1000;
                }
            }
        }
        command = 0xe;
        break;
    case 4:
        command = 0x14;
        break;
    case 5:
    case 6:
    case 0xf:
    case 0x10:
    case 0x11:
        command = 0x13;
        break;
    case 7:
        command = 0xf;
        break;
    case 0xd:
        command = 8;
        break;
    case 0xe:
        command = 0x16;
        break;
    default:
        if ((work->actor->flags & 0x10) != 0) {
            btlTargetSetFlag10(owner, work->record->id, 0);
        }
        return 1;
    }
    g_btlScriptUnit[owner->state->actorIndex].command = command;
    if ((work->actor->flags & 0x10) != 0) {
        btlTargetSetFlag10(owner, work->record->id, 0);
    }
    return 1;
}
}
