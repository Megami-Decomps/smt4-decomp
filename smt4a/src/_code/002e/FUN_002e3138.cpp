/* NON_MATCHING: kernel syscall wrapper (svc 0x24); matching requires a forbidden syscall intrinsic or assembly. */
/* romwright 0.5.0 decompilation of FUN_002e3138 for reference (not compiled; its own view of the boundaries):

void FUN_002e3138(void)

{
  software_interrupt(0x24);
  return;
}
*/
#include "common.h"
