/* NON_MATCHING: found outside every function: its address is in FUN_003efc8c's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00378e28 for reference (not compiled; its own view of the boundaries):

void FUN_00378e28(unsigned int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  *param_1 = &DAT_00421a60;
  if (*(char *)((int)param_1 + 0x5e) != '\0') {
    *(unsigned char *)((int)param_1 + 0x5e) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    uVar1 = (unsigned int)*(unsigned char *)((int)param_1 + 0x5d);
    if (uVar1 != 0) {
      iVar2 = 0;
      do {
        uVar1 = uVar1 - 1;
        param_1[iVar2 + 9] = 0;
        iVar2 = iVar2 + 1;
      } while (uVar1 != 0);
    }
  }
  if (param_1[7] != 0) {
    param_1[7] = 0;
  }
  return;
}
*/
#include "common.h"
