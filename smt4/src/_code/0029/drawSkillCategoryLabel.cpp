/* NON_MATCHING: shared 41A/41B selection uses one extra branch and different block placement; O2 may restore retail's shared backward branch. */
#include "shard/W6_W6Match5_SecondarySort.h"

namespace {
struct SkillCategoryView {
    u8 unk00[6];
    u8 category;
};
}

extern "C" {
u32 questIsCompleted(s32 skill);
u32 FUN_00298f88(u32 skill);
s32 idIsAtLeast350(s32 skill);
void drawSetColorFromRGBA8(u32);
void FUN_002ae9ec(u32, u32, s32, u32, u32, u32);
void FUN_002bed3c(void);

/* Draw the category label, using the alternate color/record for flagged skills. */
void drawSkillCategoryLabel(u16 skill, s32 x, s32 y, u32 style)
{
    s32 label = 0;
    const u32 highlighted = questIsCompleted(skill);
    if (FUN_00298f88(skill) != 0) {
        label = highlighted ? 0x40F : 0x408;
    } else if (idIsAtLeast350(skill) != 0) {
        label = highlighted ? 0x41B : 0x41A;
    } else {
        const SkillCategoryView* record =
            reinterpret_cast<const SkillCategoryView*>(dataTable1bOr1cGetRecord(skill));
        switch (record->category) {
        case 0:
            label = highlighted ? 0x40A : 0x403;
            break;
        case 1:
        case 6:
            label = highlighted ? 0x40B : 0x404;
            break;
        case 4:
        case 5:
            label = highlighted ? 0x40C : 0x405;
            break;
        case 2:
        case 3:
            label = highlighted ? 0x40D : 0x406;
            break;
        case 8:
        case 9:
            label = highlighted ? 0x41B : 0x41A;
            break;
        case 10:
            return;
        }
    }
    if (highlighted != 0) {
        drawSetColorFromRGBA8(0xF49800FF);
    }
    FUN_002ae9ec(2, 0x13, label, x, y, style);
    FUN_002bed3c();
}
} // extern "C"
