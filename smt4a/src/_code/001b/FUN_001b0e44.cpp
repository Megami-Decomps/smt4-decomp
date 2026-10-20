/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b0e44` (_code @ 0x1b0e44, 0x460 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_AnimEvaluator_SetCacheBufferPointers(int *);

typedef int romwright_code(...);
/* stack frame of param_5: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_5_stack;

extern unsigned char LAB_001b9f9c; /* 0x1b9f9c */
extern int nw_anim_PlayPolicy_Loop(...); /* 0x1c37f8 */

/* Supplied declaration required: nw_gfx_AnimEvaluator_SetCacheBufferPointers. */


int FUN_001b0e44(int *param_1,int *param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int **ppiVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  romwright_code *pcVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar11;
  int *temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int *temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int *temp_v12;
  int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  
  temp_v0 = *param_2;
  param_1[0x15] = temp_v0;
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0;
  temp_v2 = 0;
  param_1[0x12] = *(int *)(temp_v0 + 0x14);
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  if (*(char *)(temp_v0 + 0x10) == '\0') {
    pcVar6 = (romwright_code *)&LAB_001b9f9c;
    param_1[0x13] = (int)pcVar6;
  }
  else if (*(char *)(temp_v0 + 0x10) == '\x01') {
    pcVar6 = nw_anim_PlayPolicy_Loop;
    param_1[0x13] = (int)pcVar6;
  }
  *(unsigned char *)(param_1 + 0x16) = 1;
  temp_v0 = (**(romwright_code **)(*(int *)param_1[1] + 8))((int *)param_1[1],param_3 << 2,4);
  if (temp_v0 == 0) {
    temp_v2 = -0x80000000;
  }
  if (-1 < temp_v2) {
    ppiVar2 = (int **)(param_1 + 4);
    temp_v8 = (int *)param_1[1];
    temp_v9 = temp_v0;
    temp_v11 = param_3 & 0x3fffffff;
    if (ppiVar2 != &temp_v8) {
      temp_v9 = param_1[5];
      temp_v11 = param_1[7];
      temp_v8 = *ppiVar2;
      *ppiVar2 = (int *)param_1[1];
      param_1[5] = temp_v0;
      param_1[6] = temp_v0;
      param_1[7] = param_3 & 0x3fffffff;
    }
    temp_v10 = temp_v9;
    temp_v0 = 0;
    if (temp_v8 != (int *)0x0) {
      temp_v0 = temp_v9;
    }
    if (temp_v8 != (int *)0x0 && temp_v0 != 0) {
      (**(romwright_code **)(*temp_v8 + 0xc))(temp_v8,temp_v9);
    }
    temp_v0 = (**(romwright_code **)(*(int *)param_1[1] + 8))((int *)param_1[1],param_4 << 2,4);
    if (temp_v0 == 0) {
      temp_v2 = -0x80000000;
    }
    if (-1 < temp_v2) {
      ppiVar2 = (int **)(param_1 + 8);
      temp_v12 = (int *)param_1[1];
      temp_v13 = temp_v0;
      temp_v15 = param_4 & 0x3fffffff;
      if (ppiVar2 != &temp_v12) {
        temp_v13 = param_1[9];
        temp_v15 = param_1[0xb];
        temp_v12 = *ppiVar2;
        param_1[9] = temp_v0;
        param_1[10] = temp_v0;
        param_1[0xb] = param_4 & 0x3fffffff;
        *ppiVar2 = (int *)param_1[1];
      }
      temp_v14 = temp_v13;
      temp_v0 = 0;
      if (temp_v12 != (int *)0x0) {
        temp_v0 = temp_v13;
      }
      if (temp_v12 != (int *)0x0 && temp_v0 != 0) {
        (**(romwright_code **)(*temp_v12 + 0xc))(temp_v12,temp_v13);
      }
    }
  }
  if (-1 < temp_v2) {
    temp_v0 = (**(romwright_code **)(*(int *)param_1[1] + 8))((int *)param_1[1],param_4 << 2,4);
    if (temp_v0 == 0) {
      return -0x80000000;
    }
    ppiVar2 = (int **)(param_1 + 0x19);
    temp_v4 = (int *)param_1[1];
    temp_v5 = temp_v0;
    temp_v7 = param_4 & 0x3fffffff;
    if (ppiVar2 != &temp_v4) {
      temp_v5 = param_1[0x1a];
      temp_v7 = param_1[0x1c];
      temp_v4 = *ppiVar2;
      *ppiVar2 = (int *)param_1[1];
      param_1[0x1a] = temp_v0;
      param_1[0x1b] = temp_v0;
      param_1[0x1c] = param_4 & 0x3fffffff;
    }
    temp_v6 = temp_v5;
    temp_v0 = 0;
    if (temp_v4 != (int *)0x0) {
      temp_v0 = temp_v5;
    }
    if (temp_v4 != (int *)0x0 && temp_v0 != 0) {
      (**(romwright_code **)(*temp_v4 + 0xc))(temp_v4,temp_v5);
    }
    temp_v3 = *(unsigned int *)(*param_2 + 0x18);
    if ((int)temp_v3 < (param_1[0x1b] - param_1[0x1a]) >> 2) {
      if ((int)temp_v3 < 0) {
        temp_v3 = 0;
      }
      param_1[0x1b] = param_1[0x1a] + temp_v3 * 4;
    }
    else {
      if ((int)(param_1[0x1c] & 0x3fffffffU) < (int)temp_v3) {
        if (((param_1[0x19] != 0) && ((param_1[0x1c] & 0xc0000000U) == 0x40000000)) &&
           (puVar3 = (unsigned int *)
                     (**(romwright_code **)(*(int *)param_1[0x19] + 8))((int *)param_1[0x19],temp_v3 << 2,0x20)
           , puVar3 != (unsigned int *)0x0)) {
          temp_v0 = 0;
          puVar4 = (unsigned int *)param_1[0x1a];
          puVar8 = (unsigned int *)param_1[0x1b];
          puVar7 = puVar3;
          if (puVar4 != puVar8) {
            do {
              if (puVar7 != (unsigned int *)0x0) {
                *puVar7 = *puVar4;
              }
              puVar4 = puVar4 + 1;
              puVar7 = puVar7 + 1;
            } while (puVar4 != puVar8);
            temp_v0 = (param_1[0x1b] - param_1[0x1a]) >> 2;
          }
          if (param_1[0x1a] != 0) {
            param_1[0x1b] = param_1[0x1a];
            (**(romwright_code **)(*(int *)param_1[0x19] + 0xc))();
          }
          param_1[0x1b] = (int)(puVar3 + temp_v0);
          param_1[0x1a] = (int)puVar3;
          param_1[0x1c] = (param_1[0x1c] & 0xc0000000U) | temp_v3;
        }
        else {
          temp_v3 = param_1[0x1c] & 0x3fffffff;
        }
      }
      param_1[0x1b] = param_1[0x1a] + temp_v3 * 4;
    }
    if ((param_5 != 0) && (*(int *)(*param_2 + 0x18) != 0)) {
      piVar11 = (int *)param_1[1];
      temp_v1 = (**(romwright_code **)(*param_1 + 0x2c))(param_1);
      temp_v0 = (**(romwright_code **)(*piVar11 + 8))(piVar11,temp_v1,4);
      if (temp_v0 == 0) {
        temp_v2 = -0x80000000;
      }
      param_1[0x17] = temp_v0;
      if (temp_v2 < 0) {
        return temp_v2;
      }
      nw_gfx_AnimEvaluator_SetCacheBufferPointers(param_1);
    }
  }
  return temp_v2;
}

} /* extern "C" */
