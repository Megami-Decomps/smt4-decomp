/* NON_MATCHING: fragment of a larger function (ARM-to-Thumb entry veneer continues at 0x2c5d5c). */
/* romwright 0.5.0 decompilation of FUN_002c5d54 for reference (not compiled; its own view of the boundaries):

void FUN_002c5d54(int param_1,unsigned char param_2)

{
  int unaff_r4;
  int unaff_r6;
  unsigned int *in_stack_0000003c;
  unsigned int in_stack_00000060;
  
  *(int *)param_1 = param_1;
  while (param_1 = param_1 + 1, param_1 < unaff_r6) {
    *(unsigned char *)(unaff_r4 + param_1) = param_2;
  }
  *(unsigned char *)(unaff_r4 + unaff_r6) = 0;
  in_stack_0000003c[2] = in_stack_00000060;
  *in_stack_0000003c = 0;
  in_stack_0000003c[1] = unaff_r6;
  return;
}
*/
#include "common.h"
