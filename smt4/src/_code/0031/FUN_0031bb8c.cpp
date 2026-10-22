/* NON_MATCHING: tail target 0x00244ef4 has no recovered symbol; it consumes option bits 17 through 21. */
/* romwright 0.5.0 decompilation of FUN_0031bb8c for reference (not compiled; its own view of the boundaries):

unsigned int FUN_0031bb8c(void)

{
  unsigned short uVar1;
  int iVar2;
  
  iVar2 = FUN_002b6b20();
  uVar1 = *(unsigned short *)(iVar2 + 0x606);
  iVar2 = FUN_002b6b20();
  iVar2 = FUN_002b6a54((int)*(short *)(iVar2 + 0x604),uVar1);
  switch((*(unsigned int *)(iVar2 + 8) & 0x3fffff) >> 0x11) {
  case 0:
    return 0x3ef;
  case 1:
    return 0x3f0;
  case 2:
    return 1000;
  case 3:
    return 0x3e9;
  case 4:
    return 0x3ea;
  case 5:
    return 0x3eb;
  case 6:
    return 0x3ed;
  case 7:
    return 0x3ee;
  default:
    return 0;
  case 0x11:
    return 0x3ec;
  }
}
*/
#include "common.h"
