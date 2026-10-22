#include "common.h"

extern "C" {

typedef struct ScriptStepper {
    u8 unk000[0xD04];
    u32 script;     /* 0xD04 */
    u8 unkD08[0x20];
    s32 mode;       /* 0xD28: 10 starts entry 16 */
    s32 nextState;  /* 0xD2C */
    u8 unkD30[4];
    u32 unkD34;     /* 0xD34 */
    s32 step;       /* 0xD38 */
    u8 unkD3C[0x24];
    u8 altEntry;    /* 0xD60: start entry 18 instead of 17 */
} ScriptStepper;

void scrScriptProcessStartEntry(u32 script, s32 entry);
s32 scrRunOpcodesStub(u32 script);
void FUN_0026b9bc(void);
void FUN_0028a924(s32 a0, s32 a1, s32 a2);
void FUN_0028a368(s32 a0);

/* Starts the stepper's script entry, then runs it; returns 2 once it has finished (and switches to state 6). */
s32 FUN_001ebe10(ScriptStepper *stepper)
{
    s32 result = 0;

    switch (stepper->step) {
    case 0:
        if (stepper->mode == 10) {
            scrScriptProcessStartEntry(stepper->script, 16);
        } else if (stepper->altEntry) {
            scrScriptProcessStartEntry(stepper->script, 18);
        } else {
            scrScriptProcessStartEntry(stepper->script, 17);
        }
        stepper->step++;
        break;
    case 1:
        if (scrRunOpcodesStub(stepper->script) == 2) {
            stepper->unkD34 = 0;
            stepper->nextState = 6;
            stepper->step = 0;
            FUN_0026b9bc();
            FUN_0028a924(1, 0, -1);
            FUN_0028a368(1);
            result = 2;
        }
        break;
    }
    return result;
}

} /* extern "C" */
