#include "common.h"

extern "C" {

void messageDismissNumericBanner(s32 mode);

/* Runs messageDismissNumericBanner with mode one. */
void FUN_002f147c(void)
{
    messageDismissNumericBanner(1);
}

} /* extern "C" */
