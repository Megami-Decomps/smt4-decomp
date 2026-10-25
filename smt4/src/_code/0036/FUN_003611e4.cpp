/* NON_MATCHING: found outside every function: branched to by FUN_003efa54; not written yet. */
/* romwright 0.5.0 decompilation of FUN_003611e4 for reference (not compiled; its own view of the boundaries):

void FUN_003611e4(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    iVar3 = 4;
    uVar1 = uVar2;
    do {
      if ((uVar1 & 0x80) != 0) {
        uVar1 = (uVar1 << 1) ^ 7;
      }
      else {
        uVar1 = uVar1 << 1;
      }
      if ((uVar1 & 0x80) != 0) {
        uVar1 = (uVar1 << 1) ^ 7;
      }
      else {
        uVar1 = uVar1 << 1;
      }
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    *(char *)(param_1 + 1 + uVar2) = (char)uVar1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return;
}
*/
#include "common.h"
