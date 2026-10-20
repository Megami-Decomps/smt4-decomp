#include "addon/aocMain.h"

extern "C" {

void FUN_0022af9c(s32 arg);
void FUN_0022b064(AocStep *step);
void FUN_0027341c(AocObjC *obj, s32 arg);
void FUN_0027348c(AocObjC *obj);
void FUN_00289508(void);
s32 FUN_002734f0(AocObjC *obj);
s32 FUN_002903c8(void);

extern AocMain *g_aocMain;

void aocBootStep(AocStep *step)
{
    if (step->substate == 0) {
        FUN_0022af9c(0);
        FUN_0027341c(&g_aocMain->objC, 1);
        step->substate = 1;
        return;
    }
    if (step->substate == 1 && FUN_002734f0(&g_aocMain->objC) != 0) {
        FUN_0027348c(&g_aocMain->objC);
        if (FUN_002903c8() == 0) {
            FUN_00289508();
            FUN_0022af9c(1);
            FUN_0022b064(step);
            step->state = 5;
            step->substate = 0;
            return;
        }
        step->state = 0xD;
        step->substate = 0;
    }
}

} /* extern "C" */
