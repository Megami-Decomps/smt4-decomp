/* NON_MATCHING: found outside every function: called by FUN_00108596; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001086b0 for reference (not compiled; its own view of the boundaries):

void FUN_001086b0(int param_1,int param_2)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_88 [4];
  char cStack_84;
  int iStack_80;
  unsigned int uStack_7c;
  unsigned char abStack_78 [4];
  unsigned char abStack_74 [4];
  int iStack_70;
  int iStack_6c;
  unsigned short auStack_68 [2];
  unsigned char auStack_64 [4];
  int iStack_60;
  unsigned short auStack_5c [4];
  int aiStack_54 [3];
  int iStack_48;
  unsigned char auStack_44 [8];
  unsigned char auStack_3c [12];
  unsigned char auStack_30 [8];
  unsigned char auStack_28 [12];
  int iStack_1c;
  int iStack_18;
  
  iStack_1c = param_1;
  iStack_18 = param_2;
  FUN_002ed258(auStack_88,*(unsigned int *)(param_2 + 0xd8));
  iStack_70 = iStack_1c + 0x9c;
LAB_00108826:
  while (uStack_7c < *(unsigned int *)(iStack_80 + 0x10)) {
    FUN_002f12f4(auStack_88,abStack_78);
    FUN_002f12f4(auStack_88,abStack_74);
    FUN_002eea8a(auStack_88,auStack_5c);
    if ((cStack_84 != '\0') ||
       (iVar2 = FUN_002e7328(auStack_88,(unsigned int)abStack_74[0] << 1), iVar2 == 0)) break;
    if ((unsigned short)abStack_78[0] <= *(unsigned short *)(iStack_1c + 0x104)) {
      puVar3 = (unsigned int *)FUN_002eee88(iStack_70);
      FUN_002efcfc(&iStack_48,*puVar3);
      iStack_60 = iStack_48;
      piVar4 = (int *)FUN_002eee88(iStack_70,abStack_78[0]);
      iVar2 = *piVar4;
      FUN_002efd12(iVar2,&iStack_60);
      FUN_002f12fc(aiStack_54);
      do {
        if (iVar2 != 0) {
          FUN_002eb164(auStack_44,iVar2);
          FUN_002ef9e0(auStack_3c,auStack_5c[0]);
          iVar2 = FUN_002f1334(auStack_3c,auStack_44);
          if (iVar2 == 0) {
            bVar1 = 0;
          }
          else {
            bVar1 = 1;
          }
        }
        else {
          bVar1 = 0;
        }
        if (!bVar1) goto LAB_001087a4;
        FUN_002f1306(aiStack_54,iStack_48 + 0x10);
        FUN_002f1324(auStack_64,&iStack_48,0);
        iStack_6c = iStack_48;
        piVar4 = (int *)FUN_002eee88(iStack_70,abStack_78[0]);
        iVar2 = *piVar4;
        FUN_002efd12(iVar2,&iStack_6c);
      } while( 1 );
    }
    FUN_002ed280(auStack_88,(unsigned int)abStack_74[0] << 1);
  }
  FUN_002e7658(auStack_88);
  return;
LAB_001087a4:
  puVar3 = (unsigned int *)FUN_002eee88(iStack_70,abStack_78[0]);
  FUN_002efdb4(*puVar3);
  for (uVar8 = 0; uVar5 = FUN_002f1352(aiStack_54), uVar8 < uVar5; uVar8 = uVar8 + 1) {
    iVar2 = aiStack_54[0] + uVar8 * 8;
    FUN_002efcf2(auStack_30,iStack_18);
    FUN_002f07c2(iStack_1c,auStack_30,iVar2,abStack_78[0]);
  }
  for (iVar2 = 0; iVar2 < (int)(unsigned int)abStack_74[0]; iVar2 = iVar2 + 1) {
    auStack_68[0] = 0;
    iVar6 = FUN_002eea8a(auStack_88,auStack_68);
    if (iVar6 == 0) break;
    uVar7 = FUN_002ef9e0(auStack_28,auStack_68[0]);
    FUN_002efcf2(auStack_30,iStack_18);
    FUN_002f07c2(iStack_1c,auStack_30,uVar7,abStack_78[0]);
  }
  FUN_002f135a(aiStack_54);
  goto LAB_00108826;
}
*/
#include "common.h"
