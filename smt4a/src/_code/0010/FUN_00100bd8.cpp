/* NON_MATCHING: found outside every function: the Thumb body of the ARM entry stub FUN_00100bd0; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00100bd8 for reference (not compiled; its own view of the boundaries):

/* WARNING: Control flow encountered bad instruction data * /

unsigned int FUN_00100bd8(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned int unaff_r5;
  unsigned int *unaff_r6;
  char in_NG;
  unsigned char in_ZR;
  unsigned char in_CY;
  char in_OV;
  unsigned char bVar5;
  unsigned int in_cr11;
  
  if (!in_ZR) {
    coprocessor_loadlong(5,in_cr11,param_3 + 0x3dc);
    bVar5 = in_CY;
  }
  else {
    register0x00000054 = *(BADSPACEBASE **)(param_3 + 8);
    uVar2 = unaff_r5 << (unaff_r5 & 0xff);
    bVar5 = uVar2 < param_3 || param_3 - uVar2 < (unsigned int)in_CY;
    in_OV = SBORROW4(param_3,uVar2) != SBORROW4(param_3 - uVar2,(unsigned int)!in_CY);
    in_NG = (int)(param_3 - (uVar2 + !in_CY)) < 0;
    in_ZR = param_3 == uVar2 + !in_CY;
  }
  if (!in_ZR && in_NG == in_OV) {
    return 0;
  }
  if (bVar5) {
    FUN_003077e8();
    iVar1 = FUN_002f1370();
    for (uVar2 = *unaff_r6; uVar2 != unaff_r6[1]; uVar2 = uVar2 + 4) {
    }
    FUN_002e6e14();
    iVar3 = *(int *)register0x00000054;
    *unaff_r6 = unaff_r5;
    iVar4 = *(int *)((int)register0x00000054 + 4);
    unaff_r6[1] = iVar1 * 4 + unaff_r5 + iVar3;
    unaff_r6[2] = iVar4 + unaff_r5;
    return iVar4 + unaff_r5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here * /
  halt_baddata();
}
*/
#include "common.h"
