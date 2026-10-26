/* NON_MATCHING: the target loops and the scope switch are laid out differently from retail (built 236 rows vs 228); the usability checks are the same. */
#include "battle/BtlMainAccess.h"
#include "gamedata/Table04Record.h"
#include "battle/BattleUnit.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

/* The skill record (only the fields read here). */
typedef struct SkillRecord {
    u8 unk00[0x23];
    u8 type;                         /* 0x23 */
    u8 unk24[4];
    u32 bits;                        /* 0x28: scope in bits 5-8, kind in bits 9-10 */
    u8 unk2C[0xD];
    u8 flags39;                      /* 0x39: bit 6 set for skills the unit may use while stunned */
    u8 unk3A[0xB];
    u8 specialCheck;                 /* 0x45 */
} SkillRecord;

typedef struct BtlUnitStatus {
    u8 unk00[0x274];
    u16 status;                      /* 0x274 */
} BtlUnitStatus;

typedef struct BtlUnitSlot {
    u8 unk00[0x20];
    BtlUnitStatus *unit;             /* 0x20 */
} BtlUnitSlot;

/* A battle unit as the skill checks see it: two flag words first. */
typedef struct BtlTarget {
    u32 flagsLo;
    u32 flagsHi;
    u8 unk08[0x400];
} BtlTarget;

extern u32 g_btlScriptUnit;
extern u32 g_maskStatusLo;           /* 0x573c90 */
extern u32 g_maskStatusHi;           /* 0x573c94 */
extern u32 g_maskAilmentLo;          /* 0x573c98 */
extern u32 g_maskAilmentHi;          /* 0x573c9c */
extern u32 g_maskExcludeLo;          /* 0x573ca8 */
extern u32 g_maskExcludeHi;          /* 0x573cac */
extern u32 g_maskBlockedLo;          /* 0x573cb8 */
extern u32 g_maskBlockedHi;          /* 0x573cbc */

s32 FUN_003ff998(void *target, SkillRecord *skill, s32 flag);
s32 FUN_00400564(s32 index, s32 arg, SkillRecord *skill);

/* Tells whether the skill can be used in the current battle state: 1 for no skill, 2 for a
 * kind that is never usable here, 3 when usable, 4 when only the stunned-use case applies and
 * 0 when blocked. */
u32 FUN_004009d0(s32 id, s32 flag)
{
    SkillRecord *skill;

    if (id == 0 || (skill = (SkillRecord *)dataTable04FindById(id)) == NULL) {
        return 1;
    }
    u32 bits = skill->bits;
    u32 kind = (bits & 0x7FF) >> 9;

    if (kind != 2 && kind != 3) {
        return 2;
    }
    BtlMainStateA *state = btlGetMainState();
    BtlUnitSlot *slot = reinterpret_cast<BtlUnitSlot *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    BtlUnitStatus *unit = slot != NULL ? slot->unit : NULL;

    if (slot != NULL && unit != NULL) {
        if (flag == 0 && (unit->status & 0x2000) != 0) {
            if ((state->markerMasks.words[0] & g_maskBlockedLo) == 0 && (g_maskBlockedHi & state->markerMasks.words[1]) == 0) {
                return 4;
            }
            return 0;
        }
        if ((skill->flags39 & 0x40) != 0) {
            if ((state->markerMasks.words[0] & g_maskBlockedLo) != 0 || (state->markerMasks.words[1] & g_maskBlockedHi) != 0) {
                return 0;
            }
            if ((unit->status & 0x10) == 0) {
                return 3;
            }
        }
    }
    switch (skill->type) {
    case 0:
    case 1:
    case 5:
    case 6:
    case 10:
        return 0;
    case 2:
        if (skill->specialCheck == 0) {
            return 0;
        }
    }
    if ((state->markerMasks.words[1] & g_maskBlockedHi) != 0 || (state->markerMasks.words[0] & g_maskBlockedLo) != 0) {
        return 0;
    }
    u8 checkAllies = 0;
    u8 checkEnemies = 0;
    u8 checkSelf = 0;
    u8 checkParty = 0;

    switch ((skill->bits & 0x1FF) >> 5) {
    case 0:
    case 1:
        checkEnemies = 1;
        checkAllies = 0;
        break;
    case 2:
    case 3:
        checkAllies = 1;
        break;
    case 4:
        checkSelf = 1;
        checkAllies = 0;
        break;
    case 5:
    case 6:
        checkEnemies = 1;
        checkAllies = 1;
        break;
    case 7:
    case 8:
        checkParty = 1;
        checkAllies = 1;
    }
    if (checkAllies) {
        for (s32 i = 0; i < 4; i++) {
            BtlTarget *target = &reinterpret_cast<BtlTarget *>(state->entries)[i];
            u32 lo = target->flagsLo;
            u32 hi = target->flagsHi;

            if ((((g_maskAilmentLo & lo) != 0 || (g_maskAilmentHi & hi) != 0) ||
                 (((g_maskStatusLo & lo) != 0 || (g_maskStatusHi & hi) != 0) &&
                  ((lo & g_maskExcludeLo) == 0 && (hi & g_maskExcludeHi) == 0))) &&
                FUN_003ff998(target, skill, 0) == 0) {
                return 0;
            }
        }
    }
    if (checkEnemies) {
        for (s32 i = 4; i < 54; i++) {
            BtlTarget *target = &reinterpret_cast<BtlTarget *>(state->entries)[i];

            if ((((g_maskStatusLo & target->flagsLo) != 0 || (g_maskStatusHi & target->flagsHi) != 0) &&
                 ((target->flagsHi & g_maskExcludeHi) == 0 && (target->flagsLo & g_maskExcludeLo) == 0)) &&
                FUN_003ff998(target, skill, 0) == 0) {
                return 0;
            }
        }
    }
    if (checkSelf) {
        slot = reinterpret_cast<BtlUnitSlot *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
        unit = slot != NULL ? slot->unit : NULL;
        if (slot != NULL && unit != NULL && FUN_003ff998(unit, skill, 1) == 0) {
            return 0;
        }
    }
    if (checkParty) {
        SaveSlotTable *table = gameGetSlotTable();

        for (s32 i = -1; i < (s32)table->count; i++) {
            if (FUN_00400564(i, 0, skill) == 0) {
                return 0;
            }
        }
    }
    return 3;
}

}
