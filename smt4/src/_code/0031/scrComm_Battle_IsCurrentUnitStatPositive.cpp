#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

int btlGetMainState(void);
extern u8 *btlMainFindActiveEntry(void);
extern int scrGetArg(int index);

/* Script command: tests the status counter selected by argument 0 (0 -> slot 7, 1 -> slot 10, 2 -> slot 11) of the current unit. */
u32 scrComm_Battle_IsCurrentUnitStatPositive(void)
{
    int which;
    int slot;
    u8 *unit;

    which = scrGetArg(0);
    slot = 0;
    if (which == 0) {
        slot = 7;
    } else if (which == 1) {
        slot = 10;
    } else if (which == 2) {
        slot = 0xb;
    }
    btlGetMainState();
    unit = btlMainFindActiveEntry();
    if (unit != NULL) {
        scrSetResult(*(s16 *)(unit + slot * 2 + 0x72) >= 1);
    } else {
        scrSetResult(0);
    }
    return 1;
}

} /* extern "C" */
