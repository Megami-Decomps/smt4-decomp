#include "battle/BtlMainAccess.h"
#include "common.h"


extern "C" {

s32 scrGetArg(u32 index);

/* Script command: sets the battle mode to 11 when the argument is nonzero, otherwise to 12. */
u32 scrComm_Battle_SetModeFromArg(void)
{
    if (scrGetArg(0) == 0) {
        btlGetMainState()->actionState.mode = 12;
    } else {
        btlGetMainState()->actionState.mode = 11;
    }
    return 1;
}

} /* extern "C" */
