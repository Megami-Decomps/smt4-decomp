#include "ui/PartyPanelStateA.h"
/* NON_MATCHING: 119 lines off: both fusion calls take (unite, parent, parent, &packed) and retail tests each result
 * in its own arm; retail still saves one register fewer (48-byte frame, zero in r8 rather than fp), reads the
 * packed result with one ldm and copies the result record into r6 for the merge call. */
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

SlotRecord *slotRecordFindById(u32 id);
SlotTable *gameGetSlotTable(void);
SlotRecord *gameGetSlotRecord(s32 slot);
s32 gameSlotTableFindFree(void);
s32 arrayContainsU16(u16 *array, s32 count, u16 value);
SlotRecord *unitRecordBuild(u32 info);
s32 FUN_0034c340(s16 skills[16], s32 count, u64 *packed, s32 flag);
SkillMetadata *findSkillMetadataById(u32 id);
s32 unitRecomputeDerivedStats(void *record);
s32 recordMergeByteMasks(UniteWorkA *unite, SlotRecord *a, SlotRecord *b, s32 flag, void *record);
s32 wordAt1B0Clear(UniteWorkA *unite);
s32 FUN_004db650(UniteWorkA *unite, SlotRecord *a, SlotRecord *b, u64 *packed);
s32 FUN_004dc3a8(UniteWorkA *unite, SlotRecord *a, SlotRecord *b, u64 *packed);
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
    PartyPanelStateA *panel = g_partyPanel;
    SlotRecord *parent[FUSION_PARENTS];

    gameGetSlotTable();
    parent[0] = 0;
    parent[1] = 0;
    for (s32 i = 0; i < FUSION_PARENTS; i++) {
        parent[i] = slotRecordFindById(panel->fusionParentIds[i] & 0xFFFF);
    }

    if (parent[0] == 0 || parent[1] == 0)
        return 0;
    wordAt1B0Clear(panel->unite);
    if (panel->panelState == 0x12) {
        if (FUN_004db650(panel->unite, parent[0], parent[1], &panel->fusionResultPacked) == 0)
            return 0;
    } else {
        if (FUN_004dc3a8(panel->unite, parent[0], parent[1], &panel->fusionResultPacked) == 0)
            return 0;
    }
    void *record = panel->fusionResult;
    unitRecordBuild(((u32)(panel->fusionResultPacked >> 17)) >> 17);
    recordMergeByteMasks(panel->unite, parent[0], parent[1], 0, record);

    s16 skills[16] = { 0 };
    s32 count = 0;
    u64 packed = panel->fusionResultPacked;
    count = addPassableSkills(skills, count, partySlotRecordById((u32)packed & 0x7FFF));
    packed = panel->fusionResultPacked;
    count = addPassableSkills(skills, count, partySlotRecordById(((u32)packed & 0x3FFFFFFF) >> 15));
    if (panel->panelState == 10) {
        FUN_0034c340(skills, count, &panel->fusionResultPacked, 0);
        s32 slots = getUnlockedSlotCount(record);
        for (s32 i = 0; i < UNIT_SKILL_SLOTS; i++) {
            if (skills[i] != 0 && arrayContainsU16(panel->fusionResultSkills, slots, skills[i]) == 0) {
                for (s32 j = 0; j < slots; j++) {
                    if (panel->fusionResultSkills[j] == 0) {
                        panel->fusionResultSkills[j] = skills[i];
                        break;
                    }
                }
            }
        }
    }
    unitRecomputeDerivedStats(record);
    return 1;
}

} /* extern "C" */
