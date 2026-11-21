#include "code/Code001b.h"
#include "quest_center/QuestRecord.h"

extern "C" {
u32 questIsCompleted(s32 skill);
s32 idIsAtLeast350(s32 skill);
void drawSetColorFromRGBA8(u32);
void texTableRecordCallWithParams(u32, u32, s32, u32, u32, u32);
void gxResetColorQuadToWhite(void);

/* Draw the category label, using the alternate color/record for flagged skills. */
void drawSkillCategoryLabel(u16 skill, s32 x, s32 y, u32 style)
{
    s32 label = 0;
    const u32 highlighted = questIsCompleted(skill);
    if (dataTable1bOr1cRecordHasFlag1(skill) != 0) {
        label = highlighted ? 0x40F : 0x408;
    } else if (idIsAtLeast350(skill) != 0) {
        if (highlighted) {
            label = 0x41B;
        } else {
            label = 0x41A;
        }
    } else {
        const QuestRecord *record = questDataGetRecord(skill);
        switch (record->kind) {
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
            if (highlighted) {
                label = 0x41B;
            } else {
                label = 0x41A;
            }
            break;
        case 10:
            return;
        }
    }
    if (highlighted != 0) {
        drawSetColorFromRGBA8(0xF49800FF);
    }
    texTableRecordCallWithParams(2, 0x13, label, x, y, style);
    gxResetColorQuadToWhite();
}
} /* extern "C" */
