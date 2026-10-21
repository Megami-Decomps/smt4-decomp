/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00258170` (_code @ 0x258170, 0x290 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c2424(int, unsigned int);
int FUN_003409f8(int, unsigned char [16], float *);
int nw_gfx_res_ResTextureMapper_SetTexture(int *, unsigned int);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int g_screenStateWork; /* 0x43dd90 */

/* Supplied declaration required: FUN_002c2424. */
/* Supplied declaration required: FUN_003409f8. */
/* Supplied declaration required: nw_gfx_res_ResTextureMapper_SetTexture. */


void FUN_00258170(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int *puVar6;
  unsigned int temp_v3;
  float *pfVar8;
  int temp_v4;
  unsigned int *puVar10;
  unsigned int temp_v5;
  int unaff_r11;
  unsigned int temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  int temp_v10;
  int temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned char temp_v14 [16];
  int temp_v15;
  
  temp_v0 = g_screenStateWork;
  temp_v15 = param_1;
  FUN_003409f8(param_1,temp_v14,&temp_v12);
  temp_v10 = 0;
  if (0 < *(int *)(temp_v0 + 0x194)) {
    temp_v9 = 0x3f000000;
    do {
      temp_v11 = temp_v0 + temp_v10 * 4;
      piVar2 = (int *)(*(int *)(*(int *)(*(int *)(*(int *)(temp_v0 + 0x84) + 8) + 0x2c) + 8) + 200);
      temp_v2 = *piVar2;
      if (temp_v2 != 0) {
        temp_v2 = (int)piVar2 + temp_v2;
      }
      else {
        temp_v2 = 0;
      }
      piVar2 = (int *)(temp_v2 + *(short *)(temp_v11 + 0x94) * 4);
      temp_v2 = *piVar2;
      if (temp_v2 != 0) {
        puVar10 = (unsigned int *)(temp_v2 + (int)piVar2);
      }
      else {
        puVar10 = (unsigned int *)0x0;
      }
      if ((puVar10 != (unsigned int *)0x0) && ((~*puVar10 & 0x10000001) != 0)) {
        puVar10 = (unsigned int *)0x0;
      }
      if (puVar10 != (unsigned int *)0x0) {
        temp_v5 = puVar10[0xe];
        temp_v2 = 0;
        if (temp_v2 < (int)temp_v5) {
          do {
            if (puVar10[0xf] != 0) {
              temp_v1 = (int)puVar10 + puVar10[0xf] + 0x3c;
            }
            else {
              temp_v1 = 0;
            }
            puVar4 = (unsigned int *)(temp_v1 + temp_v2 * 4);
            puVar6 = (unsigned int *)*puVar4;
            if (puVar6 != (unsigned int *)0x0) {
              puVar6 = (unsigned int *)((int)puVar6 + (int)puVar4);
            }
            if ((puVar6 != (unsigned int *)0x0) && ((*puVar6 & 0x40000000) == 0)) {
              puVar6 = (unsigned int *)0x0;
            }
            if (puVar6 != (unsigned int *)0x0) {
              temp_v3 = puVar6[6];
              if (temp_v3 != 0) {
                unaff_r11 = (int)puVar6 + temp_v3 + 0x18;
              }
              temp_v6 = puVar6[5];
              if (temp_v3 == 0) {
                unaff_r11 = 0;
              }
              temp_v3 = 0;
              if (puVar6[10] != 0) {
                temp_v1 = 0;
                do {
                  if (puVar6[0xb] != 0) {
                    temp_v4 = (int)puVar6 + puVar6[0xb] + 0x2c;
                  }
                  else {
                    temp_v4 = 0;
                  }
                  piVar2 = (int *)(temp_v4 + temp_v3 * 4);
                  temp_v4 = *piVar2;
                  if (temp_v4 != 0) {
                    temp_v4 = (int)piVar2 + temp_v4;
                  }
                  else {
                    temp_v4 = 0;
                  }
                  if (*(int *)(temp_v4 + 4) == *(short *)(temp_v11 + 0x96) + 4) {
                    if (-1 < *(int *)(temp_v4 + 0x30)) {
                      temp_v3 = puVar6[9];
                      for (pfVar8 = (float *)(*(int *)(temp_v4 + 0x30) + unaff_r11);
                          pfVar8 < (float *)(unaff_r11 + temp_v6);
                          pfVar8 = (float *)((int)pfVar8 + temp_v3)) {
                        temp_v7 = (float)temp_v9;
                        temp_v8 = (*pfVar8 - temp_v7) + temp_v7;
                        temp_v7 = (pfVar8[1] - temp_v7) + temp_v7;
                        *pfVar8 = temp_v8;
                        pfVar8[1] = temp_v7;
                        *pfVar8 = temp_v8 + temp_v12;
                        pfVar8[1] = temp_v7 + temp_v13;
                      }
                      if (puVar6[6] != 0) {
                        temp_v1 = (int)puVar6 + puVar6[6] + 0x18;
                      }
                      FUN_002c2424(temp_v1,puVar6[5]);
                    }
                    break;
                  }
                  temp_v3 = temp_v3 + 1;
                } while (temp_v3 < puVar6[10]);
              }
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < (int)temp_v5);
        }
      }
      temp_v10 = temp_v10 + 1;
    } while (temp_v10 < *(int *)(temp_v0 + 0x194));
  }
  temp_v2 = 0;
  if (temp_v2 < *(int *)(temp_v0 + 0x298)) {
    do {
      temp_v1 = temp_v0 + temp_v2 * 4;
      temp_v4 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(temp_v0 + 0x84) + 8) + 0x2c) +
                                        0x164) + *(short *)(temp_v1 + 0x198) * 4) + 0x3c);
      piVar2 = (int *)(*(short *)(temp_v1 + 0x19a) * 4 + 0x274 + temp_v4);
      temp_v1 = *piVar2;
      temp_v10 = 0;
      if (temp_v1 != 0) {
        temp_v10 = (int)piVar2 + temp_v1;
      }
      nw_gfx_res_ResTextureMapper_SetTexture(&temp_v10,*(unsigned int *)(temp_v15 + 0xc));
      *(unsigned int *)(temp_v4 + 0x2b0) = 0;
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(temp_v0 + 0x298));
  }
  return;
}

} /* extern "C" */
