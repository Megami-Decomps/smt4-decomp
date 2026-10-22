/* NON_MATCHING: retail invokes svc 0x17 directly; inline assembly and SVC intrinsics are prohibited. */
/* romwright 0.5.0 decompilation of FUN_002b5820 for reference (not compiled; its own view of the boundaries):

void FUN_002b5820(unsigned int *param_1,unsigned int param_2)

{
  software_interrupt(0x17);
  *param_1 = param_2;
  return;
}
*/
#include "common.h"
