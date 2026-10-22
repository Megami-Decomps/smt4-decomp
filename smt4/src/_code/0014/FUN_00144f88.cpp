/* NON_MATCHING: retail is svc #9 (ExitThread), then bx lr; implementing this SDK syscall requires the prohibited __svc/__asm mechanism. */
/* romwright 0.5.0 decompilation of FUN_00144f88 for reference (not compiled; its own view of the boundaries):

void FUN_00144f88(void)

{
  software_interrupt(9);
  return;
}
*/
#include "common.h"
