/* NON_MATCHING: the loop index, skill id and known-list pointer rotate through r3/r1/r2 where retail uses r1/r2/r3. */
#include "common.h"

extern "C" {

typedef struct EquipmentSkill {
    /* 0x00 */ u16 level;
    /* 0x02 */ u16 skill;
} EquipmentSkill;

typedef struct EquipmentData {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ EquipmentSkill skills[8];
} EquipmentData;

EquipmentData *FUN_00184310(u16 id);

/* Collects into `out` the skills of equipment `id` unlocked above `level` that are not already in
 * `known` (8 entries); returns how many were added, none when `skip` is set. */
s32 FUN_004bcaa8(u16 id, u32 level, const u16 *known, u16 *out, s32 skip)
{
    if (skip != 0) {
        return 0;
    }
    s32 count = 0;
    EquipmentData *equipment = FUN_00184310(id);
    for (s32 i = 0; i < 8; i++) {
        u16 skill = equipment->skills[i].skill;
        if (skill != 0 && equipment->skills[i].level > level) {
            s32 j;
            for (j = 0; j < 8; j++) {
                if (known[j] == skill) {
                    break;
                }
            }
            if (j >= 8) {
                out[count++] = skill;
            }
        }
    }
    return count;
}

} /* extern "C" */
