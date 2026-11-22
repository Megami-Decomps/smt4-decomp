/* NON_MATCHING: 10 lines; retail loads the 1.0f opacity constant into s17 at entry, the build only before the row loop */
#include "camp/Unite/UniteWork.h"
#include "code/Code002a_VariantA.h"
#include "code/Code002a_Smt4a.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
f32 uniteDrawSelectionButtonStrip(s32 x, s32 y, f32 speed);
void uiDrawLayeredSpriteEffect(s32 x, s32 y, f32 speed);
void skillScreenDrawCandidateListRow(UniteWorkA *work, s32 row, struct SlotRecordA *record, s32 valid, s32 x, s32 y, s32 highlighted,
                  f32 effect);
void skillScreenDrawCandidateRow(UniteWorkA *work, struct SlotRecordA *record, s32 x, s32 y, f32 effect);

/* Draws the skill inheritance screen's eight visible candidate rows and, when the list is active, the
 * button strip (cursor past the row limit) or the highlighted candidate row. */
void drawInteractiveEightRowList(UniteWorkA *work, struct SlotRecordA *record, s32 interactive, s32 x, s32 y,
                                 f32 effect)
{
    resourceRunOperationIfUnblocked((Object *)&work->inheritanceA.skillList);
    s32 cursor = resourceRunOperationIfUnblocked((Object *)&work->inheritanceA.skillList) +
                 listCursorGetRowIfUnblocked(&work->inheritanceA.skillList);
    bool stripShown = false;
    if (interactive && (cursor >= work->inheritanceA.rowLimit || work->inheritanceA.stripSelected)) {
        uniteDrawSelectionButtonStrip(x, y, effect);
        stripShown = true;
    } else {
        uiDrawLayeredSpriteEffect(x, y, effect);
    }
    for (s32 row = 0; row < 8; ++row) {
        s32 valid = 1;
        if (resourceRunOperationIfUnblocked((Object *)&work->inheritanceA.skillList) + row >=
            work->inheritanceA.skillCount)
            valid = 0;
        if (!interactive || listCursorGetRowIfUnblocked(&work->inheritanceA.skillList) != row || stripShown ||
            !work->inheritanceA.accepted) {
            s32 highlighted = 0;
            if (listCursorGetRowIfUnblocked(&work->inheritanceA.skillList) == row && !work->inheritanceA.accepted &&
                interactive)
                highlighted = 1;
            skillScreenDrawCandidateListRow(work, row, record, valid, x, y, highlighted, effect);
            efctSetSpeed(1.0f);
        }
    }
    if (!stripShown && work->inheritanceA.accepted && interactive)
        skillScreenDrawCandidateRow(work, record, x, y, effect);
}

} /* extern "C" */
