/* NON_MATCHING: retail invokes svc 0x01 directly; inline assembly and SVC intrinsics are prohibited. */
/* romwright 0.5.0 decompilation of svcControlMemory for reference (not compiled; its own view of the boundaries):

unsigned int
svcControlMemory(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5)

{
  software_interrupt(1);
  *param_1 = param_2;
  return param_5;
}
*/
#include "common.h"
