/* NON_MATCHING: retail initialises the 18 slots in a one-per-iteration loop that reloads each halfword before storing 100; armcc unrolls the bitfield stores by two. */
#include "common.h"

namespace {
/* A demon's elemental response: the resistance id and its affinity state. */
struct AffinitySlot {
    u16 id : 10;
    u16 state : 6;
};

struct PassiveSkillAffinity {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 affinity;
};
}

extern "C" {
const PassiveSkillAffinity *passiveSkillLookupRecord(u32 id);
u32 affinityShouldReplaceState(s32 current, s32 incoming);
void FUN_00394edc(u32 devilId, AffinitySlot *slots);

struct PassiveSkillSet {
    u16 ids[8];
};

struct PlayerPassives {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ PassiveSkillSet passiveSkills;
};
PlayerPassives *gameGetPlayerData(void);

/* The strongest passive response of the eight equipped skills for one affinity kind. */
static __inline u32 resolvePassiveAffinity(const u16 *skills, u8 kind)
{
    s32 best = 0;

    for (s32 i = 0; i < 8; ++i) {
        if (!skills[i]) {
            continue;
        }
        const PassiveSkillAffinity *skill = passiveSkillLookupRecord(skills[i]);
        if (!skill) {
            continue;
        }
        const u32 affinity = skill->affinity;
        if (((affinity >> 6) & 0x1F) != 5) {
            continue;
        }
        if (affinity & 0xF0000) {
            if (((affinity >> 11) & 0x1F) != kind) {
                continue;
            }
            s32 incoming;
            switch ((affinity >> 16) & 0xF) {
            case 1: incoming = 5; break;
            case 2: incoming = 1; break;
            case 3: incoming = 3; break;
            case 4: incoming = 4; break;
            default: incoming = 0; break;
            }
            if (affinityShouldReplaceState(best, incoming)) {
                best = incoming;
            }
        } else {
            switch (kind) {
            case 6:
            case 7:
                if (affinity & 0x100000) return 1;
                break;
            case 0xB:
                if (affinity & 0x1000000) return 1;
                break;
            case 0xC:
                if (affinity & 0x2000000) return 1;
                break;
            case 0xD:
                if (affinity & 0x4000000) return 1;
                break;
            case 0xE:
                if (affinity & 0x8000000) return 1;
                break;
            case 0xF:
                if (affinity & 0x10000000) return 1;
                break;
            case 0x10:
                if (affinity & 0x20000000) return 1;
                break;
            }
        }
    }
    return best;
}

/* Builds the 18 affinity slots of a demon from its base record and the player's passive skills. */
void FUN_00253d60(AffinitySlot *slots, u32 devilId)
{
    for (s32 i = 0; i < 18; i++) {
        slots[i].id = 100;
        slots[i].state = 0;
    }
    FUN_00394edc(devilId, slots);
    if (slots[6].state != 2 && slots[6].state != 3) {
        slots[6].state = 1;
    }
    PassiveSkillSet skills = gameGetPlayerData()->passiveSkills;
    for (s32 kind = 0; kind < 18; kind++) {
        s32 state = resolvePassiveAffinity(skills.ids, (u8)kind);

        if (affinityShouldReplaceState(slots[kind].state, state)) {
            slots[kind].state = state;
        }
    }
}

}
