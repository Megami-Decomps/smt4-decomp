#include "common.h"

extern "C" {

void voiceOwnerDestroy(void);

/* Runs voiceOwnerDestroy (placed right after, so the call is a linker NOP). */
void FUN_00462660(void)
{
    voiceOwnerDestroy();
}

} /* extern "C" */
