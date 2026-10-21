/* NON_MATCHING: compiler uses r1 for the work pointer and r0 for the flag instead of the reverse. */
#include "common.h"
extern "C" {
extern struct { u8 unk00[0x38]; u8 requested; } *g_aocJob;
/* Raises the add-on content job's pending operation. */
void FUN_00301830(void) {
    g_aocJob->requested = 1;
}
}
