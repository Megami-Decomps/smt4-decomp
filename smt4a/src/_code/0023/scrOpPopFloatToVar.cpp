#include "common.h"

extern "C" {

typedef struct ScriptProcess {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 pc;          /* index of the current instruction (4 bytes each) */
    /* 0x1C */ u8 unk1c[0xA0];
    /* 0xBC */ u8 *code;
} ScriptProcess;

extern f32 DAT_00618e9c[];      /* script float variables */

extern f32 scrPopFloat(void);

/* Script command: pops a float into the variable the instruction's 16-bit operand names. */
u32 scrOpPopFloatToVar(ScriptProcess *process)
{
    f32 value = scrPopFloat();

    DAT_00618e9c[*(u16 *)(process->code + process->pc * 4 + 2)] = value;
    process->pc++;
    return 1;
}

}
