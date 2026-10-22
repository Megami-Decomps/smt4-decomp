/* NON_MATCHING: found outside every function: branched to by FUN_001df7a8; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001e01b4 for reference (not compiled; its own view of the boundaries):

void FUN_001e01b4(unsigned int *param_1)

{
  short *extraout_r1;
  short *psVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = param_1 + 2;
  iVar6 = param_1[0x73];
  FUN_001dfa2c(*param_1,param_1[1]);
  FUN_001dffd8();
  FUN_001dffd8();
  FUN_001dffd8();
  FUN_001dffd8();
  iVar5 = piVar2[0x6d];
  iVar7 = 0x100;
  psVar1 = extraout_r1;
  do {
    iVar3 = (int)*psVar1 - ((piVar2[7] * piVar2[0x6b] + 0x4000) >> 0xf);
    piVar2[0x6c] = piVar2[0x6b] + ((piVar2[7] * iVar3 + 0x4000) >> 0xf);
    iVar3 = iVar3 - ((piVar2[6] * piVar2[0x6a] + 0x4000) >> 0xf);
    piVar2[0x6b] = piVar2[0x6a] + ((piVar2[6] * iVar3 + 0x4000) >> 0xf);
    iVar3 = iVar3 - ((piVar2[5] * piVar2[0x69] + 0x4000) >> 0xf);
    piVar2[0x6a] = piVar2[0x69] + ((piVar2[5] * iVar3 + 0x4000) >> 0xf);
    iVar3 = iVar3 - ((piVar2[4] * piVar2[0x68] + 0x4000) >> 0xf);
    piVar2[0x69] = piVar2[0x68] + ((piVar2[4] * iVar3 + 0x4000) >> 0xf);
    iVar3 = iVar3 - ((piVar2[3] * piVar2[0x67] + 0x4000) >> 0xf);
    piVar2[0x68] = piVar2[0x67] + ((piVar2[3] * iVar3 + 0x4000) >> 0xf);
    iVar3 = iVar3 - ((piVar2[2] * piVar2[0x66] + 0x4000) >> 0xf);
    piVar2[0x67] = piVar2[0x66] + ((piVar2[2] * iVar3 + 0x4000) >> 0xf);
    iVar3 = iVar3 - ((piVar2[1] * piVar2[0x65] + 0x4000) >> 0xf);
    piVar2[0x66] = piVar2[0x65] + ((piVar2[1] * iVar3 + 0x4000) >> 0xf);
    iVar4 = piVar2[100];
    iVar3 = iVar3 - ((*piVar2 * iVar4 + 0x4000) >> 0xf);
    piVar2[0x65] = iVar4 + ((*piVar2 * iVar3 + 0x4000) >> 0xf);
    piVar2[100] = iVar3;
    iVar5 = iVar3 + ((iVar5 * 0x6e14 + 0x4000) >> 0xf);
    iVar3 = iVar5 * 2;
    if (iVar5 * 2 < -0x8000) {
      iVar3 = -0x8000;
    }
    if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    *psVar1 = (short)iVar3;
    iVar7 = iVar7 - 1;
    psVar1 = (short *)((int)psVar1 + iVar6);
  } while (iVar7 != 0);
  piVar2[0x6d] = iVar5;
  return;
}
*/
#include "common.h"
