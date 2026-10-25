#include "common.h"
#include "gamedata/Table04Record.h"

namespace {
/* Record of the equipment table (dataTable08Sub2). */
struct EquipRecord {
    u8 unk00[0x2b];
    u8 element;     /* 0x2b */
    u8 unk2c;
    u8 special;     /* 0x2d: counts as element 12 */
};

/* Record of the skill table (dataTable04). */
struct SkillRecord {
    u8 unk00[0x23];
    u8 kind;        /* 0x23: 2 = the entries that count while the check is restricted */
    u8 unk24[0xb];
    u8 element;     /* 0x2f */
    u8 unk30;
    u8 special;     /* 0x31: counts as element 12 */
};

/* Record of the demon table (FUN_00184310). */
struct DemonRecord {
    u8 unk00[0xe];
    u8 element;     /* 0x0e */
    u8 unk0f[2];
    u8 special;     /* 0x11: counts as element 12 */
};

/* Record of dataTable00: its eight skill ids. */
struct SkillListRecord {
    u8 unk00[0x50];
    u16 skills[8];  /* 0x50 */
};

/* An equipment slot: up to two equipment ids and eight skill ids. */
struct EquipSlot {
    u16 first;      /* 0x00 */
    u8 unk02[2];
    u16 second;     /* 0x04 */
    u8 unk06[0x2e];
    u16 skills[8];  /* 0x34 */
};

/* The demon's own skill ids (the same layout as an equipment slot from 0x34 on). */
struct DemonSkillSet {
    u8 unk00[0x34];
    u16 skills[8];  /* 0x34 */
};

struct BattleUnit {
    u8 unk000[0x166];
    u16 demonId;            /* 0x166 */
    u8 unk168[0x290];
    EquipSlot *equipment;   /* 0x3f8 */
    DemonSkillSet *demonSkills; /* 0x3fc */
    u8 unk400[4];
    void *skillList;        /* 0x404 */
};

const s32 ELEMENT_ANY = 12;
}

extern "C" {
DemonRecord *FUN_00184310(u32 id);
EquipRecord *dataTable08Sub2GetRecord(u32 id);
SkillListRecord *dataTable00FindById(u32 id);

/* Whether the unit carries equipment or a skill of element `wanted` (12 also takes the "special" flag);
   with `restricted` set only skill-table entries of kind 2 count and the equipment itself is skipped. */
u32 battleUnitHasElementEntry(BattleUnit *unit, u32 wanted, s32 restricted)
{
    if (unit == NULL) {
        return 0;
    }
    if (unit->equipment != NULL) {
        if (restricted == 0) {
            EquipRecord *record = dataTable08Sub2GetRecord(unit->equipment->first);
            if (record != NULL &&
                (record->element == wanted || (wanted == ELEMENT_ANY && record->special != 0))) {
                return 1;
            }
            record = dataTable08Sub2GetRecord(unit->equipment->second);
            if (record != NULL &&
                (record->element == wanted || (wanted == ELEMENT_ANY && record->special != 0))) {
                return 1;
            }
        }
        for (s32 i = 0; i < 8; i++) {
            SkillRecord *skill = (SkillRecord *)dataTable04FindById(unit->equipment->skills[i]);
            if (skill != NULL) {
                if (restricted == 0) {
                    if (skill->element == wanted) {
                        return 1;
                    }
                    if (wanted == ELEMENT_ANY && skill->special != 0) {
                        return 1;
                    }
                } else if (skill->kind == 2) {
                    if (skill->element == wanted) {
                        return 1;
                    }
                    if (wanted == ELEMENT_ANY && skill->special != 0) {
                        return 1;
                    }
                }
            }
        }
    }
    if (unit->demonSkills != NULL) {
        if (restricted == 0) {
            DemonRecord *demon = FUN_00184310(unit->demonId);
            if (demon->element == wanted || (wanted == ELEMENT_ANY && demon->special != 0)) {
                return 1;
            }
        }
        for (s32 i = 0; i < 8; i++) {
            u16 id = unit->demonSkills->skills[i];
            SkillRecord *skill = (SkillRecord *)dataTable04FindById(id);
            if (skill != NULL) {
                if (restricted == 0) {
                    if (skill->element == wanted) {
                        return 1;
                    }
                    if (wanted == ELEMENT_ANY && skill->special != 0) {
                        return 1;
                    }
                } else if (skill->kind == 2) {
                    if (skill->element == wanted) {
                        return 1;
                    }
                    if (wanted == ELEMENT_ANY && skill->special != 0) {
                        return 1;
                    }
                }
            }
        }
    }
    if (unit->skillList != NULL) {
        SkillListRecord *list = dataTable00FindById(unit->demonId);
        for (s32 i = 0; i < 8; i++) {
            SkillRecord *skill = (SkillRecord *)dataTable04FindById(list->skills[i]);
            if (skill != NULL) {
                if (restricted == 0) {
                    if (skill->element == wanted) {
                        return 1;
                    }
                    if (wanted == ELEMENT_ANY && skill->special != 0) {
                        return 1;
                    }
                } else if (skill->kind == 2) {
                    if (skill->element == wanted) {
                        return 1;
                    }
                    if (wanted == ELEMENT_ANY && skill->special != 0) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
