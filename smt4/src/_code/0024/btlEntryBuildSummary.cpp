/* NON_MATCHING: retail has one copy of the skill block, which the item case enters with a backward jump (a goto in
 * the original source); the second inlined copy here accounts for most of the 86 differing lines. Retail also
 * keeps the 22 initial stores apart from what follows (the zero register is free again for the action-kind offset,
 * and the data pointer is formed from the incoming r2), as an inlined initialiser would. With the goto, the
 * initial stores in an inline function and `data` declared first the unit is IDENTICAL; neither is written here
 * (a goto, and a helper with one use). */
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BattleEntrySummary.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/ConsumableRecord.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/SkillDataLookup.h"
#include "gamedata/SupportUnitRecord.h"
#include "code/Code002b.h"
#include "AsdSDK/AsdMemCopy.h"

extern "C" {
SupportUnitRecord *supportUnitGetEntry(s32 kind, u32 index);
void btlEntryBuildSummary(BattleEntrySummary *result, BtlMainState *state, const BtlEntry *entry);

/* The attack data of the skill `skillId`; an unknown skill -1 (none) hits once. */
static __inline void summarySetSkill(BattleEntrySummary *summary, s32 skillId)
{
    summary->skillId = skillId;
    const SkillDataRecord *skill = skillDataFindById(skillId);
    if (skill != NULL) {
        summary->targeting = skill->attackProperties.targeting;
        summary->element = skill->attackProperties.element;
        summary->category = skill->sort.category;
        summary->percent = skill->ratios.percent;
        summary->percentage = skill->ratios.percentage;
        summary->minimumHits = skill->attackProperties.minimumHits;
        summary->maximumHits = skill->attackProperties.maximumHits;
        summary->unk06 = skill->attack.unk2E;
        summary->ailment = skill->attack.ailment;
        summary->ailmentRate = skill->attack.ailmentRate;
        summary->ailmentGroup = skill->rankInfo.rankFlags & 0x7F;
        summary->unk0C = skill->attackProperties.unk19;
        summary->unk0E = skill->unk40[0];
        summary->unk10 = skill->unk40[2];
        summary->unk0F = skill->unk40[1];
    } else if (skillId == 0xFFFF) {
        summary->minimumHits = 1;
        summary->maximumHits = 1;
    }
}

/* Describe the action `entry` is about to take: a normal attack with its weapon or its demon's
 * data, a skill, or an item (through the item's skill when it has one). */
void btlEntryBuildSummary(BattleEntrySummary *result, BtlMainState *state, const BtlEntry *entry)
{
    BattleEntrySummary summary;
    summary.unk08 = 100;
    summary.power = 0;
    summary.targeting = 0;
    summary.category = 0;
    summary.unk0C = 0;
    summary.ailment = 0;
    summary.scope = 0;
    summary.element = 0;
    summary.unk06 = 0;
    summary.ailmentRate = 0;
    summary.percent = 0;
    summary.maximumHits = 0;
    summary.ailmentGroup = 0;
    summary.unk14 = 0;
    summary.equipmentId = 0;
    summary.percentage = 0;
    summary.unk0E = 0;
    summary.skillId = 0;
    summary.itemId = 0;
    summary.minimumHits = 0;
    summary.unk10 = 0;
    summary.unk0F = 0;

    const BtlUnitData *data = &entry->data;
    switch (data->actionKind) {
    case 1:
        if (entry->flags & 6) {
            /* The player: the sword, or the gun with its bullet. */
            switch (data->actionArg) {
            case 1: {
                summary.equipmentId = entry->data.equipA->arms.sword;
                const EquipmentRecord *sword = itemTableGetEquipmentRecord(summary.equipmentId);
                summary.element = sword->traits >> 20;
                summary.targeting = sword->target;
                summary.power = sword->traits & 0x3FF;
                summary.minimumHits = sword->hitRange & 0xF;
                summary.maximumHits = sword->hitRange >> 4;
                summary.unk06 = sword->unk5A;
                summary.ailment = sword->element;
                summary.ailmentRate = sword->unk5C;
                summary.unk14 = sword->unkA4[0];
                summary.unk0C = sword->unk6C[0];
                summary.unk0E = sword->unk6C[1];
                summary.unk10 = sword->unk6C[3];
                summary.unk0F = sword->unk6C[2];
                break;
            }
            case 2: {
                summary.equipmentId = entry->data.equipA->arms.gun;
                const EquipmentRecord *gun = itemTableGetEquipmentRecord(summary.equipmentId);
                summary.targeting = gun->target;
                summary.minimumHits = gun->hitRange & 0xF;
                summary.maximumHits = gun->hitRange >> 4;
                summary.unk14 = gun->unkA4[0];
                const EquipmentRecord *bullet = itemTableGetEquipmentRecord(entry->data.equipA->arms.bullet);
                if (bullet != NULL) {
                    summary.element = bullet->traits >> 20;
                    summary.unk06 = bullet->unk5A;
                    summary.ailment = bullet->element;
                    summary.ailmentRate = bullet->unk5C;
                    summary.unk0C = bullet->unk6C[0];
                    summary.unk0E = gun->unk6C[1];
                    summary.unk10 = gun->unk6C[3];
                    summary.unk0F = gun->unk6C[2];
                    summary.power = (gun->traits & 0x3FF) + (bullet->traits & 0x3FF);
                } else {
                    summary.element = gun->traits >> 20;
                    summary.unk06 = gun->unk5A;
                    summary.ailment = gun->element;
                    summary.ailmentRate = gun->unk5C;
                    summary.power = gun->traits & 0x3FF;
                    summary.unk0C = gun->unk6C[0];
                    summary.unk0E = gun->unk6C[1];
                    summary.unk10 = gun->unk6C[3];
                    summary.unk0F = gun->unk6C[2];
                }
                break;
            }
            }
        } else if (entry->flags & 8) {
            const NkmBaseRecord *demon = nkmBaseGetRecord(data->id);
            summary.element = demon->element;
            summary.targeting = demon->attack.targeting;
            summary.power = demon->attackPower;
            summary.minimumHits = demon->attack.minimumHits;
            summary.maximumHits = demon->attack.maximumHits;
            summary.unk06 = demon->unk0B;
            summary.ailment = demon->attackAilment;
            summary.ailmentRate = demon->attackAilmentRate;
            summary.unk14 = demon->unk0F;
        } else if (entry->flags & 0x10) {
            summary.element = entry->data.detail->element;
            summary.targeting = entry->data.detail->flags >> 12;
            summary.power = entry->data.detail->power;
            summary.minimumHits = entry->data.detail->minimumHits;
            summary.maximumHits = entry->data.detail->maximumHits;
            summary.unk06 = entry->data.detail->unk1A;
            summary.ailment = entry->data.detail->ailment;
            summary.ailmentRate = entry->data.detail->ailmentRate;
            summary.unk14 = nkmBaseGetRecord(data->id)->unk0F;
        } else if (entry->flags & 0x20) {
            if (FUN_002b6ad0()) {
                const SupportUnitRecord *support = supportUnitGetEntry(data->slot, data->alternateSlot);
                summary.element = support->attackBits.element;
                summary.targeting = support->attackBits.targeting;
                summary.power = support->attack.power;
                summary.minimumHits = support->attackBits.minimumHits;
                summary.maximumHits = support->attackBits.maximumHits;
                summary.unk06 = support->attack.unk0C;
                summary.ailment = support->attack.ailment;
                summary.ailmentRate = support->attack.ailmentRate;
                summary.unk14 = 0;
            } else {
                const NkmBaseRecord *demon = nkmBaseGetRecord(entry->data.guest->id);
                summary.element = demon->element;
                summary.targeting = demon->attack.targeting;
                summary.power = demon->attackPower;
                summary.minimumHits = demon->attack.minimumHits;
                summary.maximumHits = demon->attack.maximumHits;
                summary.unk06 = demon->unk0B;
                summary.ailment = demon->attackAilment;
                summary.ailmentRate = demon->attackAilmentRate;
                summary.unk14 = demon->unk0F;
            }
        }
        summary.category = 0;
        break;
    case 2:
    case 3:
        summarySetSkill(&summary, data->actionArg);
        break;
    case 8: {
        summary.itemId = data->actionArg;
        const ConsumableRecord *item = itemTableGetItemRecord(summary.itemId);
        if (item->skillId != 0) {
            summarySetSkill(&summary, item->skillId);
        } else {
            summary.targeting = (item->target & 0x80) ? 3 : 2;
            summary.category = 3;
            summary.ailmentGroup = item->target & 0x7F;
            summary.minimumHits = 1;
            summary.maximumHits = 1;
        }
        break;
    }
    case 9:
    case 10:
    case 11:
        summary.skillId = -1;
        summary.minimumHits = 1;
        summary.maximumHits = 1;
        break;
    }

    switch (summary.targeting) {
    case 1:
    case 3:
    case 6:
        summary.scope = 1;
        break;
    case 5:
        summary.scope = 2;
        break;
    }

    if (entry->flags & 6) {
        summary.unk08 = 100;
    } else if (entry->flags & 8) {
        summary.unk08 = nkmBaseGetRecord(data->id)->unk10;
    } else if (entry->flags & 0x10) {
        summary.unk08 = entry->data.detail->unk1E;
    } else if (entry->flags & 0x20) {
        if (FUN_002b6ad0()) {
            summary.unk08 = supportUnitGetEntry(data->slot, data->alternateSlot)->attack.unk10;
        } else {
            summary.unk08 = nkmBaseGetRecord(entry->data.guest->id)->unk10;
        }
    }
    rt_memcpy(result, &summary, sizeof(summary));
}
}
