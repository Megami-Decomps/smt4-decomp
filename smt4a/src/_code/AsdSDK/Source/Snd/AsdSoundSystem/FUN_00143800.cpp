/* NON_MATCHING: publishes the callback after an explicit CP15 data-memory barrier; no permitted barrier implementation is provided. */
/* romwright 0.5.0 decompilation of FUN_00143800 for reference (not compiled; its own view of the boundaries):

void FUN_00143800(void)

{
  int iVar1;
  
  FUN_00188b60(&DAT_0063f4f0);
  iVar1 = FUN_001b1f04();
  *(unsigned int *)(iVar1 + 0x1ec) = 0;
  coproc_moveto_Data_Memory_Barrier(0);
  *(code **)(iVar1 + 0x1e8) = FUN_00154320;
  DAT_0059dba8 = 0x14;
  DAT_0063f4fd = 1;
  return;
}
*/
#include "common.h"
