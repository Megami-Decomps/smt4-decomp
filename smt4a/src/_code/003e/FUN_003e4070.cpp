/* NON_MATCHING: compiler uses a 3988-byte stack reservation and different argument/enabled store ordering. */
#include "common.h"

struct OperationState {
    u32 unk000;
    u32 argument; // 0x004
    u8 unk008[0xedc];
    u8 enabled; // 0xee4
    u8 unkee5[0x9b];
};
struct OperationResult {
    u32 words[4];
};

extern "C" {
void FUN_00161a10(void);
void FUN_0018c740(OperationState *);
void FUN_001a1f5c(void);
void FUN_0018c840(void);
void FUN_0018c870(void);
void FUN_0018c7b0(OperationResult *, OperationState *);

// Reset the operation's backing storage and submit its initialized state.
void FUN_003e4070(u32, u32 argument)
{
    FUN_00161a10();
    OperationState state;
    FUN_0018c740(&state);
    state.enabled = 0;
    state.argument = argument;
    FUN_001a1f5c();
    FUN_0018c840();
    FUN_0018c870();
    OperationResult result;
    FUN_0018c7b0(&result, &state);
}
}
