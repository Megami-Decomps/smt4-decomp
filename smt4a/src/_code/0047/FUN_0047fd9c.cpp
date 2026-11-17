#include "gamedata/ConsumableRecordA.h"
#include "gamedata/Table04Record.h"
#include "gamedata/DevilRecordA.h"

extern "C" {

typedef struct UnitRecord {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 skills[8];
    /* 0x44 */ u8 unk44[0x1e];
    /* 0x62 */ u16 equipment;
} UnitRecord;


/* For ids 1-60 and 0x79f-0x7de: true when the unit's equipment has flag 4 or one of its skills
 * has the entry's category. */
s32 FUN_0047fd9c(s32 id, UnitRecord *unit)
{
    if ((u32)(id - 1) <= 59 || (u32)(id - 0x79f) <= 63) {
        DevilRecordA *equipment = devilGetRecord(unit->equipment);
        if (equipment != NULL && (equipment->extraFlags & 4)) {
            return 1;
        }
        ConsumableRecordA *entry = dataTable8FindRecord(id);
        if (entry->useFlags & 0xf0) {
            for (s32 i = 0; i < 8; i++) {
                if (unit->skills[i] != 0) {
                    Table04ExtraRecord *skill = dataTable41FindById(unit->skills[i]);
                    if (skill != NULL && skill->modifier.category == entry->useFlags >> 4) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
