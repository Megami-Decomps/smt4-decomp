/* NON_MATCHING: found outside every function: branched to by nw_gfx_Fog_Update; not written yet. */
/* romwright 0.5.0 decompilation of FUN_0014aa80 for reference (not compiled; its own view of the boundaries):

typedef struct fn_0014aa80_arg3 fn_0014aa80_arg3;
struct fn_0014aa80_arg3 {
    unsigned char pad_0x0[0x28];
    float field_0x28; /* +0x28 * /
    float field_0x2c; /* +0x2c * /
    unsigned char pad_0x30[0x8];
    float field_0x38; /* +0x38 * /
    float field_0x3c; /* +0x3c * /
};


void FUN_0014aa80(int param_1,int param_2,unsigned int *param_3,fn_0014aa80_arg3 *param_4)

{
  unsigned int uVar1;
  unsigned char bVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
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
  unsigned long long uVar18;
  unsigned long long uVar19;
  
  iVar8 = 0;
  fVar14 = 0.0f;
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar3 = (unsigned int *)(param_2 + 0x10 + *(int *)(param_2 + 0x10));
  }
  else {
    puVar3 = (unsigned int *)0x0;
  }
  *puVar3 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar4 = param_2 + 0x10 + *(int *)(param_2 + 0x10);
  }
  else {
    iVar4 = 0;
  }
  *(unsigned int *)(iVar4 + 4) = 0xf00e6;
  fVar16 = -0.0078125f;
  fVar17 = 0.0078125f;
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar4 = *(int *)(param_2 + 0x10) + param_2 + 0x10;
  }
  else {
    iVar4 = 0;
  }
  uVar19 = 0x45fff800;
  uVar18 = 0x4580000040000000;
  uVar15 = 0x450000003f800000;
  uVar7 = 0;
  *(unsigned int *)(iVar4 + 0xc) = 0x7ff00e8;
  fVar11 = fVar14;
  do {
    uVar5 = in_fpscr & 0xfffffff;
    uVar1 = uVar5 | ((unsigned int)(*(float *)(param_1 + 0x160) == fVar14) << 0x1e);
    if (SUB41(uVar1 >> 0x1e,0)) {
      fVar13 = (float)VectorSignedToFloat(uVar7,(unsigned char)(uVar1 >> 0x16) & 3);
      fVar13 = -(param_4->field_0x2c + param_4->field_0x28 * fVar13 * fVar16) /
               (param_4->field_0x3c + param_4->field_0x38 * fVar13 * fVar16);
    }
    else {
      fVar13 = (float)VectorSignedToFloat(uVar7,(unsigned char)(uVar1 >> 0x16) & 3);
      fVar13 = *(float *)(param_1 + 0x158) +
               fVar13 * fVar17 * (*(float *)(param_1 + 0x15c) - *(float *)(param_1 + 0x158));
    }
    fVar10 = (float)param_3[1];
    in_fpscr = uVar5 | ((unsigned int)(fVar13 == fVar10) << 0x1e) | ((unsigned int)(fVar10 <= fVar13) << 0x1d);
    bVar2 = (unsigned char)(in_fpscr >> 0x18);
    if (!(unsigned char)((bVar2 >> 5) & 1) || (unsigned char)(bVar2 >> 6)) {
      fVar9 = (float)uVar15;
    }
    else {
      fVar12 = (float)param_3[2];
      uVar5 = uVar5 | ((unsigned int)(fVar13 < fVar12) << 0x1f) | ((unsigned int)(fVar13 == fVar12) << 0x1e);
      in_fpscr = uVar5 | ((unsigned int)(NAN(fVar13) || NAN(fVar12)) << 0x1c);
      bVar2 = (unsigned char)(uVar5 >> 0x18);
      fVar9 = fVar14;
      if ((unsigned char)((bVar2 >> 6) & 1) || bVar2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        uVar5 = *param_3 & 0xff;
        if (uVar5 != 1) {
          if (uVar5 != 2) {
            fVar9 = fVar13;
            if (uVar5 == 3) {
              fVar13 = ((fVar13 - fVar10) * (float)param_3[3]) / (fVar12 - fVar10);
              fVar9 = -(fVar13 * fVar13);
              FUN_002abe38();
            }
          }
          else {
            fVar9 = -((fVar13 - fVar10) * (float)param_3[3]) / (fVar12 - fVar10);
            FUN_002abe38();
          }
        }
        else {
          fVar9 = (fVar12 - fVar13) / (fVar12 - fVar10);
        }
      }
    }
    if (0 < (int)uVar7) {
      fVar12 = (float)((unsigned long long)uVar15 >> 0x20);
      fVar10 = ((fVar9 - fVar11) + (float)uVar18) * fVar12;
      fVar13 = fVar14;
      if ((fVar14 <= fVar10) && (fVar13 = fVar10, 0x45ffffff < (int)fVar10)) {
        fVar13 = (float)uVar19;
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(fVar11 == fVar14) << 0x1e) |
                 ((unsigned int)(fVar14 <= fVar11) << 0x1d);
      bVar2 = (unsigned char)(in_fpscr >> 0x18);
      if ((!(unsigned char)((bVar2 >> 5) & 1) || (unsigned char)(bVar2 >> 6)) || ((unsigned int)ABS(fVar11) >> 0x17 == 0xff))
      {
        uVar5 = 0;
      }
      else {
        fVar11 = fVar11 * fVar12;
        if ((int)fVar11 >= 0x45000000) {
          uVar5 = 0x7ff;
        }
        else {
          uVar5 = VectorFloatToUnsigned(fVar11,3);
        }
      }
      if (iVar8 == 0) {
        iVar4 = 2;
      }
      else {
        iVar4 = iVar8 + 3;
      }
      if (*(int *)(param_2 + 0x10) != 0) {
        iVar6 = param_2 + 0x10 + *(int *)(param_2 + 0x10);
      }
      else {
        iVar6 = 0;
      }
      iVar8 = iVar8 + 1;
      *(unsigned int *)(iVar6 + iVar4 * 4) =
           ((int)(fVar13 - (float)((unsigned long long)uVar18 >> 0x20)) & 0x1fffU) | ((uVar5 & 0x7ff) << 0xd)
      ;
    }
    uVar7 = uVar7 + 1;
    fVar11 = fVar9;
    if (0x80 < uVar7) {
      return;
    }
  } while( 1 );
}
*/
#include "common.h"
