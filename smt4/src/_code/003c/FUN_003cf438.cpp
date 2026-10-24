/* NON_MATCHING: armcc merges the flags44a0 bit tests (retail tests 4, 64 and 256 separately) and swaps the turn/flags registers. */
#include "common.h"

struct BtlTurnState {
    /* 0x0000 */ u8 unk0000[0xe0];
    /* 0x00e0 */ u32 flagsE0;
    /* 0x00e4 */ u8 unk00e4[0x43bc];
    /* 0x44a0 */ u32 flags44a0;
};

struct BtlTurnCommand {
    /* 0x000 */ u8 unk000[0x14c];
    /* 0x14c */ s16 kind; /* 2 and 3: a skill id; 8: an item id */
    /* 0x14e */ s16 id;
};

struct BtlTurnActor {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ BtlTurnCommand *command;
    /* 0x02c */ u8 unk02c[0x568];
    /* 0x594 */ s32 motion;
};

struct BtlItemRecord {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 skillId;
};

struct BtlSkillRecord {
    /* 0x00 */ u8 unk00[0x57];
    /* 0x57 */ u8 motion;
};

extern "C" {
BtlItemRecord *dataTable08Sub1GetRecord(s32 id);
BtlSkillRecord *dataTable40FindById(s32 id);

/* Picks the actor's motion: 1 when forced, 22 under flag 0x4000000, else the commanded skill's motion when above 1. */
void FUN_003cf438(BtlTurnState **state, BtlTurnActor *actor, s32 forced)
{
    BtlTurnState *turn;
    BtlTurnCommand *command;
    BtlSkillRecord *skill;
    s32 skillId;

    if (forced) {
        actor->motion = 1;
        return;
    }
    actor->motion = 0;
    turn = *state;
    if ((turn->flags44a0 & 4) || (turn->flags44a0 & 0x40)) {
        return;
    }
    if ((turn->flags44a0 & 0x100) || (turn->flagsE0 & 0x8000000)) {
        return;
    }
    if (turn->flagsE0 & 0x4000000) {
        actor->motion = 22;
        return;
    }
    command = actor->command;
    if (command->kind == 2 || command->kind == 3) {
        skillId = command->id;
    } else if (command->kind == 8) {
        skillId = dataTable08Sub1GetRecord(command->id)->skillId;
        if (skillId == 0) {
            return;
        }
    } else {
        return;
    }
    if (skillId > 0) {
        skill = dataTable40FindById(skillId);
        if (skill != NULL && skill->motion != 1 && skill->motion != 0) {
            actor->motion = skill->motion;
        }
    }
}

} /* extern "C" */
