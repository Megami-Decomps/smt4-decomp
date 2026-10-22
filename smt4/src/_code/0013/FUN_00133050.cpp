/* NON_MATCHING: found outside every function: branched to by FUN_0010bf44; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00133050 for reference (not compiled; its own view of the boundaries):

int FUN_00133050(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x38) != 0) {
    iVar2 = *(int *)(iVar1 + 0x3c);
    FUN_00141bdc();
    if (iVar2 != -1) {
      if (iVar2 == -1) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 0x38) + *(int *)(*(int *)(iVar1 + 0x38) + 4);
        if (iVar1 != 0) {
          iVar1 = iVar1 + *(int *)(iVar1 + iVar2 * 0xc + 8);
        }
      }
      return iVar1;
    }
  }
  return 0;
}
*/
#include "common.h"
