/* NON_MATCHING: retail shares one clamp store (placed after the player branch) between both
 * branches and passes the slot through "subs r0"; this build keeps a clamp per branch. */
#include "shard/Shard0034.h"
#include "shard/Shard004B.h"
#include "gamedata/Table04Record.h"

/* A skill record of data table 4. */
struct SkillCostRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 cost;
};

extern "C" {
s32 FUN_0028809c(s32 slot, u32 target, SkillCostRecord *skill, s32 preview, s32 mode);
PlayerData *gameGetPlayerData(void);
PlayerData *gameGetSlotRecord(s32 slot);
s32 FUN_003df57c(u32 cost, s32 mode);
s32 FUN_004bcbb4(const ItemRankRecord *unit, u32 cost);

/* Uses skill `id` from party slot `slot` (the player when negative) on `target`; when it takes
 * effect outside preview, pays its cost from the user's MP. Returns 1 for an unknown skill. */
s32 FUN_00333694(s32 slot, u32 target, u32 id, s32 preview)
{
    SkillCostRecord *skill = (SkillCostRecord *)dataTable04FindById(id);
    if (skill == NULL) {
        return 1;
    }
    s32 result = FUN_0028809c(slot, target, skill, preview, 0);
    if (result == 0 && preview == 0) {
        if (slot < 0) {
            PlayerData *player = gameGetPlayerData();
            player->unk2C -= FUN_003df57c(skill->cost, 1);
            if (player->unk2C < 0) {
                player->unk2C = 0;
            }
        } else {
            PlayerData *unit = gameGetSlotRecord(slot);
            unit->unk2C -= FUN_004bcbb4((const ItemRankRecord *)unit, skill->cost);
            if (unit->unk2C < 0) {
                unit->unk2C = 0;
            }
        }
    }
    return result;
}
}
