#include "common.h"

extern "C" {

extern u32 scrPopInt(void);

typedef struct ScriptInsn {
    /* 0x0 */ u16 op;
    /* 0x2 */ u16 arg;
} ScriptInsn;

typedef struct ScriptContext {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 step;
    /* 0x1C */ u8 unk1C[0xA0];
    /* 0xBC */ ScriptInsn *insns;
    /* 0xC0 */ u8 unkC0[0x28];
    /* 0xE8 */ u32 *vars;
} ScriptContext;

/* Script command: stores scrPopInt's result into the variable named by the instruction's argument. */
u32 scrOpStoreIntVar(ScriptContext *script)
{
    u32 value = scrPopInt();

    script->vars[script->insns[script->step].arg] = value;
    script->step = script->step + 1;
    return 1;
}

} /* extern "C" */
