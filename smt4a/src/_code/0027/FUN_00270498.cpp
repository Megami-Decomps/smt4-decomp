/* NON_MATCHING: near (206 rows against 208): same flow, calls and bit extraction (resultPacked is read as one 64-bit word); retail keeps the two parent records in a stack pair with sl/r8 register choices where ours uses fp, takes the mode 0x12 call out of line after the common tail, and tests the FUN_004dc3a8 result with an extra cmp */
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef signed char s8;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef int s32;

extern "C" {

#define FUSION_PARENTS 2
#define UNIT_SKILL_SLOTS 8

/* Demon fusion panel (observed fields only). */
struct FusionPanel {
    u8 pad0000[0x9B4];
    u8 mode;                         /* 0x9B4: 10 skill-inherit fusion, 0x12 special fusion */
    u8 pad9B5[0xE7C - 0x9B5];
    u32 parentSlot[FUSION_PARENTS];  /* 0xE7C */
    u8 padE84[0xE90 - 0xE84];
    u64 resultPacked;                /* 0xE90: bits 0-14 first parent id, 15-29 second parent id, 34-48 result unit id */
    u8 resultRecord[0xECC - 0xE98];  /* 0xE98 */
    u16 resultSkills[UNIT_SKILL_SLOTS]; /* 0xECC */
    u8 padEDC[0x107C - 0xEDC];
    u32 fusionContext;               /* 0x107C */
};

struct SlotRecord {
    u8 pad00[0x34];
    u16 skill[UNIT_SKILL_SLOTS];     /* 0x34 */
    u8 pad44[0x62 - 0x44];
    u16 id;                          /* 0x62 */
};

struct SkillMetadata {
    u8 pad00[3];
    u8 flags;                        /* 0x03: 0x20 = can be passed on */
};

struct SlotTable {
    u8 pad0000[0x1C88];
    s8 slot[1];                      /* 0x1C88 */
};

extern FusionPanel *g_partyPanel;    /* 0x57f268 */

SlotRecord *slotRecordFindById(u32 id);
SlotTable *gameGetSlotTable(void);
SlotRecord *gameGetSlotRecord(s32 slot);
s32 gameSlotTableFindFree(void);
s32 arrayContainsU16(u16 *array, s32 count, u16 value);
SlotRecord *unitRecordBuild(u32 info);
s32 FUN_0034c340(s16 skills[16], s32 count, u64 *packed, s32 flag);
SkillMetadata *findSkillMetadataById(u32 id);
s32 FUN_004bcd90(void *record);
s32 FUN_004da6e0(u32 context, SlotRecord *a, SlotRecord *b, s32 flag, void *record);
s32 wordAt1B0Clear(u32 context);
s32 FUN_004db650(u32 context, SlotRecord *a, SlotRecord *b, u64 *packed);
s32 FUN_004dc3a8(void);
s32 getUnlockedSlotCount(void *record);

/* Finds the party record whose id is `id` (first match over the free-slot count), else NULL. */
static SlotRecord *partySlotRecordById(u32 id)
{
    s32 i = 0;
    if (0 < gameSlotTableFindFree()) {
        do {
            SlotRecord *record = gameGetSlotRecord(gameGetSlotTable()->slot[i]);
            if (record->id == id) {
                return record;
            }
            i++;
        } while (i < gameSlotTableFindFree());
    }
    return 0;
}

/* Appends the passable skills of `record` to `skills`; returns the new count. */
static s32 addPassableSkills(s16 *skills, s32 count, SlotRecord *record)
{
    for (s32 i = 0; i < UNIT_SKILL_SLOTS; i++) {
        u32 skill = record->skill[i];
        if (skill != 0) {
            SkillMetadata *meta = findSkillMetadataById(skill);
            if (meta == 0 || (meta->flags & 0x20) != 0) {
                skills[count++] = record->skill[i];
            }
        }
    }
    return count;
}

/* Builds the fusion result of the two chosen parents; returns 1 when a result was produced. */
u32 FUN_00270498(void)
{
    FusionPanel *panel = g_partyPanel;
    SlotRecord *parent[FUSION_PARENTS];

    gameGetSlotTable();
    parent[0] = 0;
    parent[1] = 0;
    for (s32 i = 0; i < FUSION_PARENTS; i++) {
        parent[i] = slotRecordFindById(panel->parentSlot[i] & 0xFFFF);
    }

    if (parent[0] != 0 && parent[1] != 0) {
        s32 result;
        wordAt1B0Clear(panel->fusionContext);
        if (panel->mode != 0x12) {
            result = FUN_004dc3a8();
        } else {
            result = FUN_004db650(panel->fusionContext, parent[0], parent[1], &panel->resultPacked);
        }
        if (result != 0) {
            void *record = panel->resultRecord;
            unitRecordBuild(((u32)(panel->resultPacked >> 17)) >> 17);
            FUN_004da6e0(panel->fusionContext, parent[0], parent[1], 0, record);

            s16 skills[16] = { 0 };
            s32 count = 0;
            u64 packed = panel->resultPacked;
            count = addPassableSkills(skills, count, partySlotRecordById((u32)packed & 0x7FFF));
            packed = panel->resultPacked;
            count = addPassableSkills(skills, count, partySlotRecordById(((u32)packed & 0x3FFFFFFF) >> 15));
            if (panel->mode == 10) {
                FUN_0034c340(skills, count, &panel->resultPacked, 0);
                s32 slots = getUnlockedSlotCount(record);
                for (s32 i = 0; i < UNIT_SKILL_SLOTS; i++) {
                    if (skills[i] != 0 && arrayContainsU16(panel->resultSkills, slots, skills[i]) == 0) {
                        for (s32 j = 0; j < slots; j++) {
                            if (panel->resultSkills[j] == 0) {
                                panel->resultSkills[j] = skills[i];
                                break;
                            }
                        }
                    }
                }
            }
            FUN_004bcd90(record);
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
