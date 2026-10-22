/* NON_MATCHING: found outside every function: its address is in FUN_00149ae0's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00161c5c for reference (not compiled; its own view of the boundaries):

void FUN_00161c5c(void)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_r7;
  int iVar3;
  
  iVar1 = DAT_0061a510;
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  iVar3 = *(int *)(DAT_0061a510 + 0x18) + *(int *)(DAT_0061a510 + 0x28) * 0x1c;
  FUN_0018b600();
  iVar2 = *(int *)(iVar1 + 0x28) + 1;
  *(int *)(iVar1 + 0x28) = iVar2;
  if ((*(code **)(iVar1 + 0x38) != (code *)0x0) &&
     ((*(char *)(iVar3 + 1) != '\0' ||
      ((iVar2 == *(int *)(iVar1 + 0x20) && (*(char *)(iVar1 + 0x3c) != '\0')))))) {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x38);
    unaff_r7 = iVar2;
  }
  if (*(char *)(iVar3 + 2) != '\0') {
    DAT_0061a482 = 0;
    DAT_0061a488 = 0;
    DAT_0061a481 = 0;
  }
  else if (iVar2 >= *(int *)(iVar1 + 0x20)) {
    DAT_0061a481 = 0;
  }
  else {
    FUN_001963e0();
  }
  FUN_0018b610();
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0017e57c. Too many branches * /
                    /* WARNING: Treating indirect jump as call * /
    (*UNRECOVERED_JUMPTABLE)(unaff_r7);
    return;
  }
  return;
}
*/
#include "common.h"
