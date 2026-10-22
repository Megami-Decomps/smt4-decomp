/* NON_MATCHING: found outside every function: branched to by FUN_005144a4; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0042d2fc for reference (not compiled; its own view of the boundaries):

void FUN_0042d2fc(int *param_1)

{
  int iVar1;
  unsigned int unaff_r4;
  unsigned int in_lr;
  unsigned char bVar2;
  
  FUN_002f5970();
  if ((int *)*param_1 == param_1) {
    piRam00643318 = (int *)0x0;
  }
  else {
    if (piRam00643318 == param_1) {
      piRam00643318 = (int *)piRam00643318[1];
    }
    *(int *)param_1[1] = *param_1;
    *(int *)(*param_1 + 4) = param_1[1];
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iRam00643324 = iRam00643324 - 1;
  if (iRam00643324 != 0) {
    return;
  }
  uRam00643320 = 0;
  do {
    iVar1 = -iRam0064331c;
    bVar2 = (unsigned char)hasExclusiveAccess(0x64331c);
  } while (!bVar2);
  bVar2 = iRam0064331c != -1;
  iRam0064331c = iVar1;
  if (bVar2 && 0 < iVar1) {
    FUN_001b4a58(DAT_005c0ad8,0x64331c,0,1,0,0,unaff_r4,in_lr);
  }
  return;
}
*/
#include "common.h"
