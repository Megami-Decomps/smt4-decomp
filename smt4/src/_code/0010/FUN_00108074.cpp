#include "common.h"

extern "C" {
s32 bustupCutAnimSelectSlotsById(void);
s32 eventTexSelectJobsById(s32 id);
void FUN_002bff38(s32 mode);
void FUN_002bff50(void);

// Resets texture selection for ID zero, otherwise selects it and updates mode on success.
u32 FUN_00108074(s32 id)
{
    if (id == 0) {
        FUN_002bff50();
    } else if (bustupCutAnimSelectSlotsById() == 0 && eventTexSelectJobsById(id) == 0) {
        FUN_002bff38(2);
    }
    return 1;
}
}
