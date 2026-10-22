/* NON_MATCHING: current C compilation omits the three retail ARM hint NOPs around the reset call; the original control-flow/inlining shape remains unrecovered. */
#include "common.h"

extern "C" {
s32 FUN_00153588(void);
s32 eventTexSelectJobsById(s32 id);
void messageMainSetMode(s32 mode);
void FUN_001695a0(void);

// Resets texture selection for ID zero, otherwise selects it and updates mode on success.
u32 FUN_0013c614(s32 id)
{
    if (id != 0) {
        if (FUN_00153588() == 0 && eventTexSelectJobsById(id) == 0) {
            messageMainSetMode(2);
        }
    } else {
        FUN_001695a0();
    }
    return 1;
}
}
