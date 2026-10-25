/* NON_MATCHING: Saved user/preview registers and the shared MP-clamp branch layout differ from retail. */
#include "gamedata/Table04Record.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "shard/W7_W7Match2_PartyDamage.h"

extern "C" {
s32 FUN_00258de0(s32 user, s32 target, Table04Record *skill, s32 preview, s32 mode);
Table04Record *dataTable40FindById(u32 skill);
s32 FUN_0029a924(u32 skill);
s32 FUN_0029a9d4(u32 skill, s32 mode);
BtlEquip *gameGetUnitRecord(s32 index);
PartyDamageSlotsIV *gameGetSlotTable(void);
BtlEquip *gameGetPlayerData(void);

/* Applies a field skill to the player and stock, charging MP only when a target accepts it. */
s32 FUN_0026c464(s32 user, u32 skillId, s32 preview)
{
    bool applied = false;
    Table04Record *skill = dataTable40FindById(skillId);
    if (skill != NULL) {
        if (FUN_00258de0(user, -1, skill, preview, 0) == 0) {
            applied = true;
        }
        PartyDamageSlotsIV *slots = gameGetSlotTable();
        for (s32 index = 0; index < 24; ++index) {
            s32 target = slots->stock[index];
            if (target >= 0 && FUN_00258de0(user, target, skill, preview, 0) == 0) {
                applied = true;
            }
        }
        if (applied) {
            if (preview == 0) {
                if (user < 0) {
                    BtlEquip *unit = gameGetPlayerData();
                    unit->mp -= FUN_0029a9d4(skill->identity.id, 1);
                    if (unit->mp < 0)
                        unit->mp = 0;
                } else {
                    BtlEquip *unit = gameGetUnitRecord(user);
                    unit->mp -= FUN_0029a924(skill->identity.id);
                    if (unit->mp < 0)
                        unit->mp = 0;
                }
            }
            return 0;
        }
    }
    return 1;
}
}
