/* NON_MATCHING: linker erased the tail call after loading battle message state; target is missing from this retail unit. */
/* romwright 0.5.0 decompilation of FUN_002e48a8 for reference (not compiled; its own view of the boundaries):

void FUN_002e48a8(void)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int unaff_r4;
  
  iVar1 = FUN_0014aa78();
  uVar2 = *(unsigned int *)(iVar1 + 0x226c);
  uVar3 = FUN_00236038(0);
  uVar4 = FUN_002deb84();
  if (DAT_0057f58c != 0) {
    *(unsigned char *)(DAT_0057f58c + 0x19c5) = 0x15;
  }
  FUN_0021bdac(uVar2,uVar3,uVar4,6,0,0,unaff_r4);
  return;
}
*/
#include "common.h"
