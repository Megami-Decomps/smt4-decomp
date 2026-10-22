/* NON_MATCHING: tail call supplies a PC-relative literal string outside the assigned target object; needs literal extent recovery. */
/* romwright 0.5.0 decompilation of FUN_0047f288 for reference (not compiled; its own view of the boundaries):

void FUN_0047f288(void)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = FUN_0014aa78();
  uVar2 = FUN_0014af98((int)*(short *)(iVar1 + 0x2000));
  FUN_001628c0(0x47f2cc,uVar2,2,0);
  return;
}
*/
#include "common.h"
