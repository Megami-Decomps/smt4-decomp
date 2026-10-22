/* NON_MATCHING: found outside every function: branched to by FUN_001e4ba0; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001e4ac0 for reference (not compiled; its own view of the boundaries):

void FUN_001e4ac0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 code *UNRECOVERED_JUMPTABLE)

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
  int unaff_r11;
  unsigned int *in_r12;
  unsigned int *puVar10;
  unsigned char uVar11;
  
  do {
    uVar5 = param_4 * 0x100;
    if (!(unsigned char)((unsigned char)(param_4 >> 0x18) & 1)) {
      uVar11 = 7 < param_3;
      iVar3 = param_3 - 8;
      if ((int)param_3 < 8) {
        param_1 = FUN_001e2c68();
      }
      uVar2 = *(unsigned short *)(unaff_r11 + (uVar5 >> 0x14) * 2);
      uVar7 = uVar2 & 0xf;
      uVar9 = (uVar2 >> 4 & 0x1f) + (unsigned int)*(unsigned char *)(unaff_r11 + 0x2000 + (unsigned int)(uVar2 >> 9));
      param_4 = uVar5 << uVar7;
      if (((uVar2 & 0xf) == 0 && (unsigned char)uVar11) ||
          ((uVar2 & 0xf) != 0 && (unsigned char)((unsigned char)(uVar5 >> (0x20 - uVar7)) & 1))) {
        uVar9 = -uVar9;
      }
      param_3 = iVar3 - uVar7;
      if (iVar3 < (int)uVar7) {
        param_1 = FUN_001e2c68();
      }
      uVar8 = uVar2 >> 9 & 0x3f;
      uVar5 = (unsigned int)(uVar2 >> 0xf);
    }
    else {
      uVar7 = param_4 << 9;
      if (!CARRY4(uVar5,uVar5)) {
        uVar11 = 8 < param_3;
        iVar3 = param_3 - 9;
        if ((int)param_3 < 9) {
          param_1 = FUN_001e2c68();
        }
        uVar2 = *(unsigned short *)(unaff_r11 + (uVar7 >> 0x14) * 2);
        uVar8 = uVar2 & 0xf;
        uVar9 = uVar2 >> 4 & 0x1f;
        uVar5 = (unsigned int)(uVar2 >> 0xf);
        bVar1 = *(unsigned char *)(unaff_r11 + 0x2080 + uVar9 + uVar5 * 0x40);
        param_4 = uVar7 << uVar8;
        if (((uVar2 & 0xf) == 0 && (unsigned char)uVar11) ||
            ((uVar2 & 0xf) != 0 && (unsigned char)((unsigned char)(uVar7 >> (0x20 - uVar8)) & 1))) {
          uVar9 = -uVar9;
        }
        param_3 = iVar3 - uVar8;
        if (iVar3 < (int)uVar8) {
          param_1 = FUN_001e2c68();
        }
        uVar8 = (uVar2 >> 9 & 0x3f) + (unsigned int)bVar1;
      }
      else {
        iVar3 = param_3 - 9;
        if ((int)param_3 < 9) {
          param_1 = FUN_001e2c68();
        }
        uVar5 = uVar7 >> 0x1f;
        uVar8 = (uVar7 & 0x7fffffff) >> 0x19;
        iVar6 = uVar7 << 7;
        iVar4 = iVar3 - 7;
        if (iVar3 < 7) {
          param_1 = FUN_001e2c68();
        }
        uVar9 = iVar6 >> 0x14;
        param_4 = iVar6 << 0xc;
        param_3 = iVar4 - 0xc;
        if (iVar4 < 0xc) {
          param_1 = FUN_001e2c68();
        }
      }
    }
    while( 1 ) {
      puVar10 = in_r12 + uVar8;
      in_r12 = puVar10 + 1;
      uVar7 = *puVar10;
      *(unsigned int *)(param_1 + 0x1b8 + (uVar7 & 0xff) * 4) = uVar9 * (uVar7 >> 8);
      if (uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x001e4c0c. Too many branches * /
                    /* WARNING: Treating indirect jump as call * /
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      uVar5 = param_4 >> 0x19;
      if (uVar5 == 3) break;
      uVar2 = *(unsigned short *)(unaff_r11 + (param_4 >> 0x14) * 2);
      uVar8 = uVar2 & 0xf;
      uVar9 = uVar2 >> 4 & 0x1f;
      uVar7 = param_4 >> (0x20 - uVar8);
      param_4 = param_4 << uVar8;
      if (((uVar2 & 0xf) == 0 && 2 < uVar5) || ((uVar2 & 0xf) != 0 && (unsigned char)((unsigned char)uVar7 & 1))) {
        uVar9 = -uVar9;
      }
      uVar7 = param_3 - uVar8;
      if ((int)param_3 < (int)uVar8) {
        param_1 = FUN_001e2c68();
      }
      uVar8 = uVar2 >> 9 & 0x3f;
      uVar5 = (unsigned int)(uVar2 >> 0xf);
      param_3 = uVar7;
    }
  } while( 1 );
}
*/
#include "common.h"
