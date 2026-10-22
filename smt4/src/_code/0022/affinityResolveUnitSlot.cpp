#include "common.h"

namespace {
/* A demon's elemental response: the resistance id and its affinity state. */
struct AffinitySlot {
    u16 id : 10;
    u16 state : 6;
};

struct DevilAffinityRecord {
    /* 0x00 */ u8 unk00[0x6c];
    /* 0x6c */ AffinitySlot affinities[1];
};

struct AffinityUnit {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 passiveSkills[8];
    /* 0x44 */ u8 unk44[0x2];
    /* 0x46 */ u16 devilId;
};
}

extern "C" {
DevilAffinityRecord *devilGetRecord(u16 id);
u32 passiveSkillResolveAffinity(const u16 *skills, u32 kind);
u32 affinityShouldReplaceState(s32 current, s32 incoming);

/* Resolve one affinity of a unit: the demon's base response, overridden by its passive skills. */
void affinityResolveUnitSlot(AffinitySlot *out, AffinityUnit *unit, s32 kind)
{
    DevilAffinityRecord *record = devilGetRecord(unit->devilId);
    s32 state;

    out->id = record->affinities[kind].id;
    out->state = record->affinities[kind].state;
    if (out->id == 0) {
        out->id = 1;
    }
    state = passiveSkillResolveAffinity(unit->passiveSkills, kind);
    if (affinityShouldReplaceState(out->state, state)) {
        out->state = state;
    }
}

} /* extern "C" */
