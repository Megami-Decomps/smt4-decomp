/* NON_MATCHING: retail uses push {r0, r1, r2, r3, r4, r5, r6, lr} where the compiled block uses push {r4, r5, r6, r7, lr}. */
#include "common.h"

struct TraversalContext {
    u8 unk00[0x10];
    u32* end; // 0x10
};

struct TraversalState {
    u32 current; // 0x00
    u32* end;    // 0x04
    u32 next;    // 0x08
    u32 input;   // 0x0C
};

extern "C" {
s32 wordRefsDiffer_002fd750(u32* current, u32** end);
void FUN_00307d38(u32* result, TraversalContext* context, u32* input);

void FUN_00132584(TraversalContext* context)
{
    TraversalState state;
    state.end = context->end;
    state.current = *state.end;

    for (; wordRefsDiffer_002fd750(&state.current, &state.end) != 0;
         state.current = state.next) {
        state.input = state.current;
        FUN_00307d38(&state.next, context, &state.input);
    }

}
}
