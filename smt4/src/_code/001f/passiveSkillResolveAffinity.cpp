#include "common.h"

namespace {
struct PassiveSkillRecord {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 affinity;
};
}

extern "C" {
const PassiveSkillRecord* passiveSkillLookupRecord(u32);
u32 affinityShouldReplaceState(s32 current, s32 incoming);

/* Resolve the strongest passive response among the eight equipped skill ids. */
u32 passiveSkillResolveAffinity(const u16* skills, u32 kind)
{
    s32 best = 0;
    for (s32 i = 0; i < 8; ++i) {
        if (!skills[i]) {
            continue;
        }
        const PassiveSkillRecord* skill = passiveSkillLookupRecord(skills[i]);
        if (!skill) {
            continue;
        }
        const u32 affinity = skill->affinity;
        if (((affinity >> 6) & 0x1F) != 5) {
            continue;
        }
        if ((affinity & 0xF0000) == 0) {
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
        } else if (((affinity >> 11) & 0x1F) == kind) {
            s32 incoming = 0;
            switch ((affinity >> 16) & 0xF) {
            case 0: break;
            case 1: incoming = 5; break;
            case 2: incoming = 1; break;
            case 3: incoming = 3; break;
            case 4: incoming = 4; break;
            }
            if (affinityShouldReplaceState(best, incoming)) {
                best = incoming;
            }
        }
    }
    return best;
}
} // extern "C"
