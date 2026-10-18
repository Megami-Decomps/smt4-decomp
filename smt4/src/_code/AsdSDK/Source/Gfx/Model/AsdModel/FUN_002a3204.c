/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3204` (_code @ 0x2a3204, 0x2d4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern signed char DAT_00464af5; /* 0x464af5 */
extern unsigned int DAT_00464b70; /* 0x464b70 */

/* Supplied declaration required: FUN_002c3364. */
/* Supplied declaration required: nw_gfx_res_ResTextureMapper_SetTexture. */
/* Supplied declaration required: nw_gfx_res_ResTextureSampler_GetOwnerCommand. */
/* Supplied declaration required: nw_ut_FloatColor_ToPicaU32. */


void FUN_002a3204(int param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_s0; 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int in_s0;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int *temp_v8;
  int temp_v9;
  unsigned char temp_v10 [4];
  int temp_v11;
  int *temp_v12 [6];
  
  temp_v5 = *(int *)(param_1 + 8);
  temp_v7 = 0x3f800000;
  *(unsigned int *)(temp_v5 + 0x2a8) = 0;
  *(unsigned int *)(temp_v5 + 0x2b0) = 0;
  *(unsigned int *)(temp_v5 + 0x2c8) = 0;
  *(unsigned int *)(temp_v5 + 0x2b4) = 0;
  *(unsigned int *)(temp_v5 + 0x174) = 2;
  *(unsigned int *)(temp_v5 + 0x170) = 4;
  *(unsigned int *)(temp_v5 + 0x2ac) = 0;
  if (*(int *)(temp_v5 + 0x274) != 0) {
    temp_v9 = temp_v5 + 0x274 + *(int *)(temp_v5 + 0x274);
  }
  else {
    temp_v9 = 0;
  }
  if (param_2 == 0) {
    temp_v2 = *(int *)(temp_v9 + 8);
    if (temp_v2 != 0) {
      temp_v12[0] = (int *)(temp_v9 + 8 + temp_v2);
    }
    else {
      temp_v12[0] = (int *)0x0;
    }
    if (*temp_v12[0] == 0x20000004) {
      temp_v2 = temp_v12[0][7];
      if (temp_v2 != 0) {
        temp_v12[0] = (int *)((int)(temp_v12[0] + 7) + temp_v2);
      }
      else {
        temp_v12[0] = (int *)0x0;
      }
    }
    FUN_002c3364(temp_v12);
    nw_gfx_res_ResTextureMapper_SetTexture(&temp_v9,DAT_00464b70);
    temp_v2 = *(int *)(temp_v9 + 0xc);
    if (temp_v2 != 0) {
      temp_v8 = (unsigned int *)(temp_v9 + 0xc + temp_v2);
    }
    else {
      temp_v8 = (unsigned int *)0x0;
    }
    if ((temp_v8 != (unsigned int *)0x0) && ((*temp_v8 & 0x80000000) == 0)) {
      temp_v8 = (unsigned int *)0x0;
    }
    nw_gfx_res_ResTextureSampler_GetOwnerCommand(temp_v10,&temp_v8);
    *(unsigned int *)(temp_v11 + 0x14) = (*(unsigned int *)(temp_v11 + 0x14) & 0xffff8fff) | 0x1000;
    nw_gfx_res_ResTextureSampler_GetOwnerCommand(temp_v10,&temp_v8);
    *(unsigned int *)(temp_v11 + 0x14) = (*(unsigned int *)(temp_v11 + 0x14) & 0xfffff8ff) | 0x100;
    temp_v6 = temp_v7;
    if (DAT_00464af5 != '\0') {
      temp_v6 = 0;
    }
    temp_v8[3] = temp_v6;
    temp_v8[4] = temp_v6;
    temp_v8[5] = temp_v6;
    temp_v8[6] = temp_v7;
    temp_v0 = nw_ut_FloatColor_ToPicaU32(temp_v8 + 3);
    nw_gfx_res_ResTextureSampler_GetOwnerCommand(temp_v10,&temp_v8);
    temp_v2 = 0;
    *(unsigned int *)(temp_v11 + 8) = temp_v0;
    if (*(int *)(temp_v5 + 0x288) != 0) {
      temp_v4 = *(int *)(temp_v5 + 0x288) + temp_v5 + 0x288;
    }
    else {
      temp_v4 = 0;
    }
    temp_v3 = 5;
    do {
      temp_v1 = temp_v4 + temp_v3 * 0x1c;
      if (((*(unsigned int *)(temp_v1 + 0x3c) & 0xf) != 0) || ((*(unsigned int *)(temp_v1 + 0x30) & 0xf) != 0xf)) {
        temp_v2 = temp_v3;
        if (temp_v3 >= 4) goto LAB_002a3268;
        break;
      }
      temp_v3 = temp_v3 - 1;
    } while (-1 < temp_v3);
    temp_v6 = 1 << ((temp_v2 + 8U) & 0xff);
    *(unsigned int *)(temp_v4 + 0xe4) = (*(unsigned int *)(temp_v4 + 0xe4) & ~temp_v6) | temp_v6;
    temp_v3 = temp_v4 + (temp_v2 + 1) * 0x1c;
    *(unsigned int *)(temp_v3 + 0x30) = (*(unsigned int *)(temp_v3 + 0x30) & 0xffffff00) | 0xe3;
    *(unsigned int *)(temp_v3 + 0x38) = (*(unsigned int *)(temp_v3 + 0x38) & 0xffffff00) | 1;
    *(unsigned int *)(temp_v3 + 0x2c) = 5;
    *(unsigned int *)(temp_v3 + 0x3c) = (*(unsigned int *)(temp_v3 + 0x3c) & 0xfffffff0) | 1;
    temp_v4 = temp_v4 + (temp_v2 + 2) * 0x1c;
    *(unsigned int *)(temp_v4 + 0x30) = (*(unsigned int *)(temp_v4 + 0x30) & 0xffffff00) | 0xfd;
    *(unsigned int *)(temp_v4 + 0x38) = (*(unsigned int *)(temp_v4 + 0x38) & 0xffffff00) | 0x10;
    *(unsigned int *)(temp_v4 + 0x3c) = (*(unsigned int *)(temp_v4 + 0x3c) & 0xfffffff0) | 1;
  }
LAB_002a3268:
  if (0 < (*(int *)(param_1 + 0x14) - (int)*(int **)(param_1 + 0x10)) >> 2) {
    if (*(int *)(param_1 + 0x24) >= 1) {
      temp_v5 = **(int **)(param_1 + 0x10);
    }
    else {
      temp_v5 = 0;
    }
    *(unsigned int *)(temp_v5 + 0x2b4) = 0;
  }
  *(unsigned int *)(temp_v5 + 0xc4) = in_s0;
  *(unsigned int *)(temp_v5 + 200) = in_s0;
  *(unsigned int *)(temp_v5 + 0xcc) = in_s0;
  *(unsigned int *)(temp_v5 + 0xd0) = temp_v7;
  temp_v0 = nw_ut_FloatColor_ToPicaU32(temp_v5 + 0xc4);
  *(unsigned int *)(temp_v5 + 0xfc) = temp_v0;
  return;
}
