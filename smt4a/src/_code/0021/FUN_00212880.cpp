/* NON_MATCHING: retail dispatches the four type cases through a jump table; this builds a compare
 * chain (same as smt4 FUN_00192990). */
#include "common.h"

extern "C" {

typedef struct ScriptProcess {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 pc;         /* index of the current instruction */
    /* 0x1C */ s32 sp;         /* number of values on the stack */
    /* 0x20 */ u8 types[0x1c]; /* type of each stack value: 0/2 integer, 1/3 float */
    /* 0x3C */ s32 values[1];
} ScriptProcess;

s32 FUN_003d2004(ScriptProcess *process);
f32 scrPopFloat(ScriptProcess *process);

/* Script command: logical not; pops a number and pushes 1 when it is zero, else 0. */
u32 FUN_00212880(ScriptProcess *process)
{
    s32 result;

    switch (process->types[process->sp - 1]) {
    case 0:
    case 2:
        result = FUN_003d2004(process) == 0;
        process->types[process->sp] = 0;
        process->values[process->sp] = result;
        process->sp++;
        break;
    case 1:
    case 3:
        result = scrPopFloat(process) == 0.0f;
        process->types[process->sp] = 0;
        process->values[process->sp] = result;
        process->sp++;
        break;
    }
    process->pc++;
    return 1;
}
}
