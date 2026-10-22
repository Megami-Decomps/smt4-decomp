/* NON_MATCHING: category checks fold to a range test and boolean return branches are merged. */
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
    /* 0x36 */ u16 code;
    /* 0x38 */ u8 unk38[0xb];
    /* 0x43 */ u8 unk43;
};

extern "C" {
bool FUN_0026a604(const PackedSkillSelector *selector, const SkillCompatibilityRecord *skill)
{
    u32 packed = selector->packed;
    u32 kind = (packed >> 16) & 0xf;
    if (kind != 5 && kind != 6) {
        return false;
    }
    if (skill->kind < 2) {
        return ((skill->packed >> 12) & 0x1f) == ((packed >> 11) & 0x1f);
    }
    if (skill->kind == 3 && (packed & 0xf800) == 0xa000) {
        u32 code = skill->code & 0xfff;
        if (code) {
            return code != 4000;
        }
        return skill->unk43 != 0;
    }
    return false;
}
}
