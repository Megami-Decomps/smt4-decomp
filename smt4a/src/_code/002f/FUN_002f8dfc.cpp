/* NON_MATCHING: found outside every function: its address is in FUN_004ab10c's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_002f8dfc for reference (not compiled; its own view of the boundaries):

int FUN_002f8dfc(unsigned int param_1)

{
  int iVar1;
  unsigned int in_cr0;
  unsigned int in_cr13;
  unsigned int in_cr14;
  
  iVar1 = coprocessor_movefromRt(10,5,0,in_cr13,in_cr0);
  coprocessor_movefromRt(0xf,0,0,in_cr0,in_cr14);
  if (*(char *)(iVar1 + 4) != '\0') {
    FUN_001212d2(iVar1,param_1 >> 8,0);
    return iVar1;
  }
  return 0;
}
*/
#include "common.h"
