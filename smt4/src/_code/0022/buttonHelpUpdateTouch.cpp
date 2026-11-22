/* NON_MATCHING: 56 lines, registers only (same instructions and layout as retail): retail keeps the flag values 1
 * and 0 in r9/sl and slot 3's region base in r8 (built: r8/r9 and sl), and the count-down loop's element address
 * in r3 with the work + index base in r0 (built: swapped). */
#include "ui/ButtonHelpGlobal.h"
#include "ui/UiControl_Smt4.h"

extern "C" s32 ifTouchGetSelectedRegion(void);

/* Whether the touch screen's selected region is slot `index`'s. */
static bool buttonHelpRegionTouched(ButtonHelpWork *work, s32 index)
{
    return ifTouchGetSelectedRegion() == work->touchRegions[index];
}

extern "C" {

/* Updates the slots' touch flags from the touch screen's selection: in selection modes 1 and 2 the
 * pressed flags, in mode 6 the selected flags; otherwise the pressed flags count down. */
void buttonHelpUpdateTouch(void)
{
    ButtonHelpWork *work = g_buttonHelp.work;
    u8 mode = ifTouchGetSelectionMode();
    if (work->touchSuspended != 0)
        return;
    if (mode == 1 || mode == 2) {
        for (s32 i = 0; i < 6; i++) {
            if (i == 1 && work->slots[0].kind == 8 && buttonHelpRegionTouched(work, 1)) {
                work->touchPressed[0] = 1;
            } else if (i == 2 && work->slots[0].kind == 8 && buttonHelpRegionTouched(work, 2)) {
                work->touchPressed[0] = 1;
            } else if (i == 1 && work->slots[0].kind == 7 && buttonHelpRegionTouched(work, 1)) {
                work->touchPressed[0] = 1;
            } else if (i == 3 && work->slots[2].kind == 9 && buttonHelpRegionTouched(work, 3)) {
                work->touchPressed[2] = 1;
            } else if (i > 0 &&
                       (work->slots[i - 1].kind == 10 || work->slots[i - 1].kind == 11 ||
                        work->slots[i - 1].kind == 12 || work->slots[i - 1].kind == 13 ||
                        work->slots[i - 1].kind == 14 || work->slots[i - 1].kind == 15 ||
                        work->slots[i - 1].kind == 16) &&
                       buttonHelpRegionTouched(work, i)) {
                work->touchPressed[i - 1] = 1;
            } else if (work->slots[i].kind != 0 && work->slots[i].kind != 18 && work->slots[i].kind != 17 &&
                       buttonHelpRegionTouched(work, i)) {
                work->touchPressed[i] = 1;
            } else {
                work->touchPressed[i] = 0;
            }
            work->touchSelected[i] = 0;
        }
    } else if (mode == 6) {
        for (s32 i = 0; i < 6; i++) {
            if (i == 1 && work->slots[0].kind == 8 && buttonHelpRegionTouched(work, 1)) {
                work->touchSelected[0] = 1;
            } else if (i == 2 && work->slots[0].kind == 8 && buttonHelpRegionTouched(work, 2)) {
                work->touchSelected[0] = 1;
            } else if (i == 1 && work->slots[0].kind == 7 && buttonHelpRegionTouched(work, 1)) {
                work->touchSelected[0] = 1;
            } else if (i == 3 && work->slots[2].kind == 9 && buttonHelpRegionTouched(work, 3)) {
                work->touchSelected[2] = 1;
            } else if (i > 0 &&
                       (work->slots[i - 1].kind == 10 || work->slots[i - 1].kind == 11 ||
                        work->slots[i - 1].kind == 12 || work->slots[i - 1].kind == 13 ||
                        work->slots[i - 1].kind == 14 || work->slots[i - 1].kind == 15 ||
                        work->slots[i - 1].kind == 16) &&
                       buttonHelpRegionTouched(work, i)) {
                work->touchSelected[i - 1] = 1;
            } else if (work->slots[i].kind != 0 && work->slots[i].kind != 18 && work->slots[i].kind != 17 &&
                       buttonHelpRegionTouched(work, i)) {
                work->touchSelected[i] = 1;
            } else {
                work->touchSelected[i] = 0;
            }
            work->touchPressed[i] = 0;
        }
    } else {
        for (s32 i = 0; i < 6; i++) {
            u8 *pressed = &work->touchPressed[i];
            if (*pressed != 0)
                (*pressed)--;
            work->touchSelected[i] = 0;
        }
    }
}

} /* extern "C" */
