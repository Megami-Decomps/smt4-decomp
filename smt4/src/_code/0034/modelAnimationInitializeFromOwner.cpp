/* NON_MATCHING: 0x349a14 is a linker-NOP forwarding stub joined to the separate body at 0x349a18; this unit still requires a split at +4 before its initialization body can be matched honestly. */
/* romwright 0.5.0 decompilation of modelAnimationInitializeFromOwner for reference (not compiled; its own view of the boundaries):

void FUN_00349a14(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned char uStack_90;
  unsigned char uStack_8f;
  unsigned char uStack_8e;
  unsigned char uStack_8d;
  unsigned int uStack_8c;
  unsigned char uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned char *apuStack_68 [12];
  unsigned char uStack_38;
  unsigned char uStack_37;
  unsigned char uStack_36;
  unsigned char uStack_35;
  unsigned int uStack_34;
  unsigned char uStack_30;
  unsigned char uStack_2f;
  unsigned char uStack_2e;
  unsigned char uStack_2d;
  unsigned int uStack_2c;
  
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_90 = 0;
  uStack_2f = 1;
  uStack_37 = 1;
  uStack_8f = 1;
  uStack_2e = 0xff;
  uStack_36 = 0xff;
  uStack_8e = 0xff;
  uStack_2d = 0xff;
  uStack_35 = 0xff;
  uStack_8d = 0xff;
  uStack_34 = 0;
  uStack_8c = 0;
  FUN_002c1400(&DAT_0047e554,&uStack_30,&LAB_00349cb4);
  FUN_002c1400(&DAT_0047e554,&uStack_38,&LAB_00349cc4);
  FUN_002c1400(&DAT_0047e554,&uStack_90,&LAB_00349ccc);
  iVar3 = 0;
  uVar1 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  do {
    iVar4 = iVar3 + 1;
    uVar1 = uVar1 + 2;
    apuStack_68[iVar3] = (unsigned char *)0x0;
    iVar3 = iVar3 + 2;
    apuStack_68[iVar4] = (unsigned char *)0x0;
  } while (uVar1 < 0xc);
  apuStack_68[2] = &uStack_30;
  uStack_78 = 3;
  apuStack_68[0] = &uStack_90;
  apuStack_68[1] = &uStack_38;
  uStack_74 = 0xb0f07;
  iVar3 = func_0x003deaa4(param_2);
  *(int *)(param_1 + 0x10) = iVar3;
  iVar3 = iVar3 << 2;
  FUN_00262888();
  *(int *)(param_1 + 8) = iVar3;
  iVar3 = *(int *)(param_1 + 0x10) << 2;
  FUN_00262888();
  *(int *)(param_1 + 4) = iVar3;
  iVar3 = *(int *)(param_1 + 0x10) << 2;
  FUN_00262888();
  *(int *)(param_1 + 0xc) = iVar3;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      *(unsigned int *)(*(int *)(param_1 + 8) + iVar3 * 4) = 0;
      *(unsigned int *)(*(int *)(param_1 + 4) + iVar3 * 4) = 0;
      *(unsigned int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar4 = 0x7ac;
    do {
      iVar2 = func_0x0023b020(param_2,iVar3,5);
      if (iVar2 != 0) {
        iVar2 = iVar4;
        FUN_002c222c();
        if (iVar2 != 0) {
          FUN_0023aea4();
        }
        *(int *)(*(int *)(param_1 + 8) + iVar3 * 4) = iVar2;
        FUN_0035708c();
      }
      iVar2 = func_0x0023b020(param_2,iVar3,4);
      if (iVar2 != 0) {
        iVar2 = iVar4;
        FUN_002c222c();
        if (iVar2 != 0) {
          FUN_0023aea4();
        }
        *(int *)(*(int *)(param_1 + 4) + iVar3 * 4) = iVar2;
        FUN_0035708c();
      }
      iVar2 = func_0x0023b020(param_2,iVar3,6);
      if (iVar2 != 0) {
        iVar2 = iVar4;
        FUN_002c222c();
        if (iVar2 != 0) {
          FUN_0023aea4();
        }
        *(int *)(*(int *)(param_1 + 0xc) + iVar3 * 4) = iVar2;
        FUN_0035708c();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return;
}
*/
#include "common.h"
