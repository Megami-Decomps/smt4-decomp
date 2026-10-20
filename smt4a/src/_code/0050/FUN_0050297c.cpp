/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050297c` (_code @ 0x50297c, 0x760 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d3d38(int, int, int);
int FUN_00504924(unsigned int, int, float *, int, int, int);
int nw_gfx_WorldMatrixUpdater_CalculateWorldBasic(unsigned int, int, float *, int, int, int);
int nw_gfx_WorldMatrixUpdater_CalculateWorldMayaSsc(void);

typedef int romwright_code(...);
/* stack frame of param_3: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_3_stack;

/* Supplied declaration required: FUN_001d3d38. */
extern int FUN_0044c060(void);
/* Supplied declaration required: FUN_00504924. */
/* Supplied declaration required: nw_gfx_WorldMatrixUpdater_CalculateWorldBasic. */
/* Supplied declaration required: nw_gfx_WorldMatrixUpdater_CalculateWorldMayaSsc. */


void FUN_0050297c(unsigned int param_1,int *param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  unsigned int *puVar9;
  int temp_v7;
  int temp_v8;
  unsigned int *puVar12;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  int temp_v21;
  unsigned int temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  unsigned int uStack_30;
  int *piStack_2c;
  unsigned int temp_v29;
  
  temp_v21 = param_2[2];
  temp_v22 = (unsigned int)((~*(unsigned int *)(temp_v21 + 0x28) & 1) == 0);
  uStack_30 = param_1;
  piStack_2c = param_2;
  temp_v29 = param_3;
  temp_v1 = (**(romwright_code **)(*param_2 + 0xc))(param_2);
  temp_v2 = (**(romwright_code **)(*param_2 + 0x14))(param_2);
  temp_v8 = 0;
  temp_v3 = (**(romwright_code **)(*param_2 + 0x1c))(param_2);
  temp_v17 = 0;
  temp_v11 = *(int *)(temp_v3 + 4);
  temp_v3 = *(int *)(temp_v3 + 8);
  temp_v14 = 0xb58637be358637be;
  temp_v6 = *(unsigned int *)(temp_v21 + 0x24) & 0xff;
  if (temp_v6 != 1) {
    if (temp_v6 != 0) {
      for (; temp_v3 != temp_v11; temp_v11 = temp_v11 + 0x30) {
        puVar12 = *(unsigned int **)(param_2[4] + 0xc);
        for (puVar9 = *(unsigned int **)(param_2[4] + 8); puVar9 != puVar12; puVar9 = puVar9 + 1) {
          (*(romwright_code *)**(unsigned int **)*puVar9)((unsigned int *)*puVar9,param_2,temp_v8);
        }
        if ((*(unsigned int *)(*(int *)(temp_v1 + 4) + temp_v8 * 0x40 + 0x3c) & 1) != 0) {
          temp_v4 = *(int *)(temp_v21 + 0x1c);
          if (temp_v4 != 0) {
            temp_v4 = temp_v4 + temp_v21 + 0x1c;
          }
          temp_v5 = 0;
          if (temp_v4 != 0) {
            piVar7 = (int *)(temp_v4 + temp_v8 * 0x10 + 0x28);
            temp_v5 = *piVar7;
            if (temp_v5 != 0) {
              temp_v5 = temp_v5 + (int)piVar7;
            }
          }
          temp_v4 = *(int *)(temp_v5 + 0xc);
          if (temp_v4 != -1) {
            temp_v5 = *(int *)(temp_v1 + 4) + temp_v4 * 0x40;
            temp_v4 = *(int *)(temp_v2 + 4) + temp_v4 * 0x40;
          }
          else if (temp_v22 != 0) {
            temp_v4 = FUN_0044c060();
            temp_v5 = FUN_0044c060();
          }
          else {
            temp_v4 = param_2[3] + 0xbc;
            temp_v5 = param_2[3] + 0x4c;
          }
          temp_v7 = *(int *)(temp_v2 + 4) + temp_v8 * 0x40;
          FUN_00504924(temp_v29,temp_v7,&temp_v26,*(int *)(temp_v1 + 4) + temp_v8 * 0x40,temp_v4,temp_v5);
          if ((int)(temp_v26 * temp_v26 + temp_v27 * temp_v27 + temp_v28 * temp_v28) < 0x358637be) {
            temp_v16 = (float)temp_v17;
            temp_v12 = temp_v16 <= temp_v26;
            temp_v0 = temp_v16 <= temp_v27;
            temp_v15 = (float)((unsigned long long)temp_v14 >> 0x20);
            temp_v13 = (float)temp_v14;
            temp_v26 = temp_v15;
            if (temp_v12) {
              temp_v26 = temp_v13;
            }
            temp_v12 = temp_v16 <= temp_v28;
            temp_v27 = temp_v15;
            if (temp_v0) {
              temp_v27 = temp_v13;
            }
            temp_v28 = temp_v15;
            if (temp_v12) {
              temp_v28 = temp_v13;
            }
          }
          *(float *)(temp_v7 + 0x30) = temp_v26;
          *(float *)(temp_v7 + 0x34) = temp_v27;
          *(float *)(temp_v7 + 0x38) = temp_v28;
          FUN_001d3d38(temp_v11,temp_v7,temp_v7 + 0x30);
          temp_v6 = *(unsigned int *)(temp_v7 + 0x3c);
          *(unsigned int *)(temp_v7 + 0x3c) = temp_v6 & 0xfffff81f;
          if ((temp_v6 & 8) == 0) {
            temp_v6 = temp_v6 & 0xfffff81f;
            *(unsigned int *)(temp_v7 + 0x3c) = temp_v6;
            temp_v13 = *(float *)(temp_v7 + 0x30);
            temp_v12 = 0;
            if (temp_v13 == *(float *)(temp_v7 + 0x34)) {
              temp_v12 = temp_v13 == *(float *)(temp_v7 + 0x38);
            }
            if ((temp_v12) &&
               (*(unsigned int *)(temp_v7 + 0x3c) = temp_v6 | 0x400, *(float *)(temp_v7 + 0x30) == 1.0f)) {
              *(unsigned int *)(temp_v7 + 0x3c) = temp_v6 | 0x600;
            }
          }
        }
        puVar12 = *(unsigned int **)(param_2[5] + 0xc);
        for (puVar9 = *(unsigned int **)(param_2[5] + 8); puVar9 != puVar12; puVar9 = puVar9 + 1) {
          (*(romwright_code *)**(unsigned int **)*puVar9)((unsigned int *)*puVar9,param_2,temp_v8);
        }
        temp_v8 = temp_v8 + 1;
      }
    }
    else {
      for (; temp_v3 != temp_v11; temp_v11 = temp_v11 + 0x30) {
        puVar12 = *(unsigned int **)(param_2[4] + 0xc);
        for (puVar9 = *(unsigned int **)(param_2[4] + 8); puVar9 != puVar12; puVar9 = puVar9 + 1) {
          (*(romwright_code *)**(unsigned int **)*puVar9)((unsigned int *)*puVar9,param_2,temp_v8);
        }
        if ((*(unsigned int *)(*(int *)(temp_v1 + 4) + temp_v8 * 0x40 + 0x3c) & 1) != 0) {
          temp_v4 = *(int *)(temp_v21 + 0x1c);
          if (temp_v4 != 0) {
            temp_v4 = temp_v4 + temp_v21 + 0x1c;
          }
          temp_v5 = 0;
          if (temp_v4 != 0) {
            piVar7 = (int *)(temp_v4 + temp_v8 * 0x10 + 0x28);
            temp_v5 = *piVar7;
            if (temp_v5 != 0) {
              temp_v5 = temp_v5 + (int)piVar7;
            }
          }
          temp_v4 = *(int *)(temp_v5 + 0xc);
          if (temp_v4 != -1) {
            temp_v5 = *(int *)(temp_v1 + 4) + temp_v4 * 0x40;
            temp_v4 = *(int *)(temp_v2 + 4) + temp_v4 * 0x40;
          }
          else if (temp_v22 != 0) {
            temp_v4 = FUN_0044c060();
            temp_v5 = FUN_0044c060();
          }
          else {
            temp_v4 = param_2[3] + 0xbc;
            temp_v5 = param_2[3] + 0x4c;
          }
          temp_v7 = *(int *)(temp_v2 + 4) + temp_v8 * 0x40;
          temp_v10 = *(int *)(temp_v1 + 4) + temp_v8 * 0x40;
          nw_gfx_WorldMatrixUpdater_CalculateWorldBasic
                    (temp_v29,temp_v7,&temp_v23,temp_v10,temp_v4,temp_v5);
          if ((int)(temp_v23 * temp_v23 + temp_v24 * temp_v24 + temp_v25 * temp_v25) < 0x358637be) {
            temp_v16 = (float)temp_v17;
            temp_v12 = temp_v16 <= temp_v23;
            temp_v0 = temp_v16 <= temp_v24;
            temp_v15 = (float)((unsigned long long)temp_v14 >> 0x20);
            temp_v13 = (float)temp_v14;
            temp_v23 = temp_v15;
            if (temp_v12) {
              temp_v23 = temp_v13;
            }
            temp_v12 = temp_v16 <= temp_v25;
            temp_v24 = temp_v15;
            if (temp_v0) {
              temp_v24 = temp_v13;
            }
            temp_v25 = temp_v15;
            if (temp_v12) {
              temp_v25 = temp_v13;
            }
          }
          *(float *)(temp_v7 + 0x30) = temp_v23;
          *(float *)(temp_v7 + 0x34) = temp_v24;
          *(float *)(temp_v7 + 0x38) = temp_v25;
          FUN_001d3d38(temp_v11,temp_v7,temp_v10 + 0x30);
          temp_v6 = *(unsigned int *)(temp_v7 + 0x3c);
          *(unsigned int *)(temp_v7 + 0x3c) = temp_v6 & 0xfffff81f;
          if ((temp_v6 & 8) == 0) {
            temp_v6 = temp_v6 & 0xfffff81f;
            *(unsigned int *)(temp_v7 + 0x3c) = temp_v6;
            temp_v13 = *(float *)(temp_v7 + 0x30);
            temp_v12 = 0;
            if (temp_v13 == *(float *)(temp_v7 + 0x34)) {
              temp_v12 = temp_v13 == *(float *)(temp_v7 + 0x38);
            }
            if ((temp_v12) &&
               (*(unsigned int *)(temp_v7 + 0x3c) = temp_v6 | 0x400, *(float *)(temp_v7 + 0x30) == 1.0f)) {
              *(unsigned int *)(temp_v7 + 0x3c) = temp_v6 | 0x600;
            }
          }
        }
        puVar12 = *(unsigned int **)(param_2[5] + 0xc);
        for (puVar9 = *(unsigned int **)(param_2[5] + 8); puVar9 != puVar12; puVar9 = puVar9 + 1) {
          (*(romwright_code *)**(unsigned int **)*puVar9)((unsigned int *)*puVar9,param_2,temp_v8);
        }
        temp_v8 = temp_v8 + 1;
      }
    }
  }
  else {
    for (; temp_v3 != temp_v11; temp_v11 = temp_v11 + 0x30) {
      puVar12 = *(unsigned int **)(param_2[4] + 0xc);
      for (puVar9 = *(unsigned int **)(param_2[4] + 8); puVar9 != puVar12; puVar9 = puVar9 + 1) {
        (*(romwright_code *)**(unsigned int **)*puVar9)((unsigned int *)*puVar9,param_2,temp_v8);
      }
      if ((*(unsigned int *)(*(int *)(temp_v1 + 4) + temp_v8 * 0x40 + 0x3c) & 1) != 0) {
        temp_v4 = *(int *)(temp_v21 + 0x1c);
        if (temp_v4 != 0) {
          temp_v4 = temp_v4 + temp_v21 + 0x1c;
        }
        if (temp_v4 != 0) {
          piVar7 = (int *)(temp_v4 + temp_v8 * 0x10 + 0x28);
          temp_v4 = *piVar7;
          if (temp_v4 != 0) {
            temp_v4 = temp_v4 + (int)piVar7;
          }
          else {
            temp_v4 = 0;
          }
        }
        else {
          temp_v4 = 0;
        }
        temp_v5 = *(int *)(temp_v4 + 0xc);
        if (temp_v5 != -1) {
          temp_v7 = *(int *)(temp_v1 + 4) + temp_v5 * 0x40;
          temp_v5 = *(int *)(temp_v2 + 4) + temp_v5 * 0x40;
        }
        else if (temp_v22 != 0) {
          temp_v5 = FUN_0044c060();
          temp_v7 = FUN_0044c060();
        }
        else {
          temp_v5 = param_2[3] + 0xbc;
          temp_v7 = param_2[3] + 0x4c;
        }
        temp_v10 = *(int *)(temp_v2 + 4) + temp_v8 * 0x40;
        temp_v9 = *(int *)(temp_v1 + 4) + temp_v8 * 0x40;
        if ((*(unsigned int *)(temp_v4 + 4) & 0x20) != 0) {
          nw_gfx_WorldMatrixUpdater_CalculateWorldMayaSsc();
        }
        else {
          nw_gfx_WorldMatrixUpdater_CalculateWorldBasic
                    (temp_v29,temp_v10,&temp_v18,temp_v9,temp_v5,temp_v7);
        }
        if ((int)(temp_v18 * temp_v18 + temp_v19 * temp_v19 + temp_v20 * temp_v20) < 0x358637be) {
          temp_v16 = (float)temp_v17;
          temp_v12 = temp_v16 <= temp_v18;
          temp_v0 = temp_v16 <= temp_v19;
          temp_v15 = (float)((unsigned long long)temp_v14 >> 0x20);
          temp_v13 = (float)temp_v14;
          temp_v18 = temp_v15;
          if (temp_v12) {
            temp_v18 = temp_v13;
          }
          temp_v12 = temp_v16 <= temp_v20;
          temp_v19 = temp_v15;
          if (temp_v0) {
            temp_v19 = temp_v13;
          }
          temp_v20 = temp_v15;
          if (temp_v12) {
            temp_v20 = temp_v13;
          }
        }
        *(float *)(temp_v10 + 0x30) = temp_v18;
        *(float *)(temp_v10 + 0x34) = temp_v19;
        *(float *)(temp_v10 + 0x38) = temp_v20;
        FUN_001d3d38(temp_v11,temp_v10,temp_v9 + 0x30);
        temp_v6 = *(unsigned int *)(temp_v10 + 0x3c);
        *(unsigned int *)(temp_v10 + 0x3c) = temp_v6 & 0xfffff81f;
        if ((temp_v6 & 8) == 0) {
          temp_v6 = temp_v6 & 0xfffff81f;
          *(unsigned int *)(temp_v10 + 0x3c) = temp_v6;
          temp_v13 = *(float *)(temp_v10 + 0x30);
          temp_v12 = 0;
          if (temp_v13 == *(float *)(temp_v10 + 0x34)) {
            temp_v12 = temp_v13 == *(float *)(temp_v10 + 0x38);
          }
          if ((temp_v12) &&
             (*(unsigned int *)(temp_v10 + 0x3c) = temp_v6 | 0x400, *(float *)(temp_v10 + 0x30) == 1.0f)) {
            *(unsigned int *)(temp_v10 + 0x3c) = temp_v6 | 0x600;
          }
        }
      }
      puVar12 = *(unsigned int **)(param_2[5] + 0xc);
      for (puVar9 = *(unsigned int **)(param_2[5] + 8); puVar9 != puVar12; puVar9 = puVar9 + 1) {
        (*(romwright_code *)**(unsigned int **)*puVar9)((unsigned int *)*puVar9,param_2,temp_v8);
      }
      temp_v8 = temp_v8 + 1;
    }
  }
  return;
}

} /* extern "C" */
