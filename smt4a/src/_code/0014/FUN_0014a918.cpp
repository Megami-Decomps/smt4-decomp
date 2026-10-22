/* NON_MATCHING: requires inline SVC instruction with multi-register results; inline assembly and syscall intrinsics are forbidden. */
/* romwright 0.5.0 decompilation of FUN_0014a918 for reference (not compiled; its own view of the boundaries):

void FUN_0014a918(unsigned int *param_1,unsigned int param_2)

{
  software_interrupt(0x13);
  *param_1 = param_2;
  return;
}
*/
#include "common.h"
