/* NON_MATCHING: retail invokes svc 0x17 directly; inline assembly and SVC intrinsics are prohibited. */
/* romwright 0.5.0 decompilation of svcCreateEvent for reference (not compiled; its own view of the boundaries):

void svcCreateEvent(unsigned int *param_1,unsigned int param_2)

{
  software_interrupt(0x17);
  *param_1 = param_2;
  return;
}
*/
#include "common.h"
