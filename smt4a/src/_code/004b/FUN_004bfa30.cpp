/* NON_MATCHING: gate-mask base addressing, category dispatch and zero-result epilogues differ. */
#include "battle/btlUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match1_PartySlot.h"
#include "gamedata/Table04Record.h"
#include "gamedata/Table8Record.h"

extern "C" {
extern const u8 DAT_005713f0[];
Table04Record *dataTable04FindById(u32 id);
Table8Record *dataTable8FindRecord(u32 id);
BtlMainStateA *btlGetMainState();
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, u32 subject);
void FUN_003e8bb0(void *snapshot, BtlMainStateA *battle, BtlCombatantEntryA *subject);
s32 FUN_004bd098(u32 source, u32 item);
BtlUnitDataA *FUN_001568f8(BtlMainStateA *battle, s32 index);
PartySlotA *gameGetSlotRecord(s32 index);

u32 FUN_004bfa30(u32 itemId, u32 skillId, u32 subjectId, s32 target)
{
    Table04Record *item = dataTable04FindById(itemId);
    Table8Record *skill = dataTable8FindRecord(skillId);
    if (item == NULL && skill == NULL)
        return 0;
    if (item != NULL && (item->flags & 0x7F) == 0)
        return 0;
    // This view preserves the shared skill record's original halfword alignment.
    struct SkillTargetProperties {
        u8 prefix[0x3A]; u8 target; u8 padding[0x2D]; u32 flags;
    };
    const SkillTargetProperties *properties = reinterpret_cast<const SkillTargetProperties *>(skill);
    if (skill != NULL && (properties->target & 0x7F) == 0 && !(properties->flags & 4))
        return 0;
    BtlMainStateA *battle = btlGetMainState();
    BtlCombatantEntryA *subject = FUN_003f0e20(battle, subjectId);
    struct Snapshot { u32 prefix[10]; u16 kind; u8 restricted; u8 tail[9]; } snapshot;
    FUN_003e8bb0(&snapshot, battle, subject);
    if (snapshot.restricted) {
        if (!(subject->statusFlags & 0x10))
            return 0;
        struct GateMasks { u8 prefix[0x18]; u64 blocked; };
        const GateMasks *gates = reinterpret_cast<const GateMasks *>(DAT_005713f0);
        if ((subject->flags & gates->blocked) && FUN_004bd098(subject->sourceId, itemId) < 0)
            return 0;
    }
    u32 category = 0;
    if (item != NULL) {
        if (item->flags & 0x7F)
            category = item->flags & 0x7F;
    } else if (skill != NULL) {
        if (properties->target & 0x7F)
            category = properties->target & 0x7F;
        else if (properties->flags & 4)
            category = 0x25;
    }
    u32 mask;
    if (category == 0x1C) mask = 0x39C0;
    else if (category < 0x1C) {
        if (category == 0x16) mask = 0x3BE0;
        else if (category == 0x18) mask = 0x3FE2;
        else if (category == 0x1B) mask = 0x3BE2;
        else mask = 1u << category;
    } else if (category == 0x1F) mask = 0x220;
    else if (category == 0x25) mask = 0x3BEA;
    else mask = 1u << category;
    u16 categories;
    if (target < 109)
        categories = FUN_001568f8(battle, target)->unk110;
    else
        categories = gameGetSlotRecord(target - 109)->unk60;
    return (categories & mask) ? mask : 0;
}
}
