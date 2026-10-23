/* NON_MATCHING: snapshot default-clear stores are absent; saved registers and optional-subject branch layout differ. */
#include "battle/BattleCommandTargets.h"
#include "shard/Shard0032.h"
#include "gamedata/Table04Record.h"

extern "C" {
UnitRecord *gameGetPlayerData();
UnitRecord *gameGetSlotRecord(s32 slot);
UnitRecord *btlMainGetUnk14();
Table04Record *dataTable04FindById(u32 skill);
s32 idIsAbove400(u32 skill);
u32 FUN_0033896c();

// Collect valid regular skills for four command subjects and determine the available special skill.
void FUN_0023f788(BattleCommandTargets *command)
{
    struct SkillList { u16 ids[8]; };
    struct SkillLists { SkillList entries[4]; };
    // These fields lie beyond the shared command prefix, so keep a function-local view.
    struct SkillSelectionView {
        u8 prefix[0x3C44];
        SkillLists skills;
        u8 padding3C84[0x194];
        u32 specialSkill;
        u8 padding3E1C[0x3F4];
        s16 subjects[4];
    };
    typedef char SkillSelectionOffsetsCheck[offsetof(SkillSelectionView, skills) == 0x3C44 &&
        offsetof(SkillSelectionView, specialSkill) == 0x3E18 &&
        offsetof(SkillSelectionView, subjects) == 0x4210 ? 1 : -1];
    SkillSelectionView *selection = reinterpret_cast<SkillSelectionView *>(command);
    selection->skills = SkillLists();
    for (s32 subject = 0; subject < 4; ++subject) {
        s16 id = selection->subjects[subject];
        if (id == -4)
            continue;
        UnitRecord *unit;
        if (id == -1) {
            unit = gameGetPlayerData();
        } else {
            unit = id == -2 ? btlMainGetUnk14() : gameGetSlotRecord(id);
            if (unit == NULL)
                continue;
        }
        SkillList skills = *reinterpret_cast<const SkillList *>(unit->skillList.skills);
        s32 written = 0;
        for (s32 index = 0; index < 8; ++index) {
            u16 skill = skills.ids[index];
            if (dataTable04FindById(skill) != NULL && !idIsAbove400(skill))
                selection->skills.entries[subject].ids[written++] = skill;
        }
    }
    u32 special = FUN_0033896c();
    if (!dataTable04FindById(special)->specialAvailability.enabled)
        special = 0;
    selection->specialSkill = special;
}
}
