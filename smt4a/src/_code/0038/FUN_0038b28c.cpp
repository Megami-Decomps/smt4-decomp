#include "common.h"

extern "C" {

extern s32 scrGetCommandFrame(void);
extern s32 FUN_004186a4(void);
extern u16 FUN_004186e0(void);
extern void FUN_00418070(u32 value, s32 arg);
extern void partyEntryIsAvailable(u32 value);
extern void optionsClearFlag1(void);
extern void scrWorkSetValue(s32 index, s32 value);
extern s32 scrWorkGetValue(u32 index);
extern s32 dataTableValueOrZero(s32 table);

/* Script command: on its first frame arms the work values, then waits for work value 0 to clear and applies the pending change; returns 1 when done. */
s32 FUN_0038b28c(void)
{
    u32 value;

    s32 run = 1;

    if (scrGetCommandFrame() == 0) {
        if (FUN_004186a4() == 0) {
            run = 0;
        } else {
            scrWorkSetValue(0, 0);
            scrWorkSetValue(1, 0);
        }
    }
    if (run) {
        dataTableValueOrZero(0x1E);
        if (scrWorkGetValue(0) != 0) {
            return 0;
        }
        value = FUN_004186e0();
        FUN_00418070(value, 0);
        partyEntryIsAvailable(value);
        optionsClearFlag1();
    }
    return 1;
}

} /* extern "C" */
