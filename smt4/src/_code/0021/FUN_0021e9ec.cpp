#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

s32 FUN_002b89a4(u32 arg);
s32 FUN_002c1d5c(void);
void FUN_00287728(s32 arg);
void FUN_002a03d8(s32 mode, u32 value);

/* Script command: on a fresh frame applies the argument when arg 0 selects mode 0 or 1; otherwise polls until done. */
u32 FUN_0021e9ec(void)
{
    u32 value = scrGetArg(1);

    if (scrGetCommandFrame() == 0) {
        u32 mode = scrGetArg(0);
        if (mode != 0 && mode != 1) {
            return 1;
        }
        FUN_002a03d8(0, value);
    } else {
        if (FUN_002b89a4(0) != 0) {
            return 1;
        }
        if (FUN_002c1d5c() != 0) {
            FUN_00287728(0);
        }
    }
    return 0;
}

} /* extern "C" */
