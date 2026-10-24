#include "common.h"

extern "C" {

typedef struct ScriptOp {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 variable;
} ScriptOp;

typedef struct ScriptContext {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 pc;
    /* 0x1C */ u8 unk1c[0xA0];
    /* 0xBC */ ScriptOp *ops;
} ScriptContext;

extern u32 g_scrIntVars[];

extern u32 FUN_003d2004(void);

/* Script command: pops an integer into the script variable named by the current op; returns 1. */
u32 scrComm_PopIntToVariable(ScriptContext *context)
{
    u32 value = FUN_003d2004();

    g_scrIntVars[context->ops[context->pc].variable] = value;
    context->pc++;
    return 1;
}

} /* extern "C" */
