/* NON_MATCHING: found outside every function: branched to by FUN_00155a94; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001590c8 for reference (not compiled; its own view of the boundaries):

unsigned long long FUN_001590c8(int param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  
  if (param_3 >> 0x10 == 0) {
    param_3 = param_3 << 0x10;
    iVar1 = 0x10;
  }
  else {
    iVar1 = 0;
  }
  if (param_3 >> 0x18 == 0) {
    param_3 = param_3 << 8;
    iVar1 = iVar1 + 8;
  }
  if (param_3 >> 0x1c == 0) {
    param_3 = param_3 << 4;
    iVar1 = iVar1 + 4;
  }
  if (param_3 >> 0x1e == 0) {
    param_3 = param_3 << 2;
    iVar1 = iVar1 + 2;
  }
  if (-1 < (int)param_3) {
    param_3 = param_3 << 1;
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(param_3,(param_1 - 0x1f) - iVar1);
}
*/
#include "common.h"
