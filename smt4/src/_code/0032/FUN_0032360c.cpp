/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032360c` (_code @ 0x32360c, 0x2c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c2424(int, unsigned int);
int FUN_003409f8(int, float *, float *);
int nw_gfx_res_ResTextureMapper_SetTexture(int *, unsigned int);

/* stack frame of param_3: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

/* Supplied declaration required: FUN_002c2424. */
/* Supplied declaration required: FUN_003409f8. */
/* Supplied declaration required: nw_gfx_res_ResTextureMapper_SetTexture. */


void FUN_0032360c(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  float *pfVar6;
  unsigned int temp_v3;
  unsigned int *puVar8;
  unsigned int temp_v4;
  unsigned int unaff_r7;
  unsigned int temp_v5;
  int temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  int temp_v10;
  short *temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  
  temp_v16 = param_1;
  temp_v17 = param_2;
  temp_v18 = param_3;
  FUN_003409f8(param_2,&temp_v12,&temp_v14);
  temp_v10 = 0;
  if (0 < *(int *)(temp_v18 + 0x100)) {
    temp_v9 = 0x3f000000;
    do {
      temp_v11 = (short *)(temp_v18 + temp_v10 * 4);
      piVar1 = (int *)(*(int *)(*(int *)(*(int *)(temp_v16 + 8) + 0x2c) + 8) + 200);
      temp_v2 = *piVar1;
      if (temp_v2 != 0) {
        temp_v2 = (int)piVar1 + temp_v2;
      }
      else {
        temp_v2 = 0;
      }
      piVar1 = (int *)(temp_v2 + *temp_v11 * 4);
      temp_v2 = *piVar1;
      if (temp_v2 != 0) {
        puVar8 = (unsigned int *)(temp_v2 + (int)piVar1);
      }
      else {
        puVar8 = (unsigned int *)0x0;
      }
      if ((puVar8 != (unsigned int *)0x0) && ((~*puVar8 & 0x10000001) != 0)) {
        puVar8 = (unsigned int *)0x0;
      }
      if (puVar8 != (unsigned int *)0x0) {
        temp_v4 = puVar8[0xe];
        temp_v2 = 0;
        if (temp_v2 < (int)temp_v4) {
          do {
            if (puVar8[0xf] != 0) {
              temp_v0 = (int)puVar8 + puVar8[0xf] + 0x3c;
            }
            else {
              temp_v0 = 0;
            }
            piVar1 = (int *)(temp_v0 + temp_v2 * 4);
            temp_v0 = *piVar1;
            if (temp_v0 != 0) {
              puVar3 = (unsigned int *)((int)piVar1 + temp_v0);
            }
            else {
              puVar3 = (unsigned int *)0x0;
            }
            if ((puVar3 != (unsigned int *)0x0) && ((*puVar3 & 0x40000000) == 0)) {
              puVar3 = (unsigned int *)0x0;
            }
            if (puVar3 != (unsigned int *)0x0) {
              temp_v5 = puVar3[10];
              if (puVar3[6] != 0) {
                temp_v0 = (int)puVar3 + puVar3[6] + 0x18;
              }
              else {
                temp_v0 = 0;
              }
              if (temp_v5 != 0) {
                unaff_r7 = puVar3[0xb];
              }
              temp_v3 = 0;
              temp_v1 = puVar3[5];
              if (temp_v5 != 0) {
                do {
                  if (unaff_r7 != 0) {
                    temp_v6 = (int)puVar3 + unaff_r7 + 0x2c;
                  }
                  else {
                    temp_v6 = 0;
                  }
                  piVar1 = (int *)(temp_v6 + temp_v3 * 4);
                  temp_v6 = *piVar1;
                  if (temp_v6 != 0) {
                    temp_v6 = (int)piVar1 + temp_v6;
                  }
                  else {
                    temp_v6 = 0;
                  }
                  if (*(int *)(temp_v6 + 4) == temp_v11[1] + 4) {
                    if (-1 < *(int *)(temp_v6 + 0x30)) {
                      temp_v5 = puVar3[9];
                      for (pfVar6 = (float *)(*(int *)(temp_v6 + 0x30) + temp_v0);
                          pfVar6 < (float *)(temp_v0 + temp_v1);
                          pfVar6 = (float *)((int)pfVar6 + temp_v5)) {
                        temp_v8 = (float)temp_v9;
                        temp_v7 = temp_v8 + (*pfVar6 - temp_v8) * temp_v12;
                        *pfVar6 = temp_v7;
                        temp_v8 = temp_v8 + (pfVar6[1] - temp_v8) * temp_v13;
                        pfVar6[1] = temp_v8;
                        *pfVar6 = temp_v7 + temp_v14;
                        pfVar6[1] = temp_v8 + temp_v15;
                      }
                      temp_v5 = puVar3[6];
                      temp_v0 = 0;
                      if (temp_v5 != 0) {
                        temp_v0 = (int)puVar3 + temp_v5 + 0x18;
                      }
                      if (temp_v5 == 0) {
                        temp_v0 = 0;
                      }
                      FUN_002c2424(temp_v0,puVar3[5]);
                    }
                    break;
                  }
                  temp_v3 = temp_v3 + 1;
                } while (temp_v3 < temp_v5);
              }
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < (int)temp_v4);
        }
      }
      temp_v10 = temp_v10 + 1;
    } while (temp_v10 < *(int *)(temp_v18 + 0x100));
  }
  temp_v2 = 0;
  if (temp_v2 < *(int *)(temp_v18 + 0x204)) {
    do {
      temp_v0 = temp_v18 + temp_v2 * 4;
      temp_v6 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(temp_v16 + 8) + 0x2c) + 0x164) +
                                *(short *)(temp_v0 + 0x104) * 4) + 0x3c);
      piVar1 = (int *)(*(short *)(temp_v0 + 0x106) * 4 + 0x274 + temp_v6);
      temp_v10 = *piVar1;
      if (temp_v10 != 0) {
        temp_v10 = (int)piVar1 + temp_v10;
      }
      else {
        temp_v10 = 0;
      }
      nw_gfx_res_ResTextureMapper_SetTexture(&temp_v10,*(unsigned int *)(temp_v17 + 0xc));
      *(unsigned int *)(temp_v6 + 0x2b0) = 0;
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(temp_v18 + 0x204));
  }
  return;
}

} /* extern "C" */
