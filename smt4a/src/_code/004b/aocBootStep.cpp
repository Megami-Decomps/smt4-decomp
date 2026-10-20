#include "addon/aocMain.h"

extern "C" {

void FUN_00261a14(s32 arg);
void FUN_004b7d88(AocStep *step);
void FUN_0047df7c(AocObjC *obj, s32 arg);
void FUN_0047df1c(AocObjC *obj);
void FUN_004731d8(void);
s32 FUN_0047dff0(AocObjC *obj);
s32 FUN_00473244(void);

extern AocMain *g_aocMain;

void aocBootStep(AocStep *step)
{
    if (step->substate == 0) {
        FUN_00261a14(0);
        FUN_0047df7c(&g_aocMain->objC, 1);
        step->substate = 1;
        return;
    }
    if (step->substate == 1 && FUN_0047dff0(&g_aocMain->objC) != 0) {
        FUN_0047df1c(&g_aocMain->objC);
        if (FUN_00473244() == 0) {
            FUN_004731d8();
            FUN_00261a14(1);
            FUN_004b7d88(step);
            step->state = 5;
            step->substate = 0;
            return;
        }
        step->state = 0xD;
        step->substate = 0;
    }
}

} /* extern "C" */
