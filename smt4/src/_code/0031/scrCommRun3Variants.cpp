#include "common.h"

extern "C" {

int bustupCutAnimAssignSlot(...);

u32 scrCommRun3Variants(void)
{
    bustupCutAnimAssignSlot(0, 1);
    bustupCutAnimAssignSlot(0, 2);
    bustupCutAnimAssignSlot(0, 3);
    return 1;
}

} /* extern "C" */
