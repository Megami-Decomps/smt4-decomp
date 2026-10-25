/* NON_MATCHING: found outside every function: branched to by FUN_0038b400; not written yet. */
/* romwright 0.5.0 decompilation of FUN_003611d4 for reference (not compiled; its own view of the boundaries):

void FUN_003611d4(void)

{
  char cVar1;
  unsigned int uVar2;
  char acStack_28 [4];
  char acStack_24 [12];
  
  cVar1 = g_appletSleepModuleState;
  if (g_appletSleepModuleState != '\0') {
    g_appletSleepModuleState = '\0';
    FUN_002c130c(3);
    FUN_002c12e0(0);
  }
  while (uVar2 = 0x407, FUN_0014ff04(0x407,0,0,acStack_24,acStack_28,0),
        (uVar2 & (int)acStack_24[0] & (int)acStack_28[0]) == 0) {
    FUN_002bb150(10000000,0);
  }
  if (cVar1 == '\0') {
    return;
  }
  g_appletSleepModuleState = 1;
  FUN_002b5838(4,0,0,0);
                    /* WARNING: Treating indirect jump as return * /
  return;
}
*/
#include "common.h"
