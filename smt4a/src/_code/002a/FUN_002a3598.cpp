#include "common.h"

extern "C" {

void FUN_00183e58(void);
void FUN_002852f0(s32 value);
void FUN_002c76c0(...);
void FUN_002e6134(void);
void FUN_003457b8(void);
void FUN_003c5848(void);
s32 FUN_002deb84(void);
s32 ref208StateIs7(void);

/* Script step: when FUN_002deb84 reports nonzero and ref208StateIs7 agrees, finishes (FUN_002e6134, FUN_002c76c0(-1), FUN_002852f0(0)) and returns 1; when FUN_002deb84 reports 0, runs the three clean-up calls; returns 0 otherwise. */
u32 FUN_002a3598(void)
{
    s32 result;

    FUN_002c76c0();
    result = FUN_002deb84();
    if (result != 0) {
        result = ref208StateIs7();
        if (result != 0) {
            FUN_002e6134();
            FUN_002c76c0(0xFFFFFFFF);
            FUN_002852f0(0);
            return 1;
        }
    } else {
        FUN_00183e58();
        FUN_003c5848();
        FUN_003457b8();
    }
    return 0;
}

} /* extern "C" */
