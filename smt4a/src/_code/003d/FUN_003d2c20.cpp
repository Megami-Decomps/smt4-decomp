#include "common.h"
#include "gamedata/SkillDataRecord.h"

extern "C" {
// Select the current status ailments affected by a skill's cure effect.
u32 FUN_003d2c20(const SkillDataRecordA *skill, u32 ailments)
{
    u32 result = 0;
    if ((skill->flags & 0x7f) != 0 && ailments != 0 && skill->targetKind != 6) {
        u32 effect = skill->flags & 0x7f;
        if (effect == 22) {
            if (ailments & 0x20) result = 0x20;
            if (ailments & 0x40) result |= 0x40;
            if (ailments & 0x80) result |= 0x80;
            if (ailments & 0x100) result |= 0x100;
            if (ailments & 0x200) result |= 0x200;
            if (ailments & 0x800) result |= 0x800;
            if (ailments & 0x1000) result |= 0x1000;
            if (ailments & 0x2000) result |= 0x2000;
            return result;
        } else if (effect == 23) {
            if (ailments & 0x80) result = 0x80;
        } else if (effect == 28) {
            if (ailments & 0x40) result = 0x40;
            if (ailments & 0x80) result |= 0x80;
            if (ailments & 0x100) result |= 0x100;
            if (ailments & 0x800) result |= 0x800;
            if (ailments & 0x1000) result |= 0x1000;
            if (ailments & 0x2000) result |= 0x2000;
        } else if (effect == 24) {
            result = ailments;
        } else if (effect == 31) {
            if (ailments & 0x20) result = 0x20;
            if (ailments & 0x200) result |= 0x200;
        } else {
            if (ailments & (1 << effect)) result = 1 << effect;
        }
    }
    return result;
}
}
