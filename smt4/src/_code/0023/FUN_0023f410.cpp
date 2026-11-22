/* NON_MATCHING: only the reload of the flags word differs: retail loads it into r8 (pushed here too, but unused), this build into r1. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"

extern "C" {

/* Resets every ready action record of group `group` (0-3, each a range of the table) to task 4; bit 3 of the
 * flags follows `keepFlag`, presentation flag 0x200 is set unless `keepPresentation`. */
void FUN_0023f410(BtlMainState *battle, s32 group, s32 keepFlag, s32 keepPresentation)
{
    s32 first = 0;
    s32 count = 0;

    if (group == 0) {
        count = 4;
    } else if (group == 1) {
        first = 4;
        count = 50;
    } else if (group == 2) {
        first = 54;
        count = 1;
    } else if (group == 3) {
        first = 67;
        count = 42;
    }
    for (s32 i = first; i < first + count; i++) {
        BtlActionRecord *record = &battle->actions[i];

        if ((record->status & 1) && (record->status & 0x80) && !(record->status & 2)) {
            record->flags = (record->flags & ~6) | 1;
            record->unk4c = 0;
            record->task = 4;
            if (keepFlag != 0) {
                record->flags |= 8;
            }
            if (keepPresentation == 0) {
                record->presentationFlags |= 0x200;
            }
        }
    }
}

} /* extern "C" */
