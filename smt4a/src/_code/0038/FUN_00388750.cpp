#include "common.h"

extern "C" {

void messageDismissNumericBanner(s32 value);

/* Script command: dismisses the numeric banner with value 1 (a tail call into the function right after it). */
void FUN_00388750(void)
{
    messageDismissNumericBanner(1);
}

} /* extern "C" */
