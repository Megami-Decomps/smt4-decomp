/* NON_MATCHING: deleting destructor in Obj4223c4's vtable needs its native D0 identity to reproduce the member-destructor pointer recovery. */
/* romwright 0.5.0 decompilation of _ZN9Obj4223c4D0Ev for reference (not compiled; its own view of the boundaries):

void _ZN9Obj4223c4D0Ev(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int in_s0;
  
  *param_1 = &DAT_00422484;
  iVar1 = FUN_00263c34(param_1 + 0x157);
  if (iVar1 != 0x55c) {
    iVar1 = FUN_002c38a4(DAT_00465124);
    if ((param_3 & 0x1fffff) != 0) {
      *(unsigned int *)(iVar1 + 0x28) = in_s0;
    }
    return;
  }
  return;
}
*/
#include "common.h"
