/* NON_MATCHING: retail invokes svc 0x16 directly; inline assembly and SVC intrinsics are prohibited. */
/* romwright 0.5.0 decompilation of FUN_0019a364 for reference (not compiled; its own view of the boundaries):

void FUN_0019a364(unsigned int *param_1,unsigned int param_2)

{
  software_interrupt(0x16);
  *param_1 = param_2;
  return;
}
*/
#include "common.h"
