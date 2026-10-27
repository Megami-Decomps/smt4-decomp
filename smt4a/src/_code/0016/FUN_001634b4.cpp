/* NON_MATCHING: Retail now contains the full textured-quad/skin renderer with guarded static matrices and camera restoration; matrix/quad stack objects and embedded render-state types remain unreconstructed. */
/* romwright 0.5.0 decompilation of FUN_001634b4 for reference (not compiled; its own view of the boundaries):

void FUN_001634b4(unsigned int *param_1)

{
  unsigned char bVar1;
  int iVar2;
  float fVar3;
  unsigned int uVar4;
  unsigned char bVar5;
  unsigned int in_fpscr;
  unsigned int uVar6;
  unsigned int in_s0;
  float fVar7;
  float fVar8;
  unsigned int uVar9;
  unsigned long long uVar10;
  float fVar11;
  float afStack_f0 [16];
  unsigned char auStack_b0 [64];
  int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  if (param_1 != (unsigned int *)0x0) {
    if (*(char *)((int)param_1 + 0x85) != '\0') {
      iVar2 = param_1[1];
      bVar5 = iVar2 < 0;
      if (bVar5) {
        iVar2 = param_1[2];
      }
      if (!bVar5 || -1 < iVar2) {
        param_1[0xd] = in_s0;
        fVar11 = 0.0f;
        fVar8 = 1.0f;
        bVar5 = 0;
        if (((_ZGVZN2nw4math5MTX448IdentityEvE8identity & 1) == 0) && (iVar2 = FUN_002eba64(&_ZGVZN2nw4math5MTX448IdentityEvE8identity), iVar2 != 0)) {
          _ZZN2nw4math5MTX448IdentityEvE8identity = fVar8;
          DAT_0064c088 = fVar11;
          DAT_0064c08c = fVar11;
          DAT_0064c090 = fVar11;
          DAT_0064c094 = fVar11;
          DAT_0064c098 = fVar8;
          DAT_0064c09c = fVar11;
          DAT_0064c0a0 = fVar11;
          DAT_0064c0a4 = fVar11;
          DAT_0064c0a8 = fVar11;
          DAT_0064c0ac = fVar8;
          DAT_0064c0b0 = fVar11;
          DAT_0064c0b4 = fVar11;
          DAT_0064c0b8 = fVar11;
          DAT_0064c0bc = fVar11;
          DAT_0064c0c0 = fVar8;
        }
        FUN_0019a0e8(auStack_b0,&_ZZN2nw4math5MTX448IdentityEvE8identity);
        if (((_ZGVZN2nw4math5MTX448IdentityEvE8identity & 1) == 0) && (iVar2 = FUN_002eba64(&_ZGVZN2nw4math5MTX448IdentityEvE8identity), iVar2 != 0)) {
          _ZZN2nw4math5MTX448IdentityEvE8identity = fVar8;
          DAT_0064c088 = fVar11;
          DAT_0064c08c = fVar11;
          DAT_0064c090 = fVar11;
          DAT_0064c094 = fVar11;
          DAT_0064c098 = fVar8;
          DAT_0064c09c = fVar11;
          DAT_0064c0a0 = fVar11;
          DAT_0064c0a4 = fVar11;
          DAT_0064c0a8 = fVar11;
          DAT_0064c0ac = fVar8;
          DAT_0064c0b0 = fVar11;
          DAT_0064c0b4 = fVar11;
          DAT_0064c0b8 = fVar11;
          DAT_0064c0bc = fVar11;
          DAT_0064c0c0 = fVar8;
        }
        FUN_0019a0e8(afStack_f0,&_ZZN2nw4math5MTX448IdentityEvE8identity);
        uVar10 = CONCAT44(fVar8,fVar8);
        FUN_001677c0();
        uVar6 = (in_fpscr & 0xfffffff) | ((unsigned int)((float)param_1[0xc] == fVar11) << 0x1e);
        bVar1 = SUB41(uVar6 >> 0x1e,0);
        fVar7 = (float)param_1[10];
        fVar3 = fVar7;
        if (fVar7 == 1.0f) {
          fVar3 = (float)param_1[0xb];
        }
        if (fVar7 != 1.0f || fVar3 != 1.0f) {
          fVar3 = (float)uVar10;
          fVar8 = fVar3;
          if (*(short *)((int)param_1 + 0x3a) != 1) {
            if (*(short *)((int)param_1 + 0x3a) == 2) {
              fVar7 = fVar3;
            }
            fVar8 = (float)param_1[0xb];
          }
          uVar10 = CONCAT44(fVar7,fVar3);
          bVar5 = 1;
        }
        afStack_f0[0xb] = fVar11;
        if (*(char *)((int)param_1 + 0x3d) != '\0') {
          uVar4 = 0x2002;
          if (*(char *)(param_1 + 0xf) != '\0') {
            afStack_f0[1] = 0.0f;
            afStack_f0[3] =
                 (float)VectorSignedToFloat(-(int)*(short *)(param_1 + 6),(unsigned char)(uVar6 >> 0x16) & 3)
            ;
            afStack_f0[0] = 1.0f;
            afStack_f0[7] =
                 (float)VectorSignedToFloat(-(int)*(short *)((int)param_1 + 0x1a),
                                            (unsigned char)(uVar6 >> 0x16) & 3);
            afStack_f0[2] = 0.0f;
            afStack_f0[4] = 0.0f;
            afStack_f0[5] = 1.0f;
            afStack_f0[6] = 0.0f;
            afStack_f0[8] = 0.0f;
            afStack_f0[9] = 0.0f;
            afStack_f0[10] = 1.0f;
            afStack_f0[0xe] = 0.0f;
            afStack_f0[0xf] = 1.0f;
            afStack_f0[0xc] = 0.0f;
            afStack_f0[0xd] = 0.0f;
            nn_math_ARMv6_MTX44MultAsm(auStack_b0,auStack_b0,afStack_f0);
          }
          afStack_f0[5] = (float)param_1[0x10];
          afStack_f0[10] = (float)uVar10 * afStack_f0[5];
          afStack_f0[0] = (float)((unsigned long long)uVar10 >> 0x20) * afStack_f0[5];
          afStack_f0[5] = fVar8 * afStack_f0[5];
          afStack_f0[1] = 0.0f;
          afStack_f0[2] = 0.0f;
          afStack_f0[3] = 0.0f;
          afStack_f0[4] = 0.0f;
          afStack_f0[6] = 0.0f;
          afStack_f0[7] = 0.0f;
          afStack_f0[8] = 0.0f;
          afStack_f0[9] = 0.0f;
          afStack_f0[0xe] = 0.0f;
          afStack_f0[0xf] = 1.0f;
          afStack_f0[0xb] = 0.0f;
          afStack_f0[0xc] = 0.0f;
          afStack_f0[0xd] = 0.0f;
          nn_math_ARMv6_MTX44MultAsm(auStack_b0,auStack_b0,afStack_f0);
          uVar9 = (unsigned int)uVar10;
          if (!bVar1) {
            FUN_001a1c28(afStack_f0);
            nn_math_ARMv6_MTX44MultAsm(auStack_b0,auStack_b0,afStack_f0);
          }
          afStack_f0[3] =
               (float)VectorSignedToFloat((int)*(short *)(param_1 + 6) + ((int)param_1[3] >> 0xc),
                                          (unsigned char)(uVar6 >> 0x16) & 3);
          afStack_f0[0xb] =
               (float)VectorSignedToFloat((int)*(short *)(param_1 + 7),(unsigned char)(uVar6 >> 0x16) & 3);
          afStack_f0[1] = 0.0f;
          afStack_f0[0] = 1.0f;
          afStack_f0[7] =
               (float)VectorSignedToFloat(-((int)*(short *)((int)param_1 + 0x1a) +
                                           ((int)param_1[4] >> 0xc)),(unsigned char)(uVar6 >> 0x16) & 3);
          afStack_f0[2] = 0.0f;
          afStack_f0[3] = afStack_f0[3] + (float)param_1[0xd];
          afStack_f0[4] = 0.0f;
          afStack_f0[5] = 1.0f;
          afStack_f0[6] = 0.0f;
          afStack_f0[8] = 0.0f;
          afStack_f0[9] = 0.0f;
          afStack_f0[10] = 1.0f;
          afStack_f0[0xe] = 0.0f;
          afStack_f0[0xf] = 1.0f;
          afStack_f0[0xc] = 0.0f;
          afStack_f0[0xd] = 0.0f;
          nn_math_ARMv6_MTX44MultAsm(auStack_b0,auStack_b0,afStack_f0);
        }
        else {
          afStack_f0[3] =
               (float)VectorSignedToFloat((int)*(short *)(param_1 + 6) + ((int)param_1[3] >> 0xc),
                                          (unsigned char)(uVar6 >> 0x16) & 3);
          afStack_f0[1] = 0.0f;
          afStack_f0[0] = 1.0f;
          afStack_f0[7] =
               (float)VectorSignedToFloat((int)*(short *)((int)param_1 + 0x1a) +
                                          ((int)param_1[4] >> 0xc),(unsigned char)(uVar6 >> 0x16) & 3);
          afStack_f0[2] = 0.0f;
          uVar4 = 2;
          afStack_f0[3] = afStack_f0[3] + (float)param_1[0xd];
          afStack_f0[4] = 0.0f;
          afStack_f0[5] = 1.0f;
          afStack_f0[6] = 0.0f;
          afStack_f0[8] = 0.0f;
          afStack_f0[9] = 0.0f;
          afStack_f0[10] = 1.0f;
          afStack_f0[0xe] = 0.0f;
          afStack_f0[0xf] = 1.0f;
          afStack_f0[0xc] = 0.0f;
          afStack_f0[0xd] = 0.0f;
          nn_math_ARMv6_MTX44MultAsm(auStack_b0,auStack_b0,afStack_f0);
          if (!bVar1) {
            FUN_001a1c28(afStack_f0);
            nn_math_ARMv6_MTX44MultAsm(auStack_b0,auStack_b0,afStack_f0);
          }
          if (bVar5) {
            afStack_f0[0] = (float)((unsigned long long)uVar10 >> 0x20);
            afStack_f0[1] = 0.0f;
            afStack_f0[2] = 0.0f;
            afStack_f0[3] = 0.0f;
            afStack_f0[4] = 0.0f;
            afStack_f0[10] = (float)uVar10;
            afStack_f0[6] = 0.0f;
            afStack_f0[7] = 0.0f;
            afStack_f0[8] = 0.0f;
            afStack_f0[9] = 0.0f;
            afStack_f0[0xe] = 0.0f;
            afStack_f0[0xf] = 1.0f;
            afStack_f0[0xb] = 0.0f;
            afStack_f0[0xc] = 0.0f;
            afStack_f0[0xd] = 0.0f;
            afStack_f0[5] = fVar8;
            nn_math_ARMv6_MTX44MultAsm(auStack_b0,auStack_b0,afStack_f0);
          }
          uVar9 = (unsigned int)uVar10;
          if (*(char *)(param_1 + 0xf) != '\0') {
            afStack_f0[1] = 0.0f;
            afStack_f0[3] =
                 (float)VectorSignedToFloat(-(int)*(short *)(param_1 + 6),(unsigned char)(uVar6 >> 0x16) & 3)
            ;
            afStack_f0[0] = 1.0f;
            afStack_f0[7] =
                 (float)VectorSignedToFloat(-(int)*(short *)((int)param_1 + 0x1a),
                                            (unsigned char)(uVar6 >> 0x16) & 3);
            afStack_f0[2] = 0.0f;
            afStack_f0[4] = 0.0f;
            afStack_f0[5] = 1.0f;
            afStack_f0[6] = 0.0f;
            afStack_f0[8] = 0.0f;
            afStack_f0[9] = 0.0f;
            afStack_f0[10] = 1.0f;
            afStack_f0[0xe] = 0.0f;
            afStack_f0[0xf] = 1.0f;
            afStack_f0[0xc] = 0.0f;
            afStack_f0[0xd] = 0.0f;
            afStack_f0[0xb] = fVar11;
            nn_math_ARMv6_MTX44MultAsm(auStack_b0,auStack_b0,afStack_f0);
          }
        }
        FUN_00187d04(DAT_0059dbb4,auStack_b0);
        if ((int)param_1[2] >= 0) {
          FUN_00164b5c(uVar4,*param_1,param_1[2],0);
        }
        else {
          FUN_001835b4(uVar4,*param_1,param_1[1],0,0,(int)*(short *)(param_1 + 0xe));
        }
        FUN_001677c0();
        uStack_70 = uVar9;
        uStack_6c = uVar9;
        uStack_68 = uVar9;
        uStack_64 = uVar9;
        uStack_60 = uVar9;
        uStack_5c = uVar9;
        uStack_58 = uVar9;
        uStack_54 = uVar9;
        uStack_50 = uVar9;
        uStack_4c = uVar9;
        uStack_48 = uVar9;
        uStack_44 = uVar9;
        uStack_40 = uVar9;
        uStack_3c = uVar9;
        uStack_38 = uVar9;
        uStack_34 = uVar9;
        FUN_0018291c(&uStack_70,&uStack_60,&uStack_50,&uStack_40,0,1);
        FUN_0016c560(DAT_0059dbb4);
        FUN_0016c410(DAT_0059dbb4);
      }
    }
    return;
  }
  return;
}
*/
#include "common.h"
