/* NON_MATCHING: fragment of a larger function (conditional bxeq returns but the other path falls through beyond the unit). */
/* romwright 0.5.0 decompilation of FUN_003881b0 for reference (not compiled; its own view of the boundaries):

void FUN_003881b0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
  int iVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned char bVar6;
  unsigned int in_fpscr;
  unsigned int uVar7;
  unsigned int in_s0;
  float fVar8;
  float fVar9;
  unsigned int uVar10;
  unsigned long long uVar11;
  float fVar12;
  float afStack_138 [16];
  unsigned char auStack_f8 [64];
  int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  int uStack_98;
  unsigned int uStack_94;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned char auStack_78 [84];
  
  if (param_4 != (unsigned int *)0x0) {
    if (*(char *)((int)param_4 + 0x85) != '\0') {
      iVar1 = param_4[1];
      bVar6 = iVar1 < 0;
      if (bVar6) {
        iVar1 = param_4[2];
      }
      if (!bVar6 || -1 < iVar1) {
        param_4[0xd] = in_s0;
        fVar12 = 0.0f;
        fVar9 = 1.0f;
        bVar6 = 0;
        if (((DAT_00476638 & 1) == 0) && (iVar1 = FUN_002bfefc(&DAT_00476638), iVar1 != 0)) {
          DAT_004efd9c = fVar9;
          DAT_004efda0 = fVar12;
          DAT_004efda4 = fVar12;
          DAT_004efda8 = fVar12;
          DAT_004efdac = fVar12;
          DAT_004efdb0 = fVar9;
          DAT_004efdb4 = fVar12;
          DAT_004efdb8 = fVar12;
          DAT_004efdbc = fVar12;
          DAT_004efdc0 = fVar12;
          DAT_004efdc4 = fVar9;
          DAT_004efdc8 = fVar12;
          DAT_004efdcc = fVar12;
          DAT_004efdd0 = fVar12;
          DAT_004efdd4 = fVar12;
          DAT_004efdd8 = fVar9;
        }
        FUN_002bfe28(auStack_f8,&DAT_004efd9c);
        if (((DAT_00476638 & 1) == 0) && (iVar1 = FUN_002bfefc(&DAT_00476638), iVar1 != 0)) {
          DAT_004efd9c = fVar9;
          DAT_004efda0 = fVar12;
          DAT_004efda4 = fVar12;
          DAT_004efda8 = fVar12;
          DAT_004efdac = fVar12;
          DAT_004efdb0 = fVar9;
          DAT_004efdb4 = fVar12;
          DAT_004efdb8 = fVar12;
          DAT_004efdbc = fVar12;
          DAT_004efdc0 = fVar12;
          DAT_004efdc4 = fVar9;
          DAT_004efdc8 = fVar12;
          DAT_004efdcc = fVar12;
          DAT_004efdd0 = fVar12;
          DAT_004efdd4 = fVar12;
          DAT_004efdd8 = fVar9;
        }
        FUN_002bfe28(afStack_138,&DAT_004efd9c);
        uVar11 = CONCAT44(fVar9,fVar9);
        FUN_002bf538();
        uVar7 = (in_fpscr & 0xfffffff) | ((unsigned int)((float)param_4[0xc] == fVar12) << 0x1e);
        fVar8 = (float)param_4[10];
        puVar4 = (unsigned int *)(unsigned int)!SUB41(uVar7 >> 0x1e,0);
        fVar2 = fVar8;
        if (fVar8 == 1.0f) {
          fVar2 = (float)param_4[0xb];
        }
        if (fVar8 != 1.0f || fVar2 != 1.0f) {
          fVar2 = (float)uVar11;
          fVar9 = fVar2;
          if (*(short *)((int)param_4 + 0x3a) != 1) {
            if (*(short *)((int)param_4 + 0x3a) == 2) {
              fVar8 = fVar2;
            }
            fVar9 = (float)param_4[0xb];
          }
          uVar11 = CONCAT44(fVar8,fVar2);
          bVar6 = 1;
        }
        afStack_138[0xb] = fVar12;
        if (*(char *)((int)param_4 + 0x3d) != '\0') {
          uVar5 = 0x2002;
          if (*(char *)(param_4 + 0xf) != '\0') {
            afStack_138[1] = 0.0f;
            afStack_138[3] =
                 (float)VectorSignedToFloat(-(int)*(short *)(param_4 + 6),(unsigned char)(uVar7 >> 0x16) & 3)
            ;
            afStack_138[0] = 1.0f;
            afStack_138[7] =
                 (float)VectorSignedToFloat(-(int)*(short *)((int)param_4 + 0x1a),
                                            (unsigned char)(uVar7 >> 0x16) & 3);
            afStack_138[2] = 0.0f;
            afStack_138[4] = 0.0f;
            afStack_138[5] = 1.0f;
            afStack_138[6] = 0.0f;
            afStack_138[8] = 0.0f;
            afStack_138[9] = 0.0f;
            afStack_138[10] = 1.0f;
            afStack_138[0xe] = 0.0f;
            afStack_138[0xf] = 1.0f;
            afStack_138[0xc] = 0.0f;
            afStack_138[0xd] = 0.0f;
            FUN_002b6eb8(auStack_f8,auStack_f8,afStack_138);
          }
          afStack_138[5] = (float)param_4[0x10];
          afStack_138[10] = (float)uVar11 * afStack_138[5];
          afStack_138[0] = (float)((unsigned long long)uVar11 >> 0x20) * afStack_138[5];
          afStack_138[5] = fVar9 * afStack_138[5];
          afStack_138[1] = 0.0f;
          afStack_138[2] = 0.0f;
          afStack_138[3] = 0.0f;
          afStack_138[4] = 0.0f;
          afStack_138[6] = 0.0f;
          afStack_138[7] = 0.0f;
          afStack_138[8] = 0.0f;
          afStack_138[9] = 0.0f;
          afStack_138[0xe] = 0.0f;
          afStack_138[0xf] = 1.0f;
          afStack_138[0xb] = 0.0f;
          afStack_138[0xc] = 0.0f;
          afStack_138[0xd] = 0.0f;
          FUN_002b6eb8(auStack_f8,auStack_f8,afStack_138);
          uVar10 = (unsigned int)uVar11;
          if (puVar4 != (unsigned int *)0x0) {
            FUN_002b2144(afStack_138);
            FUN_002b6eb8(auStack_f8,auStack_f8,afStack_138);
          }
          afStack_138[3] =
               (float)VectorSignedToFloat((int)*(short *)(param_4 + 6) + ((int)param_4[3] >> 0xc),
                                          (unsigned char)(uVar7 >> 0x16) & 3);
          afStack_138[0xb] =
               (float)VectorSignedToFloat((int)*(short *)(param_4 + 7),(unsigned char)(uVar7 >> 0x16) & 3);
          afStack_138[1] = 0.0f;
          afStack_138[0] = 1.0f;
          afStack_138[7] =
               (float)VectorSignedToFloat(-((int)*(short *)((int)param_4 + 0x1a) +
                                           ((int)param_4[4] >> 0xc)),(unsigned char)(uVar7 >> 0x16) & 3);
          afStack_138[2] = 0.0f;
          afStack_138[3] = afStack_138[3] + (float)param_4[0xd];
          afStack_138[4] = 0.0f;
          afStack_138[5] = 1.0f;
          afStack_138[6] = 0.0f;
          afStack_138[8] = 0.0f;
          afStack_138[9] = 0.0f;
          afStack_138[10] = 1.0f;
          afStack_138[0xe] = 0.0f;
          afStack_138[0xf] = 1.0f;
          afStack_138[0xc] = 0.0f;
          afStack_138[0xd] = 0.0f;
          FUN_002b6eb8(auStack_f8,auStack_f8,afStack_138);
        }
        else {
          afStack_138[1] = 0.0f;
          afStack_138[2] = 0.0f;
          afStack_138[3] =
               (float)VectorSignedToFloat((int)*(short *)(param_4 + 6) + ((int)param_4[3] >> 0xc),
                                          (unsigned char)(uVar7 >> 0x16) & 3);
          afStack_138[0] = 1.0f;
          uVar5 = 2;
          afStack_138[7] =
               (float)VectorSignedToFloat((int)*(short *)((int)param_4 + 0x1a) +
                                          ((int)param_4[4] >> 0xc),(unsigned char)(uVar7 >> 0x16) & 3);
          afStack_138[3] = afStack_138[3] + (float)param_4[0xd];
          afStack_138[4] = 0.0f;
          afStack_138[5] = 1.0f;
          afStack_138[6] = 0.0f;
          afStack_138[8] = 0.0f;
          afStack_138[9] = 0.0f;
          afStack_138[10] = 1.0f;
          afStack_138[0xe] = 0.0f;
          afStack_138[0xf] = 1.0f;
          afStack_138[0xc] = 0.0f;
          afStack_138[0xd] = 0.0f;
          FUN_002b6eb8(auStack_f8,auStack_f8,afStack_138);
          if (puVar4 != (unsigned int *)0x0) {
            FUN_002b2144(afStack_138);
            FUN_002b6eb8(auStack_f8,auStack_f8,afStack_138);
          }
          if (bVar6) {
            afStack_138[0] = (float)((unsigned long long)uVar11 >> 0x20);
            afStack_138[1] = 0.0f;
            afStack_138[2] = 0.0f;
            afStack_138[3] = 0.0f;
            afStack_138[4] = 0.0f;
            afStack_138[10] = (float)uVar11;
            afStack_138[6] = 0.0f;
            afStack_138[7] = 0.0f;
            afStack_138[8] = 0.0f;
            afStack_138[9] = 0.0f;
            afStack_138[0xe] = 0.0f;
            afStack_138[0xf] = 1.0f;
            afStack_138[0xb] = 0.0f;
            afStack_138[0xc] = 0.0f;
            afStack_138[0xd] = 0.0f;
            afStack_138[5] = fVar9;
            FUN_002b6eb8(auStack_f8,auStack_f8,afStack_138);
          }
          uVar10 = (unsigned int)uVar11;
          if (*(char *)(param_4 + 0xf) != '\0') {
            afStack_138[1] = 0.0f;
            afStack_138[3] =
                 (float)VectorSignedToFloat(-(int)*(short *)(param_4 + 6),(unsigned char)(uVar7 >> 0x16) & 3)
            ;
            afStack_138[0] = 1.0f;
            afStack_138[7] =
                 (float)VectorSignedToFloat(-(int)*(short *)((int)param_4 + 0x1a),
                                            (unsigned char)(uVar7 >> 0x16) & 3);
            afStack_138[2] = 0.0f;
            afStack_138[4] = 0.0f;
            afStack_138[5] = 1.0f;
            afStack_138[6] = 0.0f;
            afStack_138[8] = 0.0f;
            afStack_138[9] = 0.0f;
            afStack_138[10] = 1.0f;
            afStack_138[0xe] = 0.0f;
            afStack_138[0xf] = 1.0f;
            afStack_138[0xc] = 0.0f;
            afStack_138[0xd] = 0.0f;
            afStack_138[0xb] = fVar12;
            FUN_002b6eb8(auStack_f8,auStack_f8,afStack_138);
          }
        }
        FUN_002b90f8(DAT_0044ea00,auStack_f8);
        if ((int)param_4[2] < 0) {
          iVar1 = FUN_002a6d50(param_1,0x15,param_3);
          if (iVar1 != 0) {
            puVar4 = *(unsigned int **)(iVar1 + 4);
          }
          if (iVar1 == 0) {
            puVar4 = (unsigned int *)0x0;
          }
          uVar3 = FUN_002b93b0(*param_4,param_3);
          FUN_002a6d1c(auStack_78,uVar5,0,0,(int)*(short *)(param_4 + 0xe));
          FUN_002a8ac4(**(unsigned int **)(*(int *)*puVar4 + 4),auStack_78,uVar3);
        }
        FUN_002bf538();
        uStack_b8 = uVar10;
        uStack_b4 = uVar10;
        uStack_b0 = uVar10;
        uStack_ac = uVar10;
        uStack_a8 = uVar10;
        uStack_a4 = uVar10;
        uStack_a0 = uVar10;
        uStack_9c = uVar10;
        uStack_98 = uVar10;
        uStack_94 = uVar10;
        uStack_90 = uVar10;
        uStack_8c = uVar10;
        uStack_88 = uVar10;
        uStack_84 = uVar10;
        uStack_80 = uVar10;
        uStack_7c = uVar10;
        FUN_002b1fc4(&uStack_b8,&uStack_a8,&uStack_98,&uStack_88,0,1);
        FUN_002c198c(DAT_0044ea00);
        FUN_002c18e4(DAT_0044ea00);
      }
    }
    return;
  }
  return;
}
*/
#include "common.h"
