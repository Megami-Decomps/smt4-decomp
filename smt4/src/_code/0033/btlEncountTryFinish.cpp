#include "battle/btlMain.h"

extern "C" {

void FUN_00227218(void);
void FUN_003d9e88(void);
s32 FUN_002404e8(void *object);
s32 nodeListCountActiveById(s32 value, s32 arg);

extern s32 g_btlActionReflect;
extern BtlMain *g_btlMain;
extern void *DAT_00435d18;

u32 btlEncountTryFinish(void)
{
    s32 result;
    u32 done;

    result = nodeListCountActiveById(g_btlActionReflect, 0);
    if (result > 0) {
        done = 0;
    } else {
        result = FUN_002404e8(DAT_00435d18);
        done = result;
        if (result != 0) {
            if (DAT_00435d18 != NULL) {
                FUN_003d9e88();
            }
            g_btlMain->flags &= ~0x4000;
            FUN_00227218();
            done = 1;
        }
    }
    return done;
}

} /* extern "C" */
