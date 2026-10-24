/* NON_MATCHING: bitfield stores into the result and register allocation of the skill-gathering loops differ from retail. */
#include "common.h"

// Result descriptor of a fusion: the two parent ids, the product and its summed cost.
struct FusionResult {
    u32 firstParent : 15;
    u32 secondParent : 15;
    u32 pad : 2;
    u32 keep : 2;
    u32 product : 15;
    u32 cost : 15;
};

struct PairedKeyRecord {
    u16 second; // 0x00
    u16 first;  // 0x02
    u32 value;  // 0x04
};

// The parts of a demon record read here.
struct FusionDevilRecord {
    u8 unk00[3];
    u8 level;       // 0x03
    u8 unk04[0x16];
    u16 stat1a;     // 0x1a
    u16 stat1c;     // 0x1c
    u16 stat1e;     // 0x1e
    u16 stat20;     // 0x20
    u16 stat22;     // 0x22
    u8 unk24[0x18];
    u16 skills[8];  // 0x3c
};

struct SkillRecordView {
    u8 unk00[3];
    u8 flags;       // 0x03
};

// Demon being assembled by the fusion preview.
struct FusionPreviewUnit {
    u8 unk00[0x146];
    u16 skills[0x18];   // 0x146
    s32 skillCount;     // 0x178
    u8 unk17c;
    u8 hasCost;         // 0x17d
};

extern "C" {

PairedKeyRecord* dataTable1fFindPairedKey(u16 first, u16 second);
FusionDevilRecord* devilGetRecord(u16 id);
SkillRecordView* dataTable06Sub1GetRecord(u16 id);
s32 devilIsAvailable(FusionPreviewUnit* unit, u16 id);
void FUN_002b7bca(void* base, s32 count, s32 size, void* compare);
s32 FUN_003c8db4(FusionPreviewUnit* unit, u32 first, u32 second, u16 product);
void FUN_003c9754(FusionPreviewUnit* unit, u32 first, u32 second, u32 product);
extern u8 LAB_002c6f08;
// Builds the fusion result of two demons: product, inherited skills and cost.
FusionPreviewUnit* FUN_002624c4(FusionPreviewUnit* unit, u16 first, u16 second, FusionResult* result)
{
    FusionPreviewUnit* ret = NULL;
    PairedKeyRecord* pair;
    if (first < second) {
        pair = dataTable1fFindPairedKey(first, second);
    } else {
        pair = dataTable1fFindPairedKey(second, first);
    }
    if (pair == NULL) return ret;
    if ((pair->value & 0xffff) == 0) return ret;
    if (!devilIsAvailable(unit, pair->value & 0xffff)) return ret;
    if (!FUN_003c8db4(unit, first, second, pair->value & 0xffff)) return ret;

    result->firstParent = first;
    result->secondParent = second;
    result->product = pair->value;

    FusionDevilRecord* record = devilGetRecord(pair->value & 0xffff);
    for (s32 i = 0; i < 8; i++) {
        if (record->skills[i] != 0) {
            unit->skills[unit->skillCount] = record->skills[i];
            unit->skillCount++;
        }
    }
    if (unit->skillCount < 0x18) unit->skills[unit->skillCount] = 0;
    for (s32 i = 0; i < 0x18; i++) {
        u16 id = unit->skills[i];
        if (id != 0 && (dataTable06Sub1GetRecord(id)->flags & 0x20) == 0) unit->skills[i] = 0;
    }
    FUN_002b7bca(unit->skills, unit->skillCount, 2, &LAB_002c6f08);
    s32 oldCount = unit->skillCount;
    unit->skillCount = 0;
    for (s32 i = 0; i < oldCount; i++) {
        if (unit->skills[i] == 0) break;
        unit->skillCount++;
    }

    if (unit->hasCost != 0) {
        s32 cost = record->level * 0x14 + record->stat1a + record->stat1c + record->stat1e +
                   record->stat20 + record->stat22;
        for (s32 i = 0; i < 0x18; i++) {
            u16 id = unit->skills[i];
            if (id == 0) break;
            cost += (dataTable06Sub1GetRecord(id)->flags & 0x1f) * 5;
        }
        result->cost = cost;
    }
    FUN_003c9754(unit, first, second, result->product);
    ret = unit;
    return ret;
}

} /* extern "C" */
