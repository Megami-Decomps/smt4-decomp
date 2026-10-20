/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c9760` (_code @ 0x1c9760, 0x2ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b63b0(void);
int nw_gfx_RenderContext_TransformToViewCoordinate(...);
int nw_gfx_internal_NWCopyVec4Reverse(...);

/* stack frame of param_3: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_3_stack;

extern int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005c4c24; /* 0x5c4c24 */
extern float DAT_0064c020; /* 0x64c020 */
extern float DAT_0064c024; /* 0x64c024 */
extern float DAT_0064c028; /* 0x64c028 */
extern float DAT_0064c02c; /* 0x64c02c */

/* Supplied declaration required: FUN_001b63b0. */
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: nw_gfx_RenderContext_TransformToViewCoordinate. */
/* Supplied declaration required: nw_gfx_internal_NWCopyVec4Reverse. */


void FUN_001c9760(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  float *pfVar3;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  float temp_v17;
  int temp_v18;
  unsigned int uStack_34;
  unsigned int uStack_30;
  float temp_v19;
  
  piVar1 = DAT_005b40e0;
  temp_v0 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (*(int *)(temp_v0 + 0x68) <= param_2) {
    return;
  }
  temp_v2 = *(int *)(param_1 + 0xa4) + 0x148;
  temp_v1 = *(int *)(param_3 + 8);
  temp_v0 = *(int *)(temp_v0 + 0x6c) + param_2 * -6;
  temp_v4 = 0.0f;
  temp_v5 = 1.0f;
  *DAT_005b40e0 = temp_v0 - 0x7fffffed;
  piVar1[1] = -0x7fb0fd40;
  nw_gfx_internal_NWCopyVec4Reverse(piVar1 + 2,temp_v1 + 0xbc);
  piVar1 = DAT_005b40e0;
  DAT_005b40e0 = DAT_005b40e0 + 6;
  *DAT_005b40e0 = temp_v0 - 0x7fffffec;
  piVar1[7] = -0x7fb0fd40;
  nw_gfx_internal_NWCopyVec4Reverse(piVar1 + 8,temp_v1 + 0xcc);
  DAT_005b40e0 = DAT_005b40e0 + 6;
  if (*(int *)(temp_v1 + 0xb8) != 0) {
    temp_v18 = *(unsigned int *)(param_3 + 0x98);
    uStack_34 = *(unsigned int *)(param_3 + 0xa8);
    uStack_30 = *(unsigned int *)(param_3 + 0xb8);
    temp_v19 = temp_v5;
    nw_gfx_RenderContext_TransformToViewCoordinate(param_1,&temp_v18,temp_v2);
    piVar1 = DAT_005b40e0;
    *DAT_005b40e0 = temp_v0 - 0x7fffffeb;
    piVar1[1] = -0x7fb0fd40;
    nw_gfx_internal_NWCopyVec4Reverse(piVar1 + 2,&temp_v18);
    piVar1 = DAT_005b40e0;
    DAT_005b40e0 = DAT_005b40e0 + 6;
    *DAT_005b40e0 = temp_v0 - 0x7fffffe9;
    piVar1[7] = -0x7fb0fd40;
    nw_gfx_internal_NWCopyVec4Reverse(piVar1 + 8,temp_v1 + 0xe8);
    DAT_005b40e0 = DAT_005b40e0 + 6;
    if (*(int *)(temp_v1 + 0xb8) == 2) {
      temp_v14 = *(unsigned int *)(param_3 + 0x17c);
      temp_v15 = *(unsigned int *)(param_3 + 0x180);
      temp_v16 = *(unsigned int *)(param_3 + 0x184);
      temp_v17 = temp_v4;
      nw_gfx_RenderContext_TransformToViewCoordinate(param_1,&temp_v14,temp_v2);
      temp_v10 = *(float *)(temp_v1 + 0xf8);
      temp_v11 = *(float *)(temp_v1 + 0xfc);
      temp_v3 = *(float *)(temp_v1 + 0xfc);
      temp_v12 = temp_v4;
      temp_v13 = temp_v4;
      if ((temp_v3 > temp_v4) && (0x40490fda >= (int)temp_v3)) {
        temp_v3 = temp_v3 * 40.743664f;
        FUN_001b63b0();
        temp_v11 = temp_v3;
        temp_v17 = temp_v5;
      }
      else {
        temp_v17 = temp_v4;
        if (temp_v3 == temp_v4) {
          temp_v11 = 1.00001f;
          temp_v17 = temp_v5;
        }
      }
      piVar1 = DAT_005b40e0;
      *DAT_005b40e0 = temp_v0 - 0x7fffffea;
      piVar1[1] = -0x7fb0fd40;
      nw_gfx_internal_NWCopyVec4Reverse(piVar1 + 2,&temp_v14);
      pfVar3 = &temp_v10;
      temp_v0 = temp_v0 - 0x7fffffe8;
      DAT_005b40e0 = DAT_005b40e0 + 6;
      piVar1 = DAT_005b40e0;
      *DAT_005b40e0 = temp_v0;
      piVar1[1] = -0x7fb0fd40;
      nw_gfx_internal_NWCopyVec4Reverse(piVar1 + 2,pfVar3);
      DAT_005b40e0 = DAT_005b40e0 + 6;
      return;
    }
    if (((DAT_005c4c24 & 1) == 0) && (temp_v1 = FUN_002eba64(&DAT_005c4c24), temp_v1 != 0)) {
      DAT_0064c020 = temp_v4;
      DAT_0064c024 = temp_v4;
      DAT_0064c028 = temp_v4;
      DAT_0064c02c = temp_v4;
    }
    pfVar3 = &DAT_0064c020;
    temp_v0 = temp_v0 + 0x16;
  }
  else {
    temp_v6 = *(float *)(param_3 + 0x17c);
    temp_v7 = *(float *)(param_3 + 0x180);
    temp_v8 = *(float *)(param_3 + 0x184);
    temp_v9 = temp_v4;
    nw_gfx_RenderContext_TransformToViewCoordinate(param_1,&temp_v6,temp_v2);
    temp_v10 = -temp_v6;
    pfVar3 = &temp_v10;
    temp_v0 = temp_v0 + 0x15;
    temp_v11 = -temp_v7;
    temp_v13 = -temp_v9;
    temp_v12 = -temp_v8;
  }
  temp_v0 = temp_v0 + -0x80000000;
  piVar1 = DAT_005b40e0;
  *DAT_005b40e0 = temp_v0;
  piVar1[1] = -0x7fb0fd40;
  nw_gfx_internal_NWCopyVec4Reverse(piVar1 + 2,pfVar3);
  DAT_005b40e0 = DAT_005b40e0 + 6;
  return;
}

} /* extern "C" */
