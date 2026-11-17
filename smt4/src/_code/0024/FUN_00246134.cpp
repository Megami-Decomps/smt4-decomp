/* NON_MATCHING: readable rewrite compiles (173 vs ~166 rows); retail keeps the entry pointers in callee-saved registers instead of reloading, and orders the flag tests differently */
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"

struct PassiveSkill {
    u8 unk00[0x38];
    u32 bits;               // 0x38
};

extern "C" {

void selectionCopySupportedValue(u32 skill, s32* out);
void btlEntryGetPassiveSkillIds(BtlEntry* entry, u16* passiveIds);
PassiveSkill* passiveSkillLookupRecord(u16 id);

static __inline BtlEntry* findEntry(u32 unitId)
{
    return btlMainFindEntryByListedId(btlGetMainState(), unitId);
}

// Builds the hit-result flag word of skill `skillId` against unit `unitId`:
// weakness/resist/null/drain/repel bits plus the damage percent in the low bits.
u32 FUN_00246134(u32 unitId, u32 skillId, s32 mode, s32 target)
{
    u32 flags = 0;
    switch (mode) {
    case 3:
    case 4:
    case 7:
    case 8:
    case 9:
        return 100;
    }
    BtlEntry* entry = findEntry(unitId);
    if (skillId == 6 || skillId == 7) {
        BtlEntry* e = findEntry(unitId);
        s16 value = 0;
        if (e != NULL) value = e->turn.counter;
        if (e != NULL && value != 0 && value >= 0) flags = 0x10000;
        e = findEntry(unitId);
        value = 0;
        if (e != NULL) value = e->turn.unk098;
        if (e != NULL && value != 0 && value >= 0) flags |= 0x20000;
    }
    if (skillId != 0x11) {
        if (mode != 0) {
            if (mode == 1 && target != 0x11) {
                BtlEntry* e = findEntry(unitId);
                s16 value = 0;
                if (e != NULL) value = e->turn.unk098;
                if (!((e == NULL || value == 0) || value < 0)) flags |= 0x20000;
            }
        } else {
            BtlEntry* e = findEntry(unitId);
            if (e != NULL && e->turn.value96 >= 1) flags |= 0x20000;
        }
    }

    s32 supported = 0;
    selectionCopySupportedValue(skillId, &supported);
    u32 packed = entry->data.values[supported];
    u32 percent = packed & 0xffff03ff;
    u32 rank = packed >> 10;
    if (rank == 1) flags |= 0x10000;
    if (rank == 4) flags |= 0x40000;
    if (rank == 3) flags |= 0x20000;
    if (rank == 2) flags |= 0x80000000;
    if (rank == 5) flags |= 0x80000;

    BtlEntry* current = findEntry(unitId);
    u32 passiveFlags = 0;
    u16 passiveIds[10];
    for (s32 i = 0; i < 10; i++) passiveIds[i] = 0;
    btlEntryGetPassiveSkillIds(current, passiveIds);
    for (s32 i = 0; i < 9; i++) {
        u32 id = passiveIds[i];
        if (id == 0) continue;
        PassiveSkill* passive = passiveSkillLookupRecord(id);
        if (passive != NULL && skillId == ((passive->bits & 0xffff) >> 0xb)) {
            u32 effect = (passive->bits & 0xfffff) >> 0x10;
            if (effect == 1) passiveFlags |= 0x80000;
            else if (effect == 2) passiveFlags |= 0x10000;
            else if (effect == 3) passiveFlags |= 0x20000;
            else if (effect == 4) passiveFlags |= 0x40000;
        }
    }
    passiveFlags |= flags;
    s32 forced = entry->forcedSlot;
    if (forced > 0 && supported != 0x11) {
        if (forced - 1 == supported) passiveFlags |= 0x400000;
        else passiveFlags |= 0x220000;
    }
    if ((passiveFlags & 0x80000) != 0) percent = (percent * 0x32) / 100;
    return passiveFlags | percent;
}

} /* extern "C" */
