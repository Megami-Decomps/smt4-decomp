#include "battle/btlMain.h"

extern "C" {

void FUN_003d9164(void);
void FUN_004f6184(void);
s32 FUN_004f6384(void *object);
s32 FUN_0040de1c(s32 value, s32 arg);

extern s32 DAT_005712f0;
extern BtlMainA *DAT_00571508;
extern void *DAT_00573808;

u32 btlEncountTryFinish(void)
{
    s32 result;
    u32 done;

    result = FUN_0040de1c(DAT_005712f0, 0);
    if (result > 0) {
        done = 0;
    } else {
        result = FUN_004f6384(DAT_00573808);
        done = result;
        if (result != 0) {
            if (DAT_00573808 != NULL) {
                FUN_004f6184();
            }
            DAT_00571508->flags &= ~0x4000;
            FUN_003d9164();
            done = 1;
        }
    }
    return done;
}

} /* extern "C" */
