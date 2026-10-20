#include "common.h"

extern "C" {

/* One opcode of the stream. */
typedef struct ScriptOp {
    /* 0x00 */ u16 opcode;
    /* 0x02 */ u16 arg;
} ScriptOp;

/* A script interpreter state. */
typedef struct ScriptState {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ int pc;                  /* index into the opcode stream */
    /* 0x1C */ u8 unk1c[0xa0];
    /* 0xBC */ const ScriptOp *code;    /* opcode stream */
    /* 0xC0 */ u8 unkc0[0xc];
    /* 0xCC */ int stepCount;
    /* 0xD0 */ int pendingWait;
} ScriptState;

typedef int (*OpcodeHandler)(ScriptState *state);
extern OpcodeHandler DAT_00588e60[];  /* opcode handler table */

/* Runs opcode handlers until one yields (1) or finishes the script (0 -> 2). */
u32 FUN_00224884(ScriptState *state)
{
    while (1) {
        int result = DAT_00588e60[state->code[state->pc].opcode](state);

        if (result == 0) {
            state->pendingWait = 0;
            return 2;
        }
        if (result == 2) {
            break;
        }
        if (result == 1) {
            state->pendingWait = 0;
        }
    }
    state->pendingWait++;
    state->stepCount++;
    return 1;
}

} /* extern "C" */
