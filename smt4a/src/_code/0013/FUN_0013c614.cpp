#include "common.h"

extern "C" {
s32 bustupCutAnimSelectSlotsByWorkId(void);
s32 eventTexSelectJobsById(s32 id);
void messageMainSetMode(s32 mode);
void FUN_001695a0(void);

// Resets texture selection for ID zero, otherwise selects it and updates mode on success.
u32 FUN_0013c614(s32 id)
{
    if (id == 0) {
        FUN_001695a0();
    } else if (bustupCutAnimSelectSlotsByWorkId() == 0 && eventTexSelectJobsById(id) == 0) {
        messageMainSetMode(2);
    }
    return 1;
}
}
