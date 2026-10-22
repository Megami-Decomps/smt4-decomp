/* NON_MATCHING: Graphics command-byte accounting is a complete entry, but its tail branches to 0x2b39f0, inside FUN_002b39ec at +4 after a linker-NOP entry stub; that body still needs carving. */
/* romwright 0.5.0 decompilation of FUN_00123ab0 for reference (not compiled; its own view of the boundaries):

/* WARNING: Control flow encountered bad instruction data * /

void FUN_00123ab0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(DAT_004c6330 + 0x18) + *(int *)(DAT_004c6330 + 0x28) * 0x1c;
  if ((*(unsigned int *)(iVar2 + 0xc) & 2) == 0) {
    *(int *)(DAT_004c6330 + 0x10) = *(int *)(iVar2 + 8) + *(int *)(DAT_004c6330 + 0x10);
  }
  iVar2 = DAT_004c6330;
  iVar3 = 0;
  iVar4 = *(int *)(DAT_004c6330 + 0x18) + *(int *)(DAT_004c6330 + 0x28) * 0x1c;
  FUN_0013b608();
  iVar1 = *(int *)(iVar2 + 0x28) + 1;
  *(int *)(iVar2 + 0x28) = iVar1;
  if ((*(int *)(iVar2 + 0x38) != 0) &&
     ((*(char *)(iVar4 + 1) != '\0' ||
      ((iVar1 == *(int *)(iVar2 + 0x20) && (*(char *)(iVar2 + 0x3c) != '\0')))))) {
    iVar3 = *(int *)(iVar2 + 0x38);
  }
  if (*(char *)(iVar4 + 2) != '\0') {
    DAT_004c62a2 = 0;
    DAT_004c62a8 = 0;
    DAT_004c62a1 = 0;
  }
  else if (iVar1 >= *(int *)(iVar2 + 0x20)) {
    DAT_004c62a1 = 0;
  }
  else {
    FUN_002ba2b8();
  }
  FUN_0013b618();
  if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here * /
    halt_baddata();
  }
  return;
}
*/
#include "common.h"
