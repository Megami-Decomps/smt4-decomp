/* NON_MATCHING: 98 lines (28 by shape), same size and frame. What differs: retail materialises `skill->unk86 == 6` as a 0/1 value before testing it and predicates the acting unit's two NULL tests (ldrne/cmpne), which shifts the next 60 rows by one; the single-action mask test loads the state flags with ldm and the mask's words separately; the target-capacity maximum compares counts[1] with counts[0] (cmp r1, r0; movgt) where the build compares them the other way round. */
#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"
#include "battle/btlScript.h"
#include "battle/BattleHelpers_Smt4a.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/BattleUnitSkills.h"
#include "gamedata/GameDataAccess_Shard004B.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"

extern "C" {

extern BattleCandidateMasks DAT_00573c90;

u8 FUN_003ff22c(BtlCombatantEntryA *target, s32 change7, s32 change8, s32 change10, s32 change11, s32 requireNonZero);
void FUN_003ff524(u16 *flags, s32 kind);
s32 FUN_003ff888(void);
u32 btlCanSelectReservePartyMember(const BtlCombatantEntryA *entry);
int FUN_004c6b8c(BtlCombatantEntryA *entry, u32 id);
u8 halfTable152TopIs2(BtlUnitDataA *data, s32 index);

/* Sets `*mask` to the ailment bits a cure of `kind` removes. */
static __inline void cureAilmentMask(u16 *mask, s32 kind)
{
    *mask = 0;
    FUN_003ff524(mask, kind);
}

/* Checks whether the skill would do anything to the unit: 0 when every effect it asks for applies, 3 when one
   does not. `requested` holds a bit per effect the skill has, `effective` the ones that would work. */
u32 FUN_003ff998(BtlCombatantEntryA *unit, SkillDataRecordA *skill)
{
    u32 result = 0;
    u32 requested = 0;
    u32 effective = 0;

    if ((skill->usability.healing & 0xFFF) != 0) {
        requested = 1;
    }
    if ((skill->flags & 0x7F) != 0) {
        requested |= 4;
    }
    if (skill->effectList.effects[1] != 0 || skill->effectList.effects[0] != 0 || skill->effectList.effects[2] != 0 ||
        skill->effectList.effects[3] != 0 || (skill->usability.flags & 1) != 0) {
        requested |= 0x100;
    }
    if (skill->usability.flags & 2) {
        requested |= 0x200;
    }
    if (skill->flags & 0x100000) {
        requested |= 0x400;
    }
    if (skill->flags & 0x200000) {
        requested |= 0x800;
    }
    if (skill->usability.flags & 8) {
        requested |= 0x1000;
    }
    if (skill->usability.flags & 0x10) {
        requested |= 0x2000;
    }
    if (skill->flags & 0x400000) {
        requested |= 0x4000;
    }
    if (skill->flags & 0x800000) {
        requested |= 0x8000;
    }
    if (skill->flags & 0x1000000) {
        requested |= 0x10000;
    }
    if (skill->flags & 0x80) {
        requested |= 0x20000;
    }
    if (skill->flags & 0x100) {
        requested |= 0x40000;
    }
    if (skill->flags & 0x2000000) {
        requested |= 0x80000;
    }
    if (skill->usabilityTail.raisesMaximum != 0) {
        requested |= 0x200000;
    }
    if (skill->usability.healing & 0x1000) {
        requested |= 0x800000;
    }
    if (skill->usability.flags & 4) {
        requested |= 0x2000000;
    } else if (skill->sort.category == 7 || skill->sort.category == 9) {
        requested |= 0x1000000;
    }
    if (skill->usability.target == 4) {
        requested |= 0x4000000;
    }
    if (skill->usabilityTail.summons > 0) {
        requested |= 0x8000000;
    }
    if (skill->itemUse.flags & 0x40) {
        requested |= 0x10000000;
    }
    if (skill->usabilityTail.valueSlot - 1 > 20) {
        requested |= 0x20000000;
    }
    if (skill->usabilityTail.secondCure != 0) {
        requested |= 0x40000000;
    }

    /* Healing, and the ailment cure that goes with it. */
    if ((requested & 1) &&
        ((requested & 0x1000000) || (!(unit->data.statusFlags & 2) && unit->data.hp != unit->data.maxHp))) {
        effective |= 1;
    }
    if ((requested & 2) && unit->data.mp != unit->data.maxMp) {
        effective |= 2;
    }
    if (requested & 4) {
        if (requested & 0x1000000) {
            effective |= 4;
        } else {
            s32 kind = skill->flags & 0x7F;
            s16 id = skill->identity.id;
            bool applies = true;
            if (skill->unk86 == 6) {
                /* Without a target the acting unit decides: it may be immune. */
                BtlUnitA *actor = btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit));
                if (actor != NULL && actor->entry != NULL) {
                    if (!(actor->entry->data.statusFlags & 0x10) || (id != 0 && FUN_004c6b8c(actor->entry, id) != 0)) {
                        applies = false;
                    }
                }
            }
            if (applies) {
                u16 cured;
                cureAilmentMask(&cured, kind);
                if (cured & unit->data.statusFlags) {
                    effective |= 4;
                }
            }
            if (effective & 4) {
                if (requested & 1) {
                    effective |= 1;
                }
            } else if (effective & 1) {
                /* The healing works, so a cure that does not revive counts too; kind 27 (the full recovery) always does. */
                bool fullRecoveryCounts = true;
                u16 cured;
                cureAilmentMask(&cured, skill->flags & 0x7F);
                if (!(cured & 2)) {
                    effective |= 4;
                    fullRecoveryCounts = (effective & 1) != 0;
                }
                if (fullRecoveryCounts && (skill->flags & 0x7F) == 27) {
                    effective |= 4;
                }
            }
        }
    }

    /* Property changes: most need the property unset, two need it set. */
    if ((requested & 0x200) && btlFindEntryValue(unit->ids[0], 13) <= 0) {
        effective |= 0x200;
    }
    if ((requested & 0x400) && btlFindEntryValue(unit->ids[0], 20) <= 0) {
        effective |= 0x400;
    }
    if ((requested & 0x800) && btlFindEntryValue(unit->ids[0], 21) <= 0) {
        effective |= 0x800;
    }
    if ((requested & 0x1000) && btlFindEntryValue(unit->ids[0], 20) > 0) {
        effective |= 0x1000;
    }
    if ((requested & 0x2000) && btlFindEntryValue(unit->ids[0], 21) > 0) {
        effective |= 0x2000;
    }
    if ((requested & 0x4000) && btlFindEntryValue(unit->ids[0], 22) <= 0) {
        effective |= 0x4000;
    }
    if ((requested & 0x8000) && btlFindEntryValue(unit->ids[0], 14) <= 0) {
        effective |= 0x8000;
    }
    if ((requested & 0x10000) && btlFindEntryValue(unit->ids[0], 15) <= 0) {
        effective |= 0x10000;
    }
    if ((requested & 0x20000) && btlFindEntryValue(unit->ids[0], 16) <= 0) {
        effective |= 0x20000;
    }
    if ((requested & 0x40000) && btlFindEntryValue(unit->ids[0], 17) <= 0) {
        effective |= 0x40000;
    }
    if ((requested & 0x80000) && btlFindEntryValue(unit->ids[0], 19) <= 0) {
        effective |= 0x80000;
    }

    /* A higher maximum HP: only while the unit is below its record's. */
    if (requested & 0x200000) {
        if (DAT_00573c90.maximumSource.direct & unit->flags) {
            if (unit->data.maxHp <= unit->data.record->maximum.maxHp) {
                effective |= 0x200000;
            }
        } else if (!(unit->flags & DAT_00573c90.maximumSource.scaled) ||
                   unit->data.maxHp <= recordGetScaledMaximum(reinterpret_cast<const SlotRecordA *>(unit->data.secondaryRecord))) {
            effective |= 0x200000;
        }
    }
    if ((requested & 0x400000) && btlFindEntryValue(unit->ids[0], 37) <= 0) {
        effective |= 0x400000;
    }
    if (requested & 0x800000) {
        BtlMainStateA *battle = btlGetMainState();
        if ((DAT_00573c90.singleAction & battle->stateFlags64.bits) || !(battle->encounter.statusFlags & 0x40000)) {
            effective |= 0x800000;
        }
    }
    if ((requested & 0x1000000) && btlCanSelectReservePartyMember(unit) != 0) {
        effective |= 0x1000000;
    }
    if ((requested & 0x2000000) && FUN_003ff888() != 0) {
        effective |= 0x2000000;
    }
    if ((requested & 0x4000000) && (unit->data.statusFlags == 0 || unit->data.statusFlags == 4)) {
        effective |= 0x4000000;
    }
    if (requested & 0x8000000) {
        BtlMainStateA *battle = btlGetMainState();
        s32 count = battle->targetCapacity.counts[0] < battle->targetCapacity.counts[1] ? battle->targetCapacity.counts[1] : battle->targetCapacity.counts[0];
        if (count < 8) {
            effective |= 0x8000000;
        }
    }
    if ((requested & 0x10000000) && unit != NULL && (unit->data.statusFlags & 0x10)) {
        effective |= 0x10000000;
    }
    if ((requested & 0x20000000) && btlFindEntryValue(unit->selectionIndex, 23) <= 0 &&
        (halfTable152TopIs2(&unit->data, 0) || halfTable152TopIs2(&unit->data, 1) || halfTable152TopIs2(&unit->data, 2) ||
         halfTable152TopIs2(&unit->data, 3) || halfTable152TopIs2(&unit->data, 4) || halfTable152TopIs2(&unit->data, 5) ||
         halfTable152TopIs2(&unit->data, 6) || halfTable152TopIs2(&unit->data, 7))) {
        effective |= 0x20000000;
    }
    if (requested & 0x40000000) {
        u16 cured;
        cureAilmentMask(&cured, skill->usabilityTail.secondCure);
        if (cured & unit->data.statusFlags) {
            effective |= 0x40000000;
        }
    }

    /* Stat changes count with the healing they come with. */
    if (requested & 0x100) {
        if (!FUN_003ff22c(unit, skill->effectList.effects[1], skill->effectList.effects[0], skill->effectList.effects[2],
                          skill->effectList.effects[3], skill->usability.flags & 1)) {
            effective |= 0x100;
        }
        if ((effective & 0x100) && ((requested & ~effective) & 1)) {
            effective |= 1;
        }
        if (!(effective & 0x100) && (((requested & effective) & 1) || skill->usability.target != 0)) {
            effective |= 0x100;
        }
    }
    if ((requested & 0x80) && (s16)btlFindEntryValue(unit->ids[0], 11) != (s16)btlGetPropertyMaximum(11) &&
        (s16)btlFindEntryValue(unit->ids[0], 10) != (s16)btlGetPropertyMaximum(10) &&
        (s16)btlFindEntryValue(unit->ids[0], 7) != (s16)btlGetPropertyMaximum(7)) {
        effective |= 0x80;
    }

    if (requested != effective) {
        result = 3;
    }
    return result;
}

} /* extern "C" */
