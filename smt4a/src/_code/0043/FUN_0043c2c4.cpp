/* NON_MATCHING: found outside every function: branched to by FUN_00473d54; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0043c2c4 for reference (not compiled; its own view of the boundaries):

void FUN_0043c2c4(void)

{
  char cVar1;
  unsigned int uVar2;
  char acStack_28 [4];
  char acStack_24 [12];
  
  cVar1 = DAT_005891f4;
  if (DAT_005891f4 != '\0') {
    DAT_005891f4 = '\0';
    FUN_00170484(3);
    FUN_001713f8(0);
  }
  while (uVar2 = 0x407, FUN_001b03dc(0x407,0,0,acStack_24,acStack_28,0),
        (uVar2 & (int)acStack_24[0] & (int)acStack_28[0]) == 0) {
    FUN_001bcd48(10000000,0);
  }
  if (cVar1 == '\0') {
    return;
  }
  DAT_005891f4 = 1;
  FUN_00170d8c(4,0,0,0);
                    /* WARNING: Treating indirect jump as return * /
  return;
}
*/
#include "common.h"
