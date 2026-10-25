#include "shard/Shard003B.h"

extern "C" {

extern void bustupCutAnimAssignSlot(s32 a, s32 b);

/* Script command: calls bustupCutAnimAssignSlot with (0, 1), (0, 2) and (0, 3). */
u32 scrCommRun3Variants(void)
{
    bustupCutAnimAssignSlot(0, 1);
    bustupCutAnimAssignSlot(0, 2);
    bustupCutAnimAssignSlot(0, 3);
    return 1;
}

} /* extern "C" */
