#include "common.h"

extern "C" {
u32 bustupCutAnimSelectSlotsById(s32 id);
s32 eventTexSelectJobsById(s32 id);
void messageSetDisplayMode(s32 mode);
void messageSetConfirmDisplayMode(void);

// Resets texture selection for ID zero, otherwise selects it and updates mode on success.
u32 FUN_00108074(s32 id)
{
    if (id == 0) {
        messageSetConfirmDisplayMode();
    } else if (bustupCutAnimSelectSlotsById(id) == 0 && eventTexSelectJobsById(id) == 0) {
        messageSetDisplayMode(2);
    }
    return 1;
}
}
