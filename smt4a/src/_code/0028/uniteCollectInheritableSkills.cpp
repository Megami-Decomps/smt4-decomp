/* NON_MATCHING: 242 lines (208 by shape). The parameters (the product first, as uniteBuildResultUnitRecord passes them), the packed key and the skill reads are retail's. Retail clears the two id lists with twelve word stores each (this build calls __aeabi_memclr), keeps the primary count in a stack slot and the secondary count in fp, and so allocates the scan differently. */
#include "common.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/PackedIdentifiers.h"

// Party unit record: only the skill list and id.
struct PartyUnit {
    u8 unk00[0x34];
    u16 skills[8];          // 0x34
    u8 unk44[0x1e];
    u16 id;                 // 0x62
};

// Skill metadata: bit 5 of byte 3 = inheritable by the primary list.
struct SkillMetadata {
    u8 unk00[3];
    u8 flags;               // 0x03
};

// Demon info record: only the id and its own skill list.
// Inherited-skill working lists of the fusion screen.
struct UniteLists {
    u8 unk0000[0x8b70];
    u16 primary[0x18];      // 0x8b70
    u8 unk8ba0[0x8c30 - 0x8ba0];
    u16 secondary[0x18];    // 0x8c30
    u8 unk8c60[0x8e14 - 0x8c60];
    u8 listBox[1];          // 0x8e14
};

extern "C" {

extern UniteLists* g_unite;

SkillMetadata* findSkillMetadataById(u32 skill);
s32 arrayContainsU16(const u16* array, s32 count, u32 value);
void gridNavigationConfigure(void* listBox, s32 count, s32 a, s32 b, s32 c, s32 d);
void FUN_0034c340(u16* skills, s32 count, PackedIdentifiers* key, s32 mode);
void unitRecordBuild(u32 id, u8* record);
s32 getUnlockedSlotCount(u8* record);

// Adds one parent's skills to the primary (flag 0x20) or secondary list, skipping duplicates and the product's own.
static inline void collectSkills(UniteLists* lists, NkmBaseRecordA *info, PartyUnit* parent, s32& primaryCount, s32& secondaryCount)
{
    for (s32 i = 0; i < 8; i++) {
        if (parent->skills[i] == 0) continue;
        SkillMetadata* meta = findSkillMetadataById(parent->skills[i]);
        if ((meta->flags & 0x20) != 0) {
            if (arrayContainsU16(lists->primary, 0x18, parent->skills[i]) == 0 && arrayContainsU16(info->skills.ids, 8, parent->skills[i]) == 0) {
                lists->primary[primaryCount++] = parent->skills[i];
            }
        }
        if ((meta->flags & 0x20) == 0) {
            if (arrayContainsU16(lists->secondary, 0x18, parent->skills[i]) == 0 && arrayContainsU16(info->skills.ids, 8, parent->skills[i]) == 0) {
                lists->secondary[secondaryCount++] = parent->skills[i];
            }
        }
    }
}

// Collects the parents' skills worth inheriting into the primary/secondary lists
// (skipping duplicates and the product's own skills) and primes the list box.
void uniteCollectInheritableSkills(u32 product, PartyUnit* first, PartyUnit* second)
{
    UniteLists* lists = g_unite;
    NkmBaseRecordA *info = nkmBaseGetRecord(product);
    for (s32 i = 0; i < 0x18; i++) {
        lists->primary[i] = 0;
        lists->secondary[i] = 0;
    }

    s32 primaryCount = 0;
    s32 secondaryCount = 0;
    collectSkills(lists, info, first, primaryCount, secondaryCount);
    collectSkills(lists, info, second, primaryCount, secondaryCount);

    PackedIdentifiers key;
    key.firstIdentifier = first->id;
    key.secondIdentifier = second->id;
    key.firstState = 1;
    key.secondState = 1;
    key.resultIdentifier = product;
    gridNavigationConfigure(lists->listBox, primaryCount, 8, 1, 1, 1);
    FUN_0034c340(lists->primary, primaryCount, &key, 0);
    FUN_0034c340(lists->secondary, secondaryCount, &key, 0);
    u8 record[300];
    unitRecordBuild(info->id, record);
    getUnlockedSlotCount(record);
}

} /* extern "C" */
