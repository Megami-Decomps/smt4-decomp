/* NON_MATCHING: found outside every function: its address is in FUN_00149ae0's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00161b8c for reference (not compiled; its own view of the boundaries):

void FUN_00161b8c(void)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_r7;
  int iVar3;
  
  iVar2 = *(int *)(DAT_0061a510 + 0x18) + *(int *)(DAT_0061a510 + 0x28) * 0x1c;
  if ((*(unsigned int *)(iVar2 + 0xc) & 2) == 0) {
    *(int *)(DAT_0061a510 + 0x10) = *(int *)(iVar2 + 8) + *(int *)(DAT_0061a510 + 0x10);
  }
  iVar2 = DAT_0061a510;
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  iVar3 = *(int *)(DAT_0061a510 + 0x18) + *(int *)(DAT_0061a510 + 0x28) * 0x1c;
  FUN_0018b600();
  iVar1 = *(int *)(iVar2 + 0x28) + 1;
  *(int *)(iVar2 + 0x28) = iVar1;
  if ((*(code **)(iVar2 + 0x38) != (code *)0x0) &&
     ((*(char *)(iVar3 + 1) != '\0' ||
      ((iVar1 == *(int *)(iVar2 + 0x20) && (*(char *)(iVar2 + 0x3c) != '\0')))))) {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0x38);
    unaff_r7 = iVar1;
  }
  if (*(char *)(iVar3 + 2) != '\0') {
    DAT_0061a482 = 0;
    DAT_0061a488 = 0;
    DAT_0061a481 = 0;
  }
  else if (iVar1 >= *(int *)(iVar2 + 0x20)) {
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
