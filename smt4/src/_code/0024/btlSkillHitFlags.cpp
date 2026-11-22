/* NON_MATCHING: the mode-1 target test (retail tests target < 0 before != 0x11) and the guard branches are laid
 * out differently, and the parameters get other callee-saved registers; the rank and passive tests follow retail. */
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "common.h"
#include "shard/PassiveSkill.h"

extern "C" {

void selectionCopySupportedValue(u32 skill, s32* out);
void btlEntryGetPassiveSkillIds(BtlEntry* entry, u16* passiveIds);

static __inline BtlEntry* findEntry(u32 unitId)
{
    return btlMainFindEntryByListedId(btlGetMainState(), unitId);
}

// Builds the hit-result flag word of skill `skillId` against unit `unitId`:
// weakness/resist/null/drain/repel bits plus the damage percent in the low bits.
u32 btlSkillHitFlags(u32 unitId, u32 skillId, s32 mode, s32 target)
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
    if ((packed >> 10) == 1) flags |= 0x10000;
    if ((packed >> 10) == 4) flags |= 0x40000;
    if ((packed >> 10) == 3) flags |= 0x20000;
    if ((packed >> 10) == 2) flags |= 0x80000000;
    if ((packed >> 10) == 5) flags |= 0x80000;

    BtlEntry* current = findEntry(unitId);
    u32 passiveFlags = 0;
    u16 passiveIds[10];
    for (s32 i = 0; i < 10; i++) passiveIds[i] = 0;
    btlEntryGetPassiveSkillIds(current, passiveIds);
    for (s32 i = 0; i < 9; i++) {
        u32 id = passiveIds[i];
        if (id == 0) continue;
        const PassiveSkillRecord* passive = passiveSkillLookupRecord(id);
        if (passive != NULL && skillId == passive->affinityBits.element) {
            u32 effect = passive->affinityBits.resistance;
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
