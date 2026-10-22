/* NON_MATCHING: found outside every function: branched to by FUN_001eb0c0; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001eb1e8 for reference (not compiled; its own view of the boundaries):

void FUN_001eb1e8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 code *UNRECOVERED_JUMPTABLE)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned short uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int unaff_r4;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  unsigned int uVar9;
  int unaff_r11;
  unsigned int *in_r12;
  unsigned int *puVar10;
  unsigned char uVar11;
  
  while( 1 ) {
    puVar10 = in_r12 + unaff_r5;
    in_r12 = puVar10 + 1;
    uVar9 = *puVar10;
    *(unsigned int *)(param_1 + 0x1b8 + (uVar9 & 0xff) * 4) = unaff_r6 * (uVar9 >> 8);
    if ((unaff_r4 & 1) != 0) break;
    uVar9 = param_4 >> 0x19;
    if (uVar9 == 3) {
      uVar9 = param_4 * 0x100;
      if (!(unsigned char)((unsigned char)(param_4 >> 0x18) & 1)) {
        uVar11 = 7 < param_3;
        iVar4 = param_3 - 8;
        if ((int)param_3 < 8) {
          param_1 = FUN_001e9268();
        }
        uVar3 = *(unsigned short *)(unaff_r11 + (uVar9 >> 0x14) * 2);
        uVar7 = uVar3 & 0xf;
        unaff_r6 = (uVar3 >> 4 & 0x1f) + (unsigned int)*(unsigned char *)(unaff_r11 + 0x2000 + (unsigned int)(uVar3 >> 9));
        param_4 = uVar9 << uVar7;
        if (((uVar3 & 0xf) == 0 && (unsigned char)uVar11) ||
            ((uVar3 & 0xf) != 0 && (unsigned char)((unsigned char)(uVar9 >> (0x20 - uVar7)) & 1))) {
          unaff_r6 = -unaff_r6;
        }
        param_3 = iVar4 - uVar7;
        if (iVar4 < (int)uVar7) {
          param_1 = FUN_001e9268();
        }
        unaff_r5 = uVar3 >> 9 & 0x3f;
        unaff_r4 = (unsigned int)(uVar3 >> 0xf);
      }
      else {
        uVar7 = param_4 << 9;
        if (!CARRY4(uVar9,uVar9)) {
          uVar11 = 8 < param_3;
          iVar4 = param_3 - 9;
          if ((int)param_3 < 9) {
            param_1 = FUN_001e9268();
          }
          uVar3 = *(unsigned short *)(unaff_r11 + (uVar7 >> 0x14) * 2);
          uVar9 = uVar3 & 0xf;
          unaff_r6 = uVar3 >> 4 & 0x1f;
          unaff_r4 = (unsigned int)(uVar3 >> 0xf);
          bVar2 = *(unsigned char *)(unaff_r11 + 0x2080 + unaff_r6 + unaff_r4 * 0x40);
          param_4 = uVar7 << uVar9;
          if (((uVar3 & 0xf) == 0 && (unsigned char)uVar11) ||
              ((uVar3 & 0xf) != 0 && (unsigned char)((unsigned char)(uVar7 >> (0x20 - uVar9)) & 1))) {
            unaff_r6 = -unaff_r6;
          }
          param_3 = iVar4 - uVar9;
          if (iVar4 < (int)uVar9) {
            param_1 = FUN_001e9268();
          }
          unaff_r5 = (uVar3 >> 9 & 0x3f) + (unsigned int)bVar2;
        }
        else {
          iVar4 = param_3 - 9;
          if ((int)param_3 < 9) {
            param_1 = FUN_001e9268();
          }
          unaff_r4 = uVar7 >> 0x1f;
          unaff_r5 = (uVar7 & 0x7fffffff) >> 0x19;
          iVar6 = uVar7 << 7;
          iVar5 = iVar4 - 7;
          if (iVar4 < 7) {
            param_1 = FUN_001e9268();
          }
          unaff_r6 = iVar6 >> 0x14;
          param_4 = iVar6 << 0xc;
          param_3 = iVar5 - 0xc;
          if (iVar5 < 0xc) {
            param_1 = FUN_001e9268();
          }
        }
      }
    }
    else {
      uVar3 = *(unsigned short *)(unaff_r11 + (param_4 >> 0x14) * 2);
      uVar8 = uVar3 & 0xf;
      unaff_r6 = uVar3 >> 4 & 0x1f;
      uVar7 = param_4 >> (0x20 - uVar8);
      param_4 = param_4 << uVar8;
      if (((uVar3 & 0xf) == 0 && 2 < uVar9) || ((uVar3 & 0xf) != 0 && (unsigned char)((unsigned char)uVar7 & 1))) {
        unaff_r6 = -unaff_r6;
      }
      uVar9 = param_3 - uVar8;
      bVar1 = (int)param_3 < (int)uVar8;
      param_3 = uVar9;
      if (bVar1) {
        param_1 = FUN_001e9268();
        param_3 = uVar9;
      }
      unaff_r5 = uVar3 >> 9 & 0x3f;
      unaff_r4 = (unsigned int)(uVar3 >> 0xf);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001eb20c. Too many branches * /
                    /* WARNING: Treating indirect jump as call * /
  (*UNRECOVERED_JUMPTABLE)();
  return;
}
*/
#include "common.h"
