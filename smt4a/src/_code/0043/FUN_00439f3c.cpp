/* NON_MATCHING: found outside every function: branched to by FUN_00461b68; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00439f3c for reference (not compiled; its own view of the boundaries):

void FUN_00439f3c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x68);
  FUN_002f5970(iVar1 + 0x70);
  iVar2 = *(int *)(iVar1 + 0x30);
  do {
    if (iVar2 == 0) {
      FUN_002f59d8(iVar1 + 0x70);
      return;
    }
    if (iVar2 == param_2) {
      if (*(char *)(param_2 + 0x11) != '\x03') {
        *(unsigned char *)(iVar1 + 0x6f) = *(unsigned char *)(iVar1 + 0x6f) | 2;
      }
      FUN_002f59d8(iVar1 + 0x70);
      return;
    }
    iVar2 = *(int *)(iVar2 + 0x14);
  } while( 1 );
}
*/
#include "common.h"
