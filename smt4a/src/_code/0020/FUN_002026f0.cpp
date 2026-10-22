/* NON_MATCHING: switch lowers to comparisons rather than retail's jump table; final branch target loads also differ. */
#include "shard/ScriptStep.h"

/* Local extended view: the common ScriptStep ends at the instruction index. */
struct ConditionalScriptLabel {
    u8 unk00[0x18];
    s32 instruction;
    u8 unk1C[4];
};
struct ConditionalScriptInstruction {
    u16 opcode;
    u16 label;
};
struct ConditionalScriptContext {
    ScriptStep execution;
    s32 valueOffset; /* 0x1C, relative to this context */
    u8 unk20[0x98];
    ConditionalScriptLabel *labels; /* 0xB8 */
    ConditionalScriptInstruction *instructions; /* 0xBC */
};
extern "C" s32 FUN_003d2004(ConditionalScriptContext *);
extern "C" f32 scrPopFloat(ConditionalScriptContext *);

/* Continue after a true value, otherwise branch to the instruction's label. */
extern "C" u32 FUN_002026f0(ConditionalScriptContext *context)
{
    switch (((const u8 *)context)[context->valueOffset + 0x1F]) {
    case 0:
    case 2:
        if (FUN_003d2004(context) != 0) {
            ++context->execution.step;
            return 1;
        }
        break;
    case 1:
    case 3:
        if (scrPopFloat(context) != 0.0f) {
            ++context->execution.step;
            return 1;
        }
        break;
    }
    context->execution.step = context->labels[
        context->instructions[context->execution.step].label].instruction;
    return 1;
}
