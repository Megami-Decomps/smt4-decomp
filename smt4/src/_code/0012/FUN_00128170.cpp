/* NON_MATCHING: found outside every function: its address is in FUN_00128110's literal pool; not written yet. */
/* romwright 0.5.0 decompilation of FUN_00128170 for reference (not compiled; its own view of the boundaries):

unsigned int FUN_00128170(void)

{
  code *pcVar1;
  unsigned int *puVar2;
  unsigned short *puVar3;
  unsigned int extraout_r1;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  int uStack_a8;
  unsigned int uStack_a4;
  unsigned char *puStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  int uStack_6c;
  unsigned int uStack_68;
  unsigned short auStack_64 [21];
  unsigned short uStack_3a;
  int uStack_38;
  unsigned int uStack_34;
  int uStack_30;
  unsigned short uStack_2c;
  unsigned short uStack_2a;
  unsigned int *puStack_28;
  int iStack_24;
  unsigned short uStack_20;
  unsigned char uStack_1e;
  unsigned char uStack_1d;
  int uStack_18;
  unsigned int uStack_14;
  
  FUN_002c52f4();
  uVar4 = DAT_00471b60;
  FUN_002ad888();
  FUN_002ad80c(uVar4,extraout_r1,0x14,0);
  if ((int)uVar4 >= 0) {
    FUN_002c567c(&uStack_a8);
    uStack_18 = uStack_a8;
    uStack_14 = uStack_a4;
    FUN_002ad66c(&uStack_6c,&uStack_18);
    uStack_78 = uStack_6c;
    puVar2 = &uStack_38;
    uStack_74 = uStack_68 & 0xffffff;
    uStack_70 = 0;
    FUN_0013a5b0(puVar2,&uStack_78);
    FUN_001398dc();
    uStack_2a = 0;
    puStack_28 = puVar2;
    FUN_001398c0(&uStack_68,0x18,uStack_38,uStack_34);
    uVar4 = uStack_68 & 0xffff;
    iVar5 = 0;
    iVar6 = 0xb;
    puVar3 = (unsigned short *)&uStack_68;
    do {
      uVar4 = uVar4 + uStack_68._2_2_;
      uStack_68._2_2_ = puVar3[3];
      iVar6 = iVar6 - 1;
      iVar5 = iVar5 + (unsigned int)puVar3[2];
      puVar3 = puVar3 + 2;
    } while (iVar6 != 0);
    iStack_24 = uVar4 + iVar5 + (unsigned int)uStack_3a;
    uStack_20 = (unsigned short)uStack_78;
    uStack_1e = (unsigned char)uStack_74;
    uStack_1d = uStack_74._1_1_;
    uStack_30 = 0x4f00;
    uStack_2c = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    puStack_98 = &DAT_00420b78;
    uStack_94 = 0x420bf0;
    FUN_001398f8(&puStack_98);
    FUN_002bb6c4(&puStack_98,&uStack_30);
    uVar4 = 0;
    if ((uStack_90 & 0xfffffffe) != 0) {
      if ((uStack_90 & 1) != 0) {
        FUN_002c52f8();
      }
      uVar4 = FUN_002b90b0(uStack_90 & 0xfffffffe);
    }
  }
  else if (((((uVar4 & 0x3fc00) != 0x4400) || ((uVar4 & 0x3ff) < 0xb4)) || (199 < (uVar4 & 0x3ff)))
          && ((int)uVar4 < 0)) {
    DAT_004d4200 = 5;
    DAT_004d4201 = 0;
    DAT_004d4202 = 0xbca3;
    DAT_004d4208 = 0x12831c;
    DAT_004d4204 = uVar4;
    FUN_002ad4f8();
    pcVar1 = DAT_0044e450;
    if (DAT_0044e450 != (code *)0x0) {
      DAT_0044e450 = (code *)0x0;
      (*pcVar1)(0,0,0,0);
    }
    software_interrupt(0x3c);
    return 0;
  }
  return uVar4;
}
*/
#include "common.h"
