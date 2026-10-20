#include "battle/btlMain.h"

extern "C" {

void FUN_003d9164(void);
void state339CFinish(void);
s32 FUN_004f6384(void *object);
s32 chainCountIdUnflagged(s32 value, s32 arg);

extern s32 g_btlActionReflect;
extern BtlMainA *g_btlCamera;
extern void *DAT_00573808;

u32 btlEncountTryFinish(void)
{
    s32 result;
    u32 done;

    result = chainCountIdUnflagged(g_btlActionReflect, 0);
    if (result > 0) {
        done = 0;
    } else {
        result = FUN_004f6384(DAT_00573808);
        done = result;
        if (result != 0) {
            if (DAT_00573808 != NULL) {
                state339CFinish();
            }
            g_btlCamera->flags &= ~0x4000;
            FUN_003d9164();
            done = 1;
        }
    }
    return done;
}

} /* extern "C" */
