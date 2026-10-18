/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResMaterial_SetupShader` (_code @ 0x18d1e0, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern int FUN_0018e1f4(unsigned int **, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001a90f0. */
/* Supplied declaration required: nw_gfx_res_GetReferenceShaderTarget. */
/* Supplied declaration required: nw_gfx_res_ResMaterial_CacheUserUniformIndex. */
/* Supplied declaration required: nw_gfx_res_ResShader_Dereference. */


int nw_gfx_res_ResMaterial_SetupShader
              (int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 3 unstructured edge(s); 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int **ppuVar3;
  int temp_v1;
  int *piVar5;
  unsigned int *puVar6;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *temp_v4;
  char temp_v5;
  unsigned int *temp_v6 [2];
  unsigned char temp_v7 [8];
  int *piStack_28;
  unsigned int uStack_24;
  unsigned int *temp_v8;
  unsigned int uStack_1c;
  
  temp_v6[0] = (unsigned int *)0x0;
  if (param_3 == (unsigned int *)0x0) {
    return 0;
  }
  puVar6 = param_3;
  if ((~*param_3 & 0x80000001) != 0) {
    puVar6 = (unsigned int *)0x0;
  }
  temp_v3 = 0;
  puVar1 = param_3;
  piStack_28 = param_1;
  uStack_24 = param_2;
  temp_v8 = param_3;
  uStack_1c = param_4;
  if (puVar6 != (unsigned int *)0x0) {
    temp_v2 = puVar6[7];
    if (temp_v2 != 0) {
      temp_v0 = (int)puVar6 + temp_v2 + 0x1c;
    }
    else {
      temp_v0 = 0;
    }
    if (temp_v0 != 0) {
      if (temp_v2 != 0) {
        puVar1 = (unsigned int *)((int)puVar6 + temp_v2 + 0x1c);
      }
      else {
        puVar1 = (unsigned int *)0x0;
      }
      temp_v6[0] = puVar1;
      temp_v0 = FUN_0018e1f4(temp_v6,param_2,param_4);
    }
    else {
      temp_v4 = (unsigned int *)0x0;
      temp_v5 = '\0';
      nw_gfx_res_GetReferenceShaderTarget(temp_v7,puVar6,param_4);
      FUN_001a90f0(&temp_v4,temp_v7);
      if (temp_v5 == '\0') {
        temp_v0 = -0x7ffffffe;
      }
      else {
        temp_v6[0] = temp_v4;
        puVar1 = temp_v6[0];
        temp_v6[0] = puVar1;
        temp_v0 = FUN_0018e1f4(temp_v6,param_2,param_4);
      }
    }
  }
  else {
    temp_v6[0] = puVar1;
    temp_v0 = FUN_0018e1f4(temp_v6,param_2,param_4);
  }
  if ((temp_v8 != (unsigned int *)0x0) && (-1 < temp_v0)) {
    *(unsigned int *)(*param_1 + 0x18) = *(unsigned int *)(*param_1 + 0x18) | 0x80;
    ppuVar3 = &temp_v8;
    nw_gfx_res_ResShader_Dereference();
    puVar6 = ppuVar3[0xb];
    if (puVar6 != (unsigned int *)0x0) {
      temp_v1 = (int)(ppuVar3 + 0xb) + (int)puVar6;
    }
    else {
      temp_v1 = 0;
    }
    piVar5 = (int *)(temp_v1 + *(int *)(*param_1 + 0x28c) * 4);
    temp_v1 = *piVar5;
    if (temp_v1 != 0) {
      temp_v1 = (int)piVar5 + temp_v1;
    }
    else {
      temp_v1 = 0;
    }
    if (*(int *)(temp_v1 + 0x18) != 0) {
      temp_v3 = *(int *)(temp_v1 + 0x18) + temp_v1 + 0x18;
    }
    nw_gfx_res_ResMaterial_CacheUserUniformIndex(param_1,temp_v3,temp_v3 + *(int *)(temp_v1 + 0x14) * 4);
  }
  return temp_v0;
}
