/* NON_MATCHING: stack aggregate placement, choice-record integer/VFP copying and saved pointer registers differ. */
#include "shard/Shard0032.h"
#include <stddef.h>
#include "util/FUN_0033449c.h"

struct InheritanceChoiceRecord {
    u32 unk00[2];
    u16 skills[8];
    u32 unk18[3];
};
struct InheritancePreviewWork {
    u8 unk00[0xA0];
    s32 selected;
    s32 skillCount;
    s32 unlockedCount;
    const InheritanceChoiceRecord *choices() const { return (const InheritanceChoiceRecord *)((const u8 *)this + 0x20); }
};
struct InheritanceTargetStats {
    u16 unk00;
    u16 id;
    u8 unk04[0x14];
    u16 level;
    u16 stats[5];
};
struct InheritanceSkillList { u16 skills[8]; };
typedef char InheritancePreviewLayoutCheck[
    offsetof(InheritanceChoiceRecord, skills) == 8 && sizeof(InheritanceChoiceRecord) == 0x24 &&
    offsetof(InheritanceTargetStats, level) == 0x18 && offsetof(InheritanceTargetStats, stats) == 0x1A &&
    offsetof(InheritancePreviewWork, selected) == 0xA0 && offsetof(InheritancePreviewWork, skillCount) == 0xA4 ? 1 : -1];

extern "C" {
void unitRecordBuild(u16 id, UnitRecord *record);
void FUN_004cd4b8(UnitRecord *record, s16 levelDelta);
void FUN_004bcd90(UnitRecord *record);
s32 FUN_004cc8d8(u16 id, u16 level);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
s32 getUnlockedSlotCount(u32 mode);
void FUN_004bd6b0(UnitRecord *record, u16 skill, s32 slot);
void statusDisplayBindUnitRecord(const UnitRecord *record, u32 option, u32 mode, u32 flags);
void objBInitBlock19D0(const UnitRecord *record, u32 option, u32 flags);
void statusPanelSetOpen(u32 open);
void statusReplaceSkills(const u16 *skills, u8 count);
void statusMarkNewSkills(const u16 *skills, u8 count);

// Build a leveled/stat-adjusted target record and compare its original skills with the compacted inheritance choice.
void FUN_003e3a20(InheritancePreviewWork *work, const InheritanceTargetStats *target)
{
    UnitRecord original;
    unitRecordBuild(target->id, &original);
    InheritanceSkillList previous = *(const InheritanceSkillList *)original.skillList.skills;
    FUN_004cd4b8(&original, (s16)(target->level - original.unk64));
    for (s32 index = 0; index < 5; ++index)
        original.stats[index + 2] = target->stats[index];
    FUN_004bcd90(&original);
    original.unk30 = FUN_004cc8d8(original.id, original.unk64) - 1;
    UnitRecord preview;
    __aeabi_memcpy4(&preview, &original, sizeof(preview));
    u16 inherited[8] = {0};
    InheritanceChoiceRecord choice = work->choices()[work->selected];
    s32 unlocked = getUnlockedSlotCount(0);
    u32 count = 0;
    for (s32 index = 0; index < 8; ++index)
        FUN_004bd6b0(&preview, 0, index);
    for (s32 index = 0; index < 8; ++index) {
        u16 skill = choice.skills[index];
        if (skill) {
            inherited[count] = skill;
            if (count < unlocked)
                FUN_004bd6b0(&preview, skill, count);
            ++count;
        }
    }
    work->skillCount = count;
    work->unlockedCount = unlocked;
    FUN_0033449c(1);
    statusDisplayBindUnitRecord(&original, 0, 0, 0);
    objBInitBlock19D0(&preview, 1, 0);
    statusPanelSetOpen(1);
    statusReplaceSkills(previous.skills, 8);
    statusMarkNewSkills(inherited, 8);
}
}
