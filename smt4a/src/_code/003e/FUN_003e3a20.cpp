/* NON_MATCHING: the offer copy uses core instead of VFP registers; preview and inherited-skill loop addresses are formed at different times. */
#include "shard/Shard0032.h"
#include "code/Code0033.h"
#include "camp/Unite/UniteWork.h"
#include "gamedata/nkm/NkmGrowEvent.h"
#include "shop/NpcShop.h"

/* unit-local: preserves the demon's original skills while constructing the preview. */
struct PreviewSkillList { u16 skills[8]; };

extern "C" {
void unitRecordBuild(u16 id, UnitRecord *record);
void FUN_004cd4b8(UnitRecord *record, s16 levelDelta);
void unitRecomputeDerivedStats(UnitRecord *record);
s32 FUN_004cc8d8(u16 id, u16 level);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void statusDisplayBindUnitRecord(const UnitRecord *record, u32 option, u32 mode, u32 flags);
void objBInitBlock19D0(const UnitRecord *record, u32 option, u32 flags);
void statusPanelSetOpen(u32 open);
void statusReplaceSkills(const u16 *skills, u8 count);
void statusMarkNewSkills(const u16 *skills, u8 count);

/* Builds the shop demon preview, showing the original skills and the offered replacements. */
void FUN_003e3a20(NpcShopWork *work, const NpcShopOffer *target)
{
    UnitRecord original;
    unitRecordBuild(target->demonId, &original);
    PreviewSkillList previous = *(const PreviewSkillList *)original.skills;
    FUN_004cd4b8(&original, (s16)(target->level - original.level));
    for (s32 index = 0; index < 5; ++index)
        original.tableStats[index + 2] = target->stats[index];
    unitRecomputeDerivedStats(&original);
    original.experience = FUN_004cc8d8(original.id, original.level) - 1;

    UnitRecord preview;
    __aeabi_memcpy4(&preview, &original, sizeof(preview));
    u16 inherited[8] = {0};
    const NpcShopOffer offer = work->offers[work->selected];
    s32 unlocked = getUnlockedSlotCount(0);
    s32 count = 0;
    for (s32 index = 0; index < 8; ++index)
        partyRecordSetEquippedItemClampRank(&preview, 0, index);
    for (s32 index = 0; index < 8; ++index) {
        u16 skill = offer.skills[index];
        if (skill) {
            inherited[count] = skill;
            if (unlocked > count)
                partyRecordSetEquippedItemClampRank(&preview, inherited[count], count);
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
} /* extern "C" */
