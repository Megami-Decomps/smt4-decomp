/* NON_MATCHING: same pushes; retail evaluates the operand with fewer live registers (no push/pop, constants in r3/r2), this build allocates r4/r5 for the address arithmetic. */
#include "common.h"

struct ScriptInsn {
    /* 0x00 */ u16 opcode;
    /* 0x02 */ u16 operand;
};

struct ScriptLabel {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 target;
    /* 0x1C */ u8 unk1C[4];
};

struct ScriptContext {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 pc;
    /* 0x1C */ s32 sp;
    /* 0x20 */ u8 tags[0x1C];
    /* 0x3C */ s32 stack[0x1E];
    /* 0xB4 */ ScriptLabel *labels;
    /* 0xB8 */ u8 unkB8[4];
    /* 0xBC */ ScriptInsn *code;
    /* 0xC0 */ u8 unkC0[4];
    /* 0xC4 */ u8 *base;
};

static __inline void scriptPush(ScriptContext *context, u8 tag, s32 value)
{
    context->tags[context->sp] = tag;
    context->stack[context->sp] = value;
    context->sp++;
}

extern "C" s32 g_scrFloatVars[];

/* Script opcode: pushes the float variable the operand names. */
extern "C" s32 FUN_001c1dc8(ScriptContext *context)
{
    scriptPush(context, 1, g_scrFloatVars[context->code[context->pc].operand]);
    context->pc++;
    return 1;
}
