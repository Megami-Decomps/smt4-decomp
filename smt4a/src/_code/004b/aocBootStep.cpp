#include "addon/aocMain.h"

extern "C" {

void FUN_00261a14(s32 arg);
void FUN_004b7d88(AocStep *step);
void scriptHolderBReset(AocObjC *obj, s32 arg);
void scriptHolderFree1(AocObjC *obj);
void FUN_004731d8(void);
s32 scriptHolderUpdate(AocObjC *obj);
s32 gameBlockByte27E98Is1To3(void);

extern AocMain *g_aocMain;

void aocBootStep(AocStep *step)
{
    if (step->substate == 0) {
        FUN_00261a14(0);
        scriptHolderBReset(&g_aocMain->objC, 1);
        step->substate = 1;
        return;
    }
    if (step->substate == 1 && scriptHolderUpdate(&g_aocMain->objC) != 0) {
        scriptHolderFree1(&g_aocMain->objC);
        if (gameBlockByte27E98Is1To3() == 0) {
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
