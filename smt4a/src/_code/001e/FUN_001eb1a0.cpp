/* NON_MATCHING: found outside every function: called by FUN_001e8f34; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001eb1a0 for reference (not compiled; its own view of the boundaries):

void FUN_001eb1a0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned char bVar1;
  unsigned short uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned int *in_r12;
  unsigned int *puVar11;
  unsigned char uVar12;
  
  iVar10 = *(int *)(param_1 + 0x3b8);
  do {
    uVar8 = param_4 >> 0x19;
    if (uVar8 == 3) {
      uVar8 = param_4 * 0x100;
      if (!(unsigned char)((unsigned char)(param_4 >> 0x18) & 1)) {
        uVar12 = 7 < param_3;
        iVar3 = param_3 - 8;
        if ((int)param_3 < 8) {
          param_1 = FUN_001e9268();
        }
        uVar2 = *(unsigned short *)(iVar10 + (uVar8 >> 0x14) * 2);
        uVar7 = uVar2 & 0xf;
        uVar9 = (uVar2 >> 4 & 0x1f) + (unsigned int)*(unsigned char *)(iVar10 + 0x2000 + (unsigned int)(uVar2 >> 9));
        param_4 = uVar8 << uVar7;
        if (((uVar2 & 0xf) == 0 && (unsigned char)uVar12) ||
            ((uVar2 & 0xf) != 0 && (unsigned char)((unsigned char)(uVar8 >> (0x20 - uVar7)) & 1))) {
          uVar9 = -uVar9;
        }
        uVar5 = iVar3 - uVar7;
        if (iVar3 < (int)uVar7) {
          param_1 = FUN_001e9268();
        }
        uVar8 = uVar2 >> 9 & 0x3f;
        uVar7 = (unsigned int)(uVar2 >> 0xf);
      }
      else {
        uVar5 = param_4 << 9;
        if (!CARRY4(uVar8,uVar8)) {
          uVar12 = 8 < param_3;
          iVar3 = param_3 - 9;
          if ((int)param_3 < 9) {
            param_1 = FUN_001e9268();
          }
          uVar2 = *(unsigned short *)(iVar10 + (uVar5 >> 0x14) * 2);
          uVar8 = uVar2 & 0xf;
          uVar9 = uVar2 >> 4 & 0x1f;
          uVar7 = (unsigned int)(uVar2 >> 0xf);
          bVar1 = *(unsigned char *)(iVar10 + 0x2080 + uVar9 + uVar7 * 0x40);
          param_4 = uVar5 << uVar8;
          if (((uVar2 & 0xf) == 0 && (unsigned char)uVar12) ||
              ((uVar2 & 0xf) != 0 && (unsigned char)((unsigned char)(uVar5 >> (0x20 - uVar8)) & 1))) {
            uVar9 = -uVar9;
          }
          uVar5 = iVar3 - uVar8;
          if (iVar3 < (int)uVar8) {
            param_1 = FUN_001e9268();
          }
          uVar8 = (uVar2 >> 9 & 0x3f) + (unsigned int)bVar1;
        }
        else {
          iVar3 = param_3 - 9;
          if ((int)param_3 < 9) {
            param_1 = FUN_001e9268();
          }
          uVar7 = uVar5 >> 0x1f;
          uVar8 = (uVar5 & 0x7fffffff) >> 0x19;
          iVar6 = uVar5 << 7;
          iVar4 = iVar3 - 7;
          if (iVar3 < 7) {
            param_1 = FUN_001e9268();
          }
          uVar9 = iVar6 >> 0x14;
          param_4 = iVar6 << 0xc;
          uVar5 = iVar4 - 0xc;
          if (iVar4 < 0xc) {
            param_1 = FUN_001e9268();
          }
        }
      }
    }
    else {
      uVar2 = *(unsigned short *)(iVar10 + (param_4 >> 0x14) * 2);
      uVar7 = uVar2 & 0xf;
      uVar9 = uVar2 >> 4 & 0x1f;
      uVar5 = param_4 >> (0x20 - uVar7);
      param_4 = param_4 << uVar7;
      if (((uVar2 & 0xf) == 0 && 2 < uVar8) || ((uVar2 & 0xf) != 0 && (unsigned char)((unsigned char)uVar5 & 1))) {
        uVar9 = -uVar9;
      }
      uVar5 = param_3 - uVar7;
      if ((int)param_3 < (int)uVar7) {
        param_1 = FUN_001e9268();
      }
      uVar8 = uVar2 >> 9 & 0x3f;
      uVar7 = (unsigned int)(uVar2 >> 0xf);
    }
    puVar11 = in_r12 + uVar8;
    in_r12 = puVar11 + 1;
    uVar8 = *puVar11;
    *(unsigned int *)(param_1 + 0x1b8 + (uVar8 & 0xff) * 4) = uVar9 * (uVar8 >> 8);
    param_3 = uVar5;
  } while (uVar7 == 0);
                    /* WARNING: Treating indirect jump as return * /
  return;
}
*/
#include "common.h"
