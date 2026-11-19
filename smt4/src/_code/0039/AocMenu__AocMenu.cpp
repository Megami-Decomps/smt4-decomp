/* NON_MATCHING: retail stores the far members (0x1798, 0x17a0, 0x1c30) as [literal offset, this] after a writeback store at 0x11b0, recomputing this from it; the build adds to the panel pointer instead. */
#include "classes/AocMenu.h"

extern "C" {
extern const u8 DAT_0042219c[];
}

/* Constructs the embedded request, selection and window-panel members, then clears the loaded-table state and
   installs the step callbacks. */
AocMenu::AocMenu() : flags(0), dispatchTable(DAT_0042219c)
{
    tableFile = NULL;
    tableValue = 0;
    script = NULL;
    animated.slowTick = 0;
    animated.fastTick = 0;
    jobHandle = 0;
    unk1794 = 0;
    unk1798 = 0;
    unk17A0 = 0;
    iv.descriptionText = NULL;
    initializeStepCallbacks();
}
