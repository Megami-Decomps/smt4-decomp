/* NON_MATCHING: retail hoists the constants 1, 30 and 27 into r9/r7/sl, reads g_btlScriptUnit as the word after g_btlAction (r8 + 4), and shares the FUN_0022a5d8 call between the 0x80 and entry-flag branches while keeping the 0x100 branch's own call; this build gives each branch the same shape. */
#include "common.h"

/* The combatant record of an action: its id is at 0x62. */
struct ActionRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ s16 id;
};

/* The combatant entry of an action; the first flag word says what state it is in. */
struct ActionEntry {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u32 flagsHigh;
};

struct ActionActor {
    /* 0x00 */ u8 unk00[0xFA];
    /* 0xFA */ u16 pending;
};

/* What a combatant is about to do. */
struct ActionWork {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0x1C];
    /* 0x20 */ ActionEntry *entry;
    /* 0x24 */ ActionRecord *record;
    /* 0x28 */ ActionActor *actor;
    /* 0x2C */ s32 member;
};

struct BattleState {
    /* 0x0000 */ u8 unk0000[0x84];
    /* 0x0084 */ s32 actorIndex;
    /* 0x0088 */ u8 unk0088[0x4418];
    /* 0x44A0 */ u32 stateFlags;
    /* 0x44A4 */ u8 unk44A4[0x524];
    /* 0x49C8 */ s32 retreating;
};

struct BattleTurn {
    /* 0x00 */ BattleState *state;
};

/* One script slot of the battle (0xF1C bytes each); the byte at 9 is its command. */
struct ScriptSlot {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ u8 command;
    /* 0x0A */ u8 unk0A[0xF12];
};

extern "C" {
extern ScriptSlot *g_btlScriptUnit; /* directly after g_btlAction */
extern void *g_btlUiBlock;

void FUN_002569ac(BattleTurn *turn, s32 bank);
void btlEntryValuesCopy(BattleTurn *turn, ActionWork *work);
void FUN_00227b14(void *ui, u16 member, s32 mode);
void FUN_0022a5d8(s32 effect, ActionEntry *entry, s32 mode);
void FUN_0026beb4(s32 chance, ActionWork *work, s32 a, ActionRecord *record, s32 b);
void FUN_002296f4(BattleTurn *turn, ActionWork *work, s32 id, s32 a, s32 b, s32 c);
s32 battleGetEntryHalfword(s32 id, s32 index);
void FUN_002550d8(s32 id, s32 stat, s32 delta, s32 preview);
s32 randRange(s32 range);
void FUN_003c0484(ActionEntry *entry, s32 conditions, s32 context);

/* Starts the action of a combatant whose turn came: picks the response its pending flags call for. */
u32 FUN_003d2ea0(BattleTurn *turn, ActionWork *work)
{
    FUN_002569ac(turn, turn->state->actorIndex);
    btlEntryValuesCopy(turn, work);
    u16 pending = work->actor->pending;
    s32 chance = 0;
    if ((work->flags & 0x1080) == 0) {
        chance = 0x32;
    }
    s32 effect = 0;
    if (pending & 0x80) {
        if ((work->entry->flags & 0x30) == 0) {
            FUN_00227b14(g_btlUiBlock, (u16)work->member, 0);
        }
        effect = 0xb;
    } else if (pending & 0x100) {
        if ((work->entry->flags & 0x30) == 0) {
            FUN_00227b14(g_btlUiBlock, (u16)work->member, 0);
        }
        effect = 0xc;
    } else if (work->entry->flags & 0x60000) {
        if ((work->entry->flags & 0x30) == 0) {
            FUN_00227b14(g_btlUiBlock, (u16)work->member, 0);
        }
        s32 value = battleGetEntryHalfword(work->record->id, 0x15);
        if (work->entry->flags & 0x20000) {
            effect = 0xd;
        } else {
            effect = value == 2 ? 0xe : 0xf;
        }
    }
    if (effect != 0) {
        FUN_0022a5d8(effect, work->entry, 1);
        FUN_0026beb4(chance, work, 0, work->record, 1);
        FUN_002296f4(turn, work, work->record->id, 0, 0x1e, 0x1e);
        g_btlScriptUnit[turn->state->actorIndex].command = 0x1b;
    } else {
        if ((pending & 0x40) == 0) {
            return 1;
        }
        s32 roll = randRange(99);
        if ((turn->state->stateFlags & 0x40000) == 0 && roll < 0x32) {
            FUN_003c0484(work->entry, 0, 1);
            if (work->entry->flags & 0x30) {
                g_btlScriptUnit[turn->state->actorIndex].command = turn->state->retreating == 0 ? 2 : 3;
            } else {
                g_btlScriptUnit[turn->state->actorIndex].command = 1;
            }
        } else {
            g_btlScriptUnit[turn->state->actorIndex].command = 0x11;
        }
    }
    if (work->entry->flags & 0x60000) {
        FUN_002550d8(work->record->id, 0x15, -1, 0);
        if (battleGetEntryHalfword(work->record->id, 0x15) == 0) {
            ActionEntry *entry = work->entry;
            u32 flags = entry->flags;
            entry->flags = flags & 0xfffdffff;
            work->entry->flagsHigh = entry->flagsHigh;
            work->entry->flags = flags & 0xfff9ffff;
        }
    }
    return 1;
}
}
