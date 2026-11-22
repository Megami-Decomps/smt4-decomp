/* NON_MATCHING: same control flow as retail; retail keeps the target-loop bounds in a register (cmp r6, r4: 4, and 4 + 50), spills the party flag to the stack and pairs the 64-bit mask tests' words differently, so the allocation differs throughout. */
#include "battle/BtlMainAccess.h"
#include "gamedata/SkillDataRecord.h"
#include "battle/BtlGlobals.h"
#include "gamedata/SaveSlotTable.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

typedef struct BtlUnitStatus {
    u8 unk00[0x274];
    u16 status;                      /* 0x274 */
} BtlUnitStatus;

typedef struct BtlUnitSlot {
    u8 unk00[0x20];
    BtlUnitStatus *unit;             /* 0x20 */
} BtlUnitSlot;

/* A battle unit as the skill checks see it: its 64-bit state flags first. */
typedef struct BtlTarget {
    u64 flags;
    u8 unk08[0x400];
} BtlTarget;

extern u32 g_btlScriptUnit;
extern BattleCandidateMasks DAT_00573c90;

s32 FUN_003ff998(void *target, SkillDataRecordA *skill, s32 flag);
s32 FUN_00400564(s32 index, s32 arg, SkillDataRecordA *skill);

/* Tells whether the skill can be used in the current battle state: 1 for no skill, 2 for a
 * kind that is never usable here, 3 when usable, 4 when only the stunned-use case applies and
 * 0 when blocked. */
u32 FUN_004009d0(s32 id, s32 flag)
{
    if (id == 0) {
        return 1;
    }
    SkillDataRecordA *skill = skillDataFindById(id);
    if (skill == NULL) {
        return 1;
    }
    if (skill->effectProperties.mode != 2 && skill->effectProperties.mode != 3) {
        return 2;
    }
    BtlMainStateA *state = btlGetMainState();
    BtlUnitSlot *slot = reinterpret_cast<BtlUnitSlot *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    if (slot != NULL && slot->unit != NULL) {
        if (flag == 0 && (slot->unit->status & 0x2000) != 0) {
            if ((state->markerMasks.bits & DAT_00573c90.excluded) == 0) {
                return 4;
            }
            return 0;
        }
        if ((skill->itemUse.flags & 0x40) != 0) {
            if ((state->markerMasks.bits & DAT_00573c90.excluded) != 0) {
                return 0;
            }
            if ((slot->unit->status & 0x10) == 0) {
                return 3;
            }
        }
    }
    switch (skill->sort.category) {
    case 0:
    case 1:
    case 5:
    case 6:
    case 10:
        return 0;
    case 2:
        if (skill->usabilityTail.secondCure == 0) {
            return 0;
        }
        break;
    }
    if ((state->markerMasks.bits & DAT_00573c90.excluded) != 0) {
        return 0;
    }
    bool checkAllies = false;
    bool checkEnemies = false;
    bool checkSelf = false;
    bool checkParty = false;
    switch (skill->effectProperties.targeting) {
    case 0:
    case 1:
        checkEnemies = true;
        break;
    case 2:
    case 3:
        checkAllies = true;
        break;
    case 4:
        checkSelf = true;
        break;
    case 5:
    case 6:
        checkAllies = true;
        checkEnemies = true;
        break;
    case 7:
    case 8:
        checkAllies = true;
        checkParty = true;
        break;
    }
    if (checkAllies) {
        for (s32 i = 0; i < 4; i++) {
            BtlTarget *target = &reinterpret_cast<BtlTarget *>(state->entries)[i];
            if ((target->flags & DAT_00573c90.maximumSource.direct) != 0 ||
                ((target->flags & DAT_00573c90.required) != 0 && (target->flags & DAT_00573c90.unavailable) == 0)) {
                if (FUN_003ff998(target, skill, 0) == 0) {
                    return 0;
                }
            }
        }
    }
    if (checkEnemies) {
        for (s32 i = 4; i < 54; i++) {
            BtlTarget *target = &reinterpret_cast<BtlTarget *>(state->entries)[i];
            if ((target->flags & DAT_00573c90.required) != 0 && (target->flags & DAT_00573c90.unavailable) == 0) {
                if (FUN_003ff998(target, skill, 0) == 0) {
                    return 0;
                }
            }
        }
    }
    if (checkSelf) {
        slot = reinterpret_cast<BtlUnitSlot *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
        if (slot != NULL && slot->unit != NULL && FUN_003ff998(slot->unit, skill, 1) == 0) {
            return 0;
        }
    }
    if (checkParty) {
        SaveSlotTableA *table = gameGetSlotTable();
        for (s32 i = -1; i < (s32)table->count; i++) {
            if (FUN_00400564(i, 0, skill) == 0) {
                return 0;
            }
        }
    }
    return 3;
}

}
