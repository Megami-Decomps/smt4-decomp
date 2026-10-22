#include "common.h"

extern "C" {

typedef struct UnitRecord {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 skills[8];
    /* 0x44 */ u8 unk44[0x1e];
    /* 0x62 */ u16 equipment;
} UnitRecord;

typedef struct EquipmentData {
    /* 0x00 */ u8 unk00[0xb3];
    /* 0xb3 */ u8 flags;
} EquipmentData;

typedef struct EntryData {
    /* 0x00 */ u8 unk00[0x42];
    /* 0x42 */ u8 attributes; /* high nibble: matching skill category, 0 = none */
} EntryData;

typedef struct SkillData {
    /* 0x00 */ u8 unk00[0x33];
    /* 0x33 */ u8 category;
} SkillData;

EquipmentData *FUN_00184310(u16 id);
EntryData *dataTable8FindRecord(s32 id);
SkillData *FUN_0034a290(u16 id);

/* For ids 1-60 and 0x79f-0x7de: true when the unit's equipment has flag 4 or one of its skills
 * has the entry's category. */
s32 FUN_0047fd9c(s32 id, UnitRecord *unit)
{
    if ((u32)(id - 1) <= 59 || (u32)(id - 0x79f) <= 63) {
        EquipmentData *equipment = FUN_00184310(unit->equipment);
        if (equipment != NULL && (equipment->flags & 4)) {
            return 1;
        }
        EntryData *entry = dataTable8FindRecord(id);
        if (entry->attributes & 0xf0) {
            for (s32 i = 0; i < 8; i++) {
                if (unit->skills[i] != 0) {
                    SkillData *skill = FUN_0034a290(unit->skills[i]);
                    if (skill != NULL && skill->category == entry->attributes >> 4) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
