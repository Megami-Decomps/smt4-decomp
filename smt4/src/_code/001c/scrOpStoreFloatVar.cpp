/* Script op: pops a float from the VM stack and stores it into the variable slot named by the current instruction's operand. */
#include "common.h"

extern "C" {

typedef struct {
    u16 opcode;  /* 0x00 */
    u16 operand; /* 0x02 */
} ScriptInstr;

typedef struct {
    u8 unk00[0x18];        /* 0x00 */
    s32 pc;                /* 0x18 index of the current instruction */
    u8 unk1c[0xa0];        /* 0x1c */
    ScriptInstr *code;     /* 0xbc */
    u8 unkc0[0x2c];        /* 0xc0 */
    f32 *variables;        /* 0xec */
} ScriptContext;

f32 scrPopFloat(void);

s32 scrOpStoreFloatVar(ScriptContext *ctx)
{
    f32 value = scrPopFloat();

    ctx->variables[ctx->code[ctx->pc].operand] = value;
    ctx->pc++;
    return 1;
}

} /* extern "C" */
