/* NON_MATCHING: fragment of a larger function (conditional return falls through beyond the assigned unit). */
/* romwright 0.5.0 decompilation of FUN_004d0f48 for reference (not compiled; its own view of the boundaries):

void FUN_004d0f48(unsigned int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int in_fpscr;
  unsigned int auStack_110 [12];
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  char acStack_88 [4];
  char acStack_84 [4];
  char acStack_80 [4];
  char acStack_7c [4];
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  char acStack_68 [4];
  char acStack_64 [4];
  char acStack_60 [4];
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  if (param_2 < 0) {
    return;
  }
  if ((int)DAT_00573970 >= 1) {
    FUN_00180118(DAT_00573970 & 0xffff);
    FUN_00212234();
  }
  else {
    FUN_002e6354(auStack_110,0x84);
    auStack_110[0] = 0;
    auStack_110[1] = 0;
    auStack_110[2] = 0;
    auStack_110[3] = 0;
    auStack_110[4] = 0;
    auStack_110[5] = 0;
    uStack_e0 = 0x3f800000;
    uStack_dc = 0x3f800000;
    if (DAT_005715f8 != '\0') {
      FUN_004bbb74();
      FUN_004bbc4c(auStack_110,param_2,0);
    }
    else {
      uVar2 = FUN_004bb80c(param_2);
      FUN_004bb9c0(auStack_110,uVar2);
    }
    iVar4 = 0;
    iVar1 = FUN_003173c4(3);
    uVar3 = 0;
    do {
      if (auStack_110[uVar3] != 0) {
        FUN_00180118(auStack_110[uVar3] & 0xffff);
        VectorUnsignedToFloat(iVar1 * iVar4,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00212234();
        iVar4 = iVar4 + 1;
      }
      uVar3 = (uVar3 + 1) & 0xffff;
    } while (uVar3 < 6);
    if (DAT_005715f8 == '\0') {
      acStack_88[0] = -0x74;
      acStack_88[1] = 'R';
      acStack_88[2] = -0x70;
      acStack_88[3] = -0x58;
      acStack_84[0] = -0x7e;
      acStack_84[1] = -0x5e;
      acStack_84[2] = -0x7e;
      acStack_84[3] = -0x38;
      acStack_80[0] = -0x7e;
      acStack_80[1] = -0x5e;
      acStack_80[2] = '\0';
      acStack_80[3] = '\0';
      acStack_7c[0] = '\0';
      acStack_7c[1] = '\0';
      acStack_7c[2] = '\0';
      acStack_7c[3] = '\0';
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      acStack_68[0] = -0x74;
      acStack_68[1] = 'R';
      acStack_68[2] = -0x70;
      acStack_68[3] = -0x58;
      acStack_64[0] = -0x7e;
      acStack_64[1] = -0x5e;
      acStack_64[2] = -0x7e;
      acStack_64[3] = -0x17;
      acStack_60[0] = '\0';
      acStack_60[1] = '\0';
      acStack_60[2] = '\0';
      acStack_60[3] = '\0';
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      iVar4 = FUN_004bbbd8(param_2);
      FUN_00212234(acStack_88 + iVar4 * 0x20);
      uVar2 = FUN_004bc850(param_2);
      FUN_00180118();
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      FUN_00100388(&uStack_48,&LAB_004d117c,uVar2);
      VectorUnsignedToFloat(iVar1,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00212234(&uStack_48);
    }
    FUN_00212234(&LAB_004d118c);
    if (0 < DAT_005715fa) {
      FUN_00180118(DAT_005715fa);
      VectorUnsignedToFloat(iVar1,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00212234();
      return;
    }
  }
  return;
}
*/
#include "common.h"
