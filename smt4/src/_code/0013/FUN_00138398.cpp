/* NON_MATCHING: hardware delay loop contains a real ARM NOP, which cannot be expressed without a forbidden intrinsic. */
/* romwright 0.5.0 decompilation of FUN_00138398 for reference (not compiled; its own view of the boundaries):

void FUN_00138398(int param_1)

{
  unsigned char bVar1;
  int iVar2;
  
  do {
    iVar2 = param_1 - 2;
    bVar1 = 1 < param_1;
    param_1 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}
*/
#include "common.h"
