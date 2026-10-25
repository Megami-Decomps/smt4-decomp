/* NON_MATCHING: register allocation only: retail saves eight callee-saved registers (fp, plus ip as padding) and hoists the loop limits 4 and 54 into r6; here seven registers and immediate limits. Control flow, switch tables and bitfields match. */
#include "battle/BattleUnitSlot.h"
#include "battle/BtlMainAccess.h"

/* The part of a skill record the target check reads. */
struct SkillTargetRecord {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 category;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ u32 unk28Low : 5;
    /* 0x28 */ u32 scope : 4;     /* who the skill can reach: allies, enemies, the script unit, party slots */
    /* 0x28 */ u32 mode : 2;      /* 2 and 3: skills checked against their targets */
    /* 0x28 */ u32 unk28High : 21;
    /* 0x2C */ u8 unk2C[0xC];
    /* 0x38 */ u32 flags;
};

struct SlotTableCount {
    /* 0x0000 */ u8 unk0000[0x910B];
    /* 0x910B */ u8 partyCount;
};

extern "C" {
extern u32 g_btlScriptUnit;
SkillTargetRecord *dataTable40FindById(u32 skillId);
SlotTableCount *gameGetSlotTable(void);
s32 FUN_0023d488(BtlEntry *unit, SkillTargetRecord *skill, s32 mode);
s32 FUN_0023d9b8(s32 slot, s32 flag, SkillTargetRecord *skill);

/* Checks a skill against everything it could target: 0 = unusable, 1 = no skill, 2 = not checked, 3 = usable. */
u32 FUN_0028d320(u32 skillId)
{
    if (skillId == 0) {
        return 1;
    }
    SkillTargetRecord *skill = dataTable40FindById(skillId);
    if (skill == NULL) {
        return 1;
    }
    if (skill->mode != 2 && skill->mode != 3) {
        return 2;
    }
    switch (skill->category) {
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
    case 10:
        return 0;
    }
    BtlMainState *state = btlGetMainState();
    if ((state->editorControl.flags & 0x2000000) != 0) {
        return 0;
    }
    u8 front = 0;
    u8 back = 0;
    u8 script = 0;
    u8 slots = 0;
    switch (skill->scope) {
    case 0:
    case 1:
        back = 1;
        break;
    case 2:
    case 3:
        front = 1;
        break;
    case 4:
        script = 1;
        break;
    case 5:
    case 6:
        front = 1;
        back = 1;
        break;
    case 7:
    case 8:
        front = 1;
        slots = 1;
        break;
    }
    s32 i = 0;
    if ((skill->flags & 0x4000) != 0) {
        script = 1;
    }
    if (front) {
        for (; i < 4; i++) {
            BtlEntry *unit = &state->entries[i];
            if (((unit->flags & 2) != 0 || ((unit->flags & 1) != 0 && (unit->flags & 0x40) == 0)) &&
                FUN_0023d488(unit, skill, 0) == 0) {
                return 0;
            }
        }
    }
    if (back) {
        for (i = 4; i < 54; i++) {
            BtlEntry *unit = &state->entries[i];
            if ((unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 && FUN_0023d488(unit, skill, 0) == 0) {
                return 0;
            }
        }
    }
    if (script) {
        BattleActionUnit *scriptUnit = btlUnitGet(reinterpret_cast<BtlMainState *const *>(g_btlScriptUnit));
        if (scriptUnit != NULL && scriptUnit->entry != NULL && FUN_0023d488(scriptUnit->entry, skill, 1) == 0) {
            return 0;
        }
    }
    if (slots) {
        SlotTableCount *table = gameGetSlotTable();
        for (i = -1; i < table->partyCount; i++) {
            if (FUN_0023d9b8(i, 0, skill) == 0) {
                return 0;
            }
        }
    }
    return 3;
}

}
