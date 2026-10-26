#include "gamedata/UnitStats.h"
#include "gamedata/DevilRecord.h"
#include "gamedata/SkillFlags.h"

extern "C" {
s32 saveIsRecordValueBounded(u16 id);
s32 flagBitIsSet(u32 flag);
s32 randNextInRange(u32 maximum);

// Test repeated activation rolls for a unit carrying a skill with the trigger flag.
u32 FUN_0033b838(const StatBlock* unit, s32 attempts, s32 forced)
{
    if (attempts > 0) {
        DevilRecord* record = reinterpret_cast<DevilRecord*>(devilGetRecord(unit->id));
        s32 chance = saveIsRecordValueBounded(unit->id) / 500 + record->chance.unk00;
        if (flagBitIsSet(5)) {
            chance += 30;
        }
        for (s32 attempt = 0; attempt < attempts; ++attempt) {
            s32 roll = randNextInRange(99);
            if (forced) {
                roll = -1;
            }
            if (roll < chance) {
                const u16* skills = unit->resist;
                for (s32 slot = 0; slot < 8; ++slot) {
                    SkillFlagsRecord* skill = dataTable06Sub1GetRecord(skills[slot]);
                    if (skill->flags & 0x40) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
}
