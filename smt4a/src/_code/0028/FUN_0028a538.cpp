/* NON_MATCHING: readable rewrite from retail disassembly compiles; retail keeps the working counters in stack slots/callee-saved registers and spills r0-r2; key bitfield writes differ */
#include "common.h"

// Fusion key handed to the skill list builders (same layout as the fusion result descriptor).
struct FusionKey {
    u32 firstParent : 15;
    u32 secondParent : 15;
    u32 marker : 2;
    u32 keep : 2;
    u32 product : 15;
    u32 cost : 15;
};

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
struct DevilInfo {
    u16 id;                 // 0x00
    u8 unk02[0x3e];
    u16 ownSkills[8];       // 0x40
};

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

DevilInfo* FUN_00184310(u32 product);
SkillMetadata* findSkillMetadataById(u32 skill);
s32 arrayContainsU16(const u16* array, s32 count, u32 value);
void FUN_00203b40(void* listBox, s32 count, s32 a, s32 b, s32 c, s32 d);
void FUN_0034c340(u16* skills, s32 count, FusionKey* key, s32 mode);
void unitRecordBuild(u32 id, u8* record);
s32 getUnlockedSlotCount(u8* record);

// Adds one parent's skills to the primary (flag 0x20) or secondary list, skipping duplicates and the product's own.
static inline void collectSkills(UniteLists* lists, DevilInfo* info, PartyUnit* parent, s32& primaryCount, s32& secondaryCount)
{
    for (s32 i = 0; i < 8; i++) {
        u32 skill = parent->skills[i];
        if (skill == 0) continue;
        SkillMetadata* meta = findSkillMetadataById(skill);
        if ((meta->flags & 0x20) != 0) {
            if (arrayContainsU16(lists->primary, 0x18, skill) == 0 && arrayContainsU16(info->ownSkills, 8, skill) == 0) {
                lists->primary[primaryCount++] = skill;
            }
        }
        if ((meta->flags & 0x20) == 0) {
            if (arrayContainsU16(lists->secondary, 0x18, skill) == 0 && arrayContainsU16(info->ownSkills, 8, skill) == 0) {
                lists->secondary[secondaryCount++] = skill;
            }
        }
    }
}

// Collects the parents' skills worth inheriting into the primary/secondary lists
// (skipping duplicates and the product's own skills) and primes the list box.
void FUN_0028a538(u32 unused, PartyUnit* first, PartyUnit* second, u32 product)
{
    DevilInfo* info = FUN_00184310(product);
    UniteLists* lists = g_unite;
    for (s32 i = 0; i < 0x18; i++) {
        lists->primary[i] = 0;
        lists->secondary[i] = 0;
    }

    s32 primaryCount = 0;
    s32 secondaryCount = 0;
    collectSkills(lists, info, first, primaryCount, secondaryCount);
    collectSkills(lists, info, second, primaryCount, secondaryCount);

    FusionKey key;
    key.firstParent = first->id;
    key.secondParent = second->id;
    key.marker = 1;
    key.keep = 1;
    key.product = product;
    FUN_00203b40(lists->listBox, primaryCount, 8, 1, 1, 1);
    FUN_0034c340(lists->primary, primaryCount, &key, 0);
    FUN_0034c340(lists->secondary, secondaryCount, &key, 0);
    u8 record[300];
    unitRecordBuild(info->id, record);
    getUnlockedSlotCount(record);
}

} /* extern "C" */
