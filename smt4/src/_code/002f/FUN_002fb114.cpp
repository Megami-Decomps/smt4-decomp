/* NON_MATCHING: fragment of a larger function (cmp r0,#240 and conditional return; valid case falls through). */
/* romwright 0.5.0 decompilation of FUN_002fb114 for reference (not compiled; its own view of the boundaries):

/* WARNING: Control flow encountered bad instruction data * /
/* WARNING: Removing unreachable block (ram,0x002bfc3a) * /
/* WARNING: Removing unreachable block (ram,0x002bfc3e) * /
/* WARNING: Removing unreachable block (ram,0x002bfc46) * /

void FUN_002fb114(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int unaff_r5;
  int unaff_r6;
  unsigned short *unaff_r8;
  unsigned short in_lr;
  unsigned int in_fpscr;
  
  if (param_1 < 0xf0) {
    return;
  }
  if ((param_1 < 0x14b) &&
     ((uVar1 = 0xff, param_1 < 0x137 || (uVar1 = (0x136 - param_1) * 0x20 + 0xff, -1 < (int)uVar1)))
     ) {
    FUN_0024692c(uVar1 & 0xff);
    iVar2 = param_1 - 0xf0;
    if (5 < iVar2) {
      iVar2 = 5;
    }
    iVar2 = (iVar2 * 0xf0) / 5;
    if (iVar2 < 0xf0) {
      iVar3 = (0xf0 - iVar2) / 2;
    }
    else {
      iVar3 = 0;
    }
    FUN_002b0750(2,10,37000,0,iVar3,400,iVar2,0xb);
    param_1 = param_1 - 0xf5;
    if (8 < param_1) {
      param_1 = 8;
    }
    iVar2 = (int)(param_1 * 0xf0 + ((unsigned int)(param_1 * 0xf0 >> 0x1f) >> 0x1d)) >> 3;
    if (iVar2 < 0xf0) {
      iVar3 = (0xf0 - iVar2) / 2;
    }
    else {
      iVar3 = 0;
    }
    FUN_002b0750(2,10,0x9089,0,iVar3,400,iVar2,0xb);
    VectorUnsignedToFloat(0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    if (*(int **)(unaff_r6 + 0x1c) == (int *)0x0) {
      *unaff_r8 = in_lr;
      software_interrupt(0x3ae28d);
      software_interrupt(0x37e28d);
      software_interrupt(0x34e28d);
                    /* WARNING: Bad instruction - Truncating control flow here * /
      halt_baddata();
    }
    if (**(int **)(unaff_r6 + 0x1c) == unaff_r5 + 0x18) {
                    /* WARNING: Bad instruction - Truncating control flow here * /
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here * /
    halt_baddata();
  }
  return;
}
*/
#include "common.h"
