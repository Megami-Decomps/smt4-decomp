/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050be58` (_code @ 0x50be58, 0x3b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_ut_FloatColor_ToPicaU32(int *);
int FUN_0044b5f4(int *, int *);
int FUN_0044b92c(int *);
int FUN_0050c20c(int *[2], int *);
int FUN_0050c2dc(int *[2], int *);
int FUN_0050c578(int *[2], int *);
int FUN_0050c7c8(int *[2], int *);
int nw_anim_res_ResHemiSphereLightMember_SetValue(int *[2], int *);
int nw_anim_res_ResTextureCoordinatorMember_SetValue(int *[2], int *);
int nw_gfx_CalculatedTransform_UpdateRotateFlags(int *);
int nw_gfx_CalculatedTransform_UpdateTranslateFlags(int *);
int nw_gfx_res_ResTextureMapper_SetTexture(int *[2], unsigned char *);
int nw_gfx_res_ResTextureSampler_GetOwnerCommand(unsigned char [4], int *[2]);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: nw_ut_FloatColor_ToPicaU32. */
/* Supplied declaration required: FUN_0044b5f4. */
/* Supplied declaration required: FUN_0044b92c. */
/* Supplied declaration required: FUN_0050c20c. */
/* Supplied declaration required: FUN_0050c2dc. */
/* Supplied declaration required: FUN_0050c578. */
/* Supplied declaration required: FUN_0050c7c8. */
/* Supplied declaration required: nw_anim_res_ResHemiSphereLightMember_SetValue. */
/* Supplied declaration required: nw_anim_res_ResTextureCoordinatorMember_SetValue. */
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateRotateFlags. */
/* Supplied declaration required: nw_gfx_CalculatedTransform_UpdateTranslateFlags. */
/* Supplied declaration required: nw_gfx_res_ResTextureMapper_SetTexture. */
/* Supplied declaration required: nw_gfx_res_ResTextureSampler_GetOwnerCommand. */


/* WARNING: Type propagation algorithm not settling */

void FUN_0050be58(int *param_1,int *param_2,int *param_3)

{
/* irregular: 14 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned char *puVar5;
  int temp_v3;
  int temp_v4;
  float temp_v5;
  int *temp_v6 [2];
  unsigned char temp_v7 [4];
  int temp_v8;
  
  temp_v6[0] = (int *)*param_1;
  switch(temp_v6[0][4]) {
  case 0:
    FUN_0044b5f4(param_2,param_3);
    if ((~param_2[0xf] & 8U) != 0) {
      temp_v2 = param_2[0xf] & 0xfffff9ff;
      param_2[0xf] = temp_v2;
      temp_v5 = (float)param_2[0xc];
      if (((temp_v5 == (float)param_2[0xd]) && (temp_v5 == (float)param_2[0xe])) &&
         (param_2[0xf] = temp_v2 | 0x400, (float)param_2[0xc] == 1.0f)) {
        param_2[0xf] = temp_v2 | 0x600;
      }
    }
    nw_gfx_CalculatedTransform_UpdateRotateFlags(param_2);
    nw_gfx_CalculatedTransform_UpdateTranslateFlags(param_2);
    FUN_0044b92c(param_2);
    return;
  case 1:
    FUN_0050c578(temp_v6,param_2);
    break;
  case 2:
    piVar4 = (int *)param_2[3];
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)((int)piVar4 + (int)(param_2 + 3));
    }
    if (temp_v6[0][5] == 0) {
      temp_v1 = param_3[1];
      temp_v3 = param_3[2];
      temp_v4 = param_3[3];
      piVar4[3] = *param_3;
      piVar4[4] = temp_v1;
      piVar4[5] = temp_v3;
      piVar4[6] = temp_v4;
      temp_v6[0] = piVar4;
      temp_v0 = nw_ut_FloatColor_ToPicaU32(piVar4 + 3);
      nw_gfx_res_ResTextureSampler_GetOwnerCommand(temp_v7,temp_v6);
      *(unsigned int *)(temp_v8 + 8) = temp_v0;
      return;
    }
    break;
  case 3:
    puVar5 = (unsigned char *)*param_3;
    if (puVar5 != (unsigned char *)0x0) {
      puVar5 = puVar5 + (int)param_3;
    }
    if (temp_v6[0][5] == 0) {
      temp_v1 = *(int *)(puVar5 + 0x1c);
      if (temp_v1 != 0) {
        puVar5 = (unsigned char *)((int)(puVar5 + 0x1c) + temp_v1);
      }
      else {
        puVar5 = (unsigned char *)0x0;
      }
      temp_v6[0] = param_2;
      nw_gfx_res_ResTextureMapper_SetTexture(temp_v6,puVar5);
      return;
    }
    break;
  case 4:
    if (temp_v6[0][5] == 0) {
      temp_v3 = param_3[1];
      temp_v4 = param_3[2];
      temp_v1 = param_3[3];
      param_2[1] = *param_3;
      param_2[2] = temp_v3;
      param_2[3] = temp_v4;
      param_2[4] = temp_v1;
      temp_v1 = nw_ut_FloatColor_ToPicaU32(param_2 + 1);
      param_2[9] = temp_v1;
      return;
    }
    break;
  case 5:
    nw_anim_res_ResTextureCoordinatorMember_SetValue(temp_v6,param_2);
    return;
  case 6:
    if (temp_v6[0][5] != 0) {
      if (temp_v6[0][5] == 1) {
        *(char *)((int)param_2 + 0x1f6) = (char)*param_3;
      }
      return;
    }
    *(char *)(param_2 + 0xc) = (char)*param_3;
    break;
  case 7:
    *(char *)(param_2 + 9) = (char)*param_3;
    return;
  case 8:
    *(char *)(param_2 + 1) = (char)*param_3;
    return;
  case 9:
    if (temp_v6[0][5] == 0) {
      FUN_0044b5f4(param_2 + 0x13,param_3);
      param_2[0x22] = param_2[0x22] | 0x800;
      return;
    }
    break;
  case 10:
    temp_v1 = *param_2;
    if (temp_v1 == -0x80000000) {
      if (temp_v6[0][5] == 0) {
        temp_v1 = param_3[1];
        temp_v3 = param_3[2];
        param_2[2] = *param_3;
        param_2[3] = temp_v1;
        param_2[4] = temp_v3;
        return;
      }
      if (temp_v6[0][5] == 1) {
        param_2[5] = *param_3;
      }
      return;
    }
    if (temp_v1 != 0x20000000) {
      if (temp_v1 != 0x40000000) {
        return;
      }
      if (temp_v6[0][5] != 0) {
        if (temp_v6[0][5] != 2) {
          return;
        }
        temp_v1 = *param_3;
        temp_v3 = param_3[1];
        temp_v4 = param_3[2];
        param_2 = param_2 + 5;
        *param_2 = temp_v1;
        param_2[1] = temp_v3;
        param_2[2] = temp_v4;
        return;
      }
    }
    else if (temp_v6[0][5] != 3) {
      return;
    }
    temp_v1 = *param_3;
    temp_v3 = param_3[1];
    temp_v4 = param_3[2];
    param_2 = param_2 + 2;
    *param_2 = temp_v1;
    param_2[1] = temp_v3;
    param_2[2] = temp_v4;
    return;
  case 0xb:
    FUN_0050c7c8(temp_v6,param_2);
    return;
  case 0xc:
    if (temp_v6[0][5] == 0) {
      *(char *)(param_2 + 0x2d) = (char)*param_3;
    }
    return;
  case 0xd:
    FUN_0050c2dc(temp_v6,param_2);
    return;
  case 0xe:
    FUN_0050c20c(temp_v6,param_2);
    return;
  case 0xf:
    nw_anim_res_ResHemiSphereLightMember_SetValue(temp_v6,param_2);
    return;
  case 0x10:
    if (temp_v6[0][5] == 0) {
      temp_v1 = param_3[1];
      temp_v3 = param_3[2];
      temp_v4 = param_3[3];
      param_2[0x2e] = *param_3;
      param_2[0x2f] = temp_v1;
      param_2[0x30] = temp_v3;
      param_2[0x31] = temp_v4;
      temp_v1 = nw_ut_FloatColor_ToPicaU32(param_2 + 0x2e);
      param_2[0x32] = temp_v1;
      return;
    }
    break;
  case 0x11:
    if (temp_v6[0][5] == 0) {
      temp_v1 = *param_3;
      temp_v3 = param_3[1];
      temp_v4 = param_3[2];
      param_2[0x30] = param_3[3];
      param_2[0x2d] = temp_v1;
      param_2[0x2e] = temp_v3;
      param_2[0x2f] = temp_v4;
      return;
    }
  }
  return;
}

} /* extern "C" */
