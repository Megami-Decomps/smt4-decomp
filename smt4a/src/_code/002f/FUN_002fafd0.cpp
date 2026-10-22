/* NON_MATCHING: ARM-to-Thumb entry stub (add ip,pc,#1; bx ip), kept separate by repository convention. */
/* romwright 0.5.0 decompilation of FUN_002fafd0 for reference (not compiled; its own view of the boundaries):

unsigned int * FUN_002fafd0(unsigned int *param_1,unsigned int param_2)

{
  FUN_002eca44();
  *param_1 = 0x55970c;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_00300820(param_1,param_2);
  return param_1;
}
*/
#include "common.h"
