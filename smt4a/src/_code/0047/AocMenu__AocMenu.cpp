/* NON_MATCHING: retail stores the far members (0x1798, 0x17a0, 0x1eec) as [literal offset, this] after a writeback store at 0x11b0; the build adds to the chained pointer instead. */
#include "classes/AocMenu.h"

extern "C" {
extern const u8 DAT_0055c6a4[];
}

/* Constructs the embedded request, selection and window-panel members, then clears the loaded-table state and
   installs the step callbacks. */
AocMenu::AocMenu() : flags(0), dispatchTable(DAT_0055c6a4)
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
    unk1EEC = 0;
    initializeStepCallbacks();
}
