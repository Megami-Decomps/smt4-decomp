/* NON_MATCHING: retail tests the 0xa000 selector bits in their own block after the skill-kind dispatch and shares one false return; armcc predicates the test and returns false inline. */
#include "common.h"

struct PackedSkillSelector {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 packed;
};
struct SkillCompatibilityRecord {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 kind;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ u32 packed;
    /* 0x2c */ u8 unk2c[0xa];
    /* 0x36 */ u16 code : 12;
    /* 0x36 */ u16 codeHigh : 4;
    /* 0x38 */ u8 unk38[0xb];
    /* 0x43 */ u8 unk43;
};

extern "C" {
bool FUN_0026a604(const PackedSkillSelector *selector, const SkillCompatibilityRecord *skill)
{
    u32 packed = selector->packed;
    if (((packed >> 16) & 0xf) != 5 && ((packed >> 16) & 0xf) != 6) {
        return false;
    }
    if (skill->kind == 0 || skill->kind == 1) {
        return ((skill->packed >> 12) & 0x1f) == ((packed >> 11) & 0x1f);
    }
    if (skill->kind != 3) {
        return false;
    }
    if ((packed & 0xf800) != 0xa000) {
        return false;
    }
    if (skill->code) {
        return skill->code != 4000;
    }
    return skill->unk43 != 0;
}
}
