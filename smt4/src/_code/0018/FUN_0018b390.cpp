/* NON_MATCHING: Retail add r1, r4, #31 differs from recovered add r0, r0, r4. */
#include "common.h"

struct ScriptBranchRecordView {
    u8 unk00[0x18];
    u32 instructionIndex; // 0x18
    u8 unk1C[4]; // 0x1C
};

struct ScriptInstructionView {
    u16 unk00; // 0x00
    u16 branchIndex; // 0x02
};

struct ScriptOperandView {
    u8 unk00[0x1F];
    u8 type; // 0x1F
};

struct ScriptStateView {
    u8 unk00[0x18];
    u32 instructionIndex; // 0x18
    u32 unk1C; // 0x1C: offset relative to this state
    u8 unk20[0x98];
    ScriptBranchRecordView* branches; // 0xB8
    ScriptInstructionView* instructions; // 0xBC
};

extern "C" s32 scrPopInt(ScriptStateView* state);
extern "C" f32 scrPopFloat(ScriptStateView* state);

// Advance for a nonzero operand; otherwise select the current instruction's branch target.
extern "C" u32 FUN_0018b390(ScriptStateView* state)
{
    const ScriptOperandView* operand = reinterpret_cast<const ScriptOperandView*>(
        reinterpret_cast<const u8*>(state) + state->unk1C);

    bool advance;
    switch (operand->type) {
    case 0:
    case 2:
        advance = scrPopInt(state) != 0;
        break;
    case 1:
    case 3:
        advance = scrPopFloat(state) != 0.0f;
        break;
    default:
        advance = false;
        break;
    }

    if (advance) {
        ++state->instructionIndex;
    } else {
        state->instructionIndex = state->branches[
            state->instructions[state->instructionIndex].branchIndex].instructionIndex;
    }
    return 1;
}
