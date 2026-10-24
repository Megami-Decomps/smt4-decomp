/* NON_MATCHING: resistance-state switch uses conditional assignments rather than the retail jump table. */
#include "gamedata/Table04Record.h"

union PassiveAffinityProperties {
    u32 raw;
    struct {
        u32 unk00 : 6;
        u32 category : 5;
        u32 affinity : 5;
        u32 resistance : 4;
        u32 immunityFlags : 12;
    } fields;
};

extern "C" {
const Table04ExtraRecord *dataTable41FindById(u32 skillId);
s32 affinityShouldReplaceState(u32 current, u32 candidate);

// Resolve resistance passives for an element or ailment across the eight equipped skills.
u32 FUN_002ada48(const u16 *skills, u32 affinity)
{
    u32 result = 0;
    for (s32 index = 0; index < 8; ++index) {
        if (skills[index] == 0)
            continue;
        const Table04ExtraRecord *skill = dataTable41FindById(skills[index]);
        if (skill == NULL)
            continue;
        const PassiveAffinityProperties &properties =
            reinterpret_cast<const PassiveAffinityProperties &>(skill->flags);
        u32 flags = properties.raw;
        if (properties.fields.category != 5)
            continue;
        if (properties.fields.resistance != 0) {
            if (affinity == properties.fields.affinity) {
                u32 candidate = 0;
                switch (properties.fields.resistance) {
                case 1: candidate = 5; break;
                case 2: candidate = 1; break;
                case 3: candidate = 3; break;
                case 4: candidate = 4; break;
                }
                if (affinityShouldReplaceState(result, candidate))
                    result = candidate;
            }
        } else {
            switch (affinity) {
            case 6:
            case 7:
                if (flags & 0x100000) return 1;
                break;
            case 11:
                if (flags & 0x400000) return 1;
                break;
            case 12:
                if (flags & 0x800000) return 1;
                break;
            case 13:
                if (flags & 0x1000000) return 1;
                break;
            case 14:
                if (flags & 0x2000000) return 1;
                break;
            case 15:
                if (flags & 0x4000000) return 1;
                break;
            case 16:
                if (flags & 0x8000000) return 1;
                break;
            }
        }
    }
    return result;
}
}
