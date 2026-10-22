/* NON_MATCHING: requires inline SVC instruction with multi-register results; inline assembly and syscall intrinsics are forbidden. */
/* romwright 0.5.0 decompilation of FUN_0018003c for reference (not compiled; its own view of the boundaries):

void FUN_0018003c(void)

{
  software_interrupt(0x24);
  if (*DAT_005b402c < 0) {
    FUN_002e3140();
    return;
  }
  return;
}
*/
#include "common.h"
