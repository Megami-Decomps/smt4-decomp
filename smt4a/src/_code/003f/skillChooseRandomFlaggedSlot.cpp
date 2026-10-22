#include "gamedata/SkillFlags.h"

extern "C" {
SkillFlagsRecord *findSkillMetadataById(u32 skillId);
s32 randRange(u32 maximum);

/* Chooses a random nonempty slot whose skill has the required metadata flag. */
s32 skillChooseRandomFlaggedSlot(const u16 *skills)
{
    u8 count = 0;
    s8 index = 0;
    s8 candidates[8] = {0};
    do {
        u16 skillId = skills[index];
        if (skillId != 0 && (findSkillMetadataById(skillId)->flags & 0x40)) {
            candidates[count++] = index;
        }
        ++index;
    } while (index < 8);
    if (count == 0) {
        return -1;
    } else if (count <= 1) {
        return candidates[0];
    }
    return candidates[randRange(static_cast<u16>(count - 1))];
}
}
