/* NON_MATCHING: ARM wrapper sets r1 to 5 then enters an inline ARM-to-Thumb veneer at 0x3106a0; continuation handleSetState starts at 0x3106a8. This unit still includes linker-generated veneer instructions. */
/* romwright 0.5.0 decompilation of FUN_00310698 for reference (not compiled; its own view of the boundaries):

void FUN_00310698(int param_1)

{
  unsigned int unaff_r4;
  unsigned int unaff_r6;
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uStack00000000;
  char in_stack_00000004;
  int in_stack_0000000c;
  
  param_1 = param_1 >> 0x20;
  if (param_1 != 0) {
    uVar1 = 0;
    while (uVar1 = uVar1 + 8, uVar1 <= unaff_r6) {
      FUN_0012263e(param_1,in_stack_0000000c + unaff_r4);
      unaff_r4 = unaff_r4 + 1;
    }
  }
  else {
    unaff_r4 = unaff_r6 >> 3;
    FUN_002e7340(uRam00000008,in_stack_0000000c,unaff_r4,iRam0000000c);
    iRam0000000c = iRam0000000c + unaff_r4;
  }
  uVar1 = unaff_r6 & 7;
  if (uVar1 != 0) {
    uVar2 = 0x80;
    uStack00000000 = 0;
    do {
      in_stack_00000004 = '\0';
      FUN_001225f0(param_1,&in_stack_00000004);
      if (in_stack_00000004 != '\0') {
        uStack00000000 = uStack00000000 | uVar2;
      }
      uVar2 = uVar2 >> 1;
      uVar1 = (uVar1 - 1) & 0xff;
    } while (uVar1 != 0);
    *(char *)(in_stack_0000000c + unaff_r4) = (char)uStack00000000;
  }
  return;
}
*/
#include "common.h"
