/* NON_MATCHING: found outside every function: branched to by nw_gfx_Fog_Update; not written yet. */
/* romwright 0.5.0 decompilation of FUN_001a3b28 for reference (not compiled; its own view of the boundaries):

typedef struct fn_001a3b28_arg3 fn_001a3b28_arg3;
struct fn_001a3b28_arg3 {
    unsigned char pad_0x0[0x28];
    float field_0x28; /* +0x28 * /
    float field_0x2c; /* +0x2c * /
    unsigned char pad_0x30[0x8];
    float field_0x38; /* +0x38 * /
    float field_0x3c; /* +0x3c * /
};


void FUN_001a3b28(int param_1,int param_2,unsigned int *param_3,fn_001a3b28_arg3 *param_4)

{
  unsigned int uVar1;
  unsigned char bVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  unsigned long long uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  unsigned long long uVar19;
  unsigned long long uVar20;
  
  iVar8 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar3 = (unsigned int *)(param_2 + 0x10 + *(int *)(param_2 + 0x10));
  }
  else {
    puVar3 = (unsigned int *)0x0;
  }
  *puVar3 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar6 = param_2 + 0x10 + *(int *)(param_2 + 0x10);
  }
  else {
    iVar6 = 0;
  }
  *(unsigned int *)(iVar6 + 4) = 0xf00e6;
  fVar17 = -0.0078125f;
  fVar18 = 0.0078125f;
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar6 = param_2 + 0x10 + *(int *)(param_2 + 0x10);
  }
  else {
    iVar6 = 0;
  }
  fVar14 = 1.0f;
  uVar20 = 0x45fff800;
  uVar19 = 0x4580000040000000;
  uVar15 = 0x4500000000000000;
  uVar7 = 0;
  *(unsigned int *)(iVar6 + 0xc) = 0x7ff00e8;
  fVar12 = 0.0f;
  do {
    uVar4 = in_fpscr & 0xfffffff;
    uVar1 = uVar4 | ((unsigned int)(*(float *)(param_1 + 0x160) == (float)uVar15) << 0x1e);
    if (SUB41(uVar1 >> 0x1e,0)) {
      fVar9 = (float)VectorSignedToFloat(uVar7,(unsigned char)(uVar1 >> 0x16) & 3);
      fVar9 = (-param_4->field_0x2c + -(param_4->field_0x28 * fVar9 * fVar17)) /
              (param_4->field_0x3c + param_4->field_0x38 * fVar9 * fVar17);
    }
    else {
      fVar9 = (float)VectorSignedToFloat(uVar7,(unsigned char)(uVar1 >> 0x16) & 3);
      fVar9 = *(float *)(param_1 + 0x158) +
              fVar9 * fVar18 * (*(float *)(param_1 + 0x15c) - *(float *)(param_1 + 0x158));
    }
    fVar11 = (float)param_3[1];
    in_fpscr = uVar4 | ((unsigned int)(fVar9 == fVar11) << 0x1e) | ((unsigned int)(fVar11 <= fVar9) << 0x1d);
    bVar2 = (unsigned char)(in_fpscr >> 0x18);
    fVar10 = fVar14;
    if ((unsigned char)((bVar2 >> 5) & 1) && !(unsigned char)(bVar2 >> 6)) {
      fVar13 = (float)param_3[2];
      uVar4 = uVar4 | ((unsigned int)(fVar9 < fVar13) << 0x1f) | ((unsigned int)(fVar9 == fVar13) << 0x1e);
      in_fpscr = uVar4 | ((unsigned int)(NAN(fVar9) || NAN(fVar13)) << 0x1c);
      bVar2 = (unsigned char)(uVar4 >> 0x18);
      fVar10 = (float)uVar15;
      if ((unsigned char)((bVar2 >> 6) & 1) || bVar2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        uVar4 = *param_3 & 0xff;
        if (uVar4 != 1) {
          if (uVar4 != 2) {
            fVar10 = fVar9;
            if (uVar4 == 3) {
              fVar9 = ((fVar9 - fVar11) * (float)param_3[3]) / (fVar13 - fVar11);
              fVar10 = -(fVar9 * fVar9);
              FUN_001a9464();
            }
          }
          else {
            fVar10 = -((fVar9 - fVar11) * (float)param_3[3]) / (fVar13 - fVar11);
            FUN_001a9464();
          }
        }
        else {
          fVar10 = (fVar13 - fVar9) / (fVar13 - fVar11);
        }
      }
    }
    if (0 < (int)uVar7) {
      fVar16 = (float)((unsigned long long)uVar15 >> 0x20);
      fVar11 = ((fVar10 - fVar12) + (float)uVar19) * fVar16;
      fVar13 = (float)uVar15;
      fVar9 = fVar13;
      if ((fVar13 <= fVar11) && (fVar9 = fVar11, 0x45ffffff < (int)fVar11)) {
        fVar9 = (float)uVar20;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(fVar12 == fVar13) << 0x1e) |
                 ((unsigned int)(fVar13 <= fVar12) << 0x1d);
      bVar2 = (unsigned char)(in_fpscr >> 0x18);
      if ((!(unsigned char)((bVar2 >> 5) & 1) || (unsigned char)(bVar2 >> 6)) || ((unsigned int)ABS(fVar12) >> 0x17 == 0xff))
      {
        uVar4 = 0;
      }
      else {
        fVar12 = fVar12 * fVar16;
        if ((int)fVar12 >= 0x45000000) {
          uVar4 = 0x7ff;
        }
        else {
          uVar4 = VectorFloatToUnsigned(fVar12,3);
        }
      }
      if (iVar8 == 0) {
        iVar6 = 2;
      }
      else {
        iVar6 = iVar8 + 3;
      }
      if (*(int *)(param_2 + 0x10) != 0) {
        iVar5 = param_2 + 0x10 + *(int *)(param_2 + 0x10);
      }
      else {
        iVar5 = 0;
      }
      iVar8 = iVar8 + 1;
      *(unsigned int *)(iVar5 + iVar6 * 4) =
           ((int)(fVar9 - (float)((unsigned long long)uVar19 >> 0x20)) & 0x1fffU) | ((uVar4 & 0x7ff) << 0xd);
    }
    uVar7 = uVar7 + 1;
    fVar12 = fVar10;
    if (0x80 < uVar7) {
      return;
    }
  } while( 1 );
}
*/
#include "common.h"
