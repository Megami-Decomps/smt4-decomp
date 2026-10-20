/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00143280` (_code @ 0x143280, 0xf98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002aa6ac(...);
int VectorFloatToUnsigned(double, int);

extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_004652a4; /* 0x4652a4 */
extern int DAT_004655c0; /* 0x4655c0 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
extern unsigned int FUN_00147a7c(int);
/* Supplied declaration required: FUN_002aa6ac. */


int FUN_00143280(int *param_1,int param_2)

{
/* irregular: 5 goto(s); 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar9;
  int *piVar10;
  unsigned int temp_v7;
  unsigned char temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  int temp_v12;
  
  temp_v1 = DAT_004655c0;
  puVar9 = (unsigned int *)(DAT_004655c0 + 0x770);
  temp_v6 = DAT_004655c0 + 0x58 + param_2;
  if (param_1[0xd] == 0) {
    temp_v5 = 0x502;
  }
  else {
    temp_v5 = 0;
  }
  if ((*(char *)(temp_v6 + 0xac) == '\0') || (temp_v5 != 0)) {
    if (param_2 == 0) {
      temp_v0 = *puVar9 & 0xfffffffe;
    }
    else {
      if (param_2 != 1) {
        if (param_2 != 2) {
          return 0x501;
        }
        *puVar9 = *puVar9 & 0xfffffffb;
        temp_v1 = 0;
        if (*(char *)(temp_v6 + 0xac) != '\0') {
          temp_v1 = temp_v5;
        }
        return temp_v1;
      }
      temp_v0 = *puVar9 & 0xfffffffd;
    }
    *puVar9 = temp_v0;
    temp_v1 = 0;
    if (*(char *)(temp_v6 + 0xac) != '\0') {
      temp_v1 = temp_v5;
    }
    return temp_v1;
  }
  temp_v11 = 8191.0f;
  temp_v10 = 0.0f;
  temp_v6 = VectorFloatToUnsigned((float)param_1[7] * 255.0f,3);
  temp_v0 = VectorFloatToUnsigned((float)param_1[6] * 255.0f,3);
  temp_v5 = VectorFloatToUnsigned((float)param_1[8] * 255.0f,3);
  temp_v12 = VectorFloatToUnsigned((float)param_1[9] * 255.0f,3);
  piVar10 = param_1 + 0xd;
  temp_v0 = temp_v0 | (temp_v6 << 8) | (temp_v5 << 0x10) | (temp_v12 << 0x18);
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        return 0;
      }
      temp_v9 = (float)param_1[10];
      if ((temp_v9 == 0.0f) || ((unsigned int)romwright_fabs_4(temp_v9) >> 0x17 == 0xff)) {
        temp_v3 = 0;
      }
      else {
        temp_v9 = (temp_v9 + 16.0f) * 256.0f;
        if ((temp_v9 >= 0.0f) &&
           (((int)temp_v9 >= 0x46000000 ||
            (temp_v10 = temp_v9, temp_v11 = temp_v9, (int)temp_v9 >= 0x45800000)))) {
          temp_v3 = VectorFloatToUnsigned(temp_v11 - 4096.0f,3);
        }
        else {
          temp_v3 = VectorFloatToUnsigned(temp_v10 + 4096.0f,3);
        }
      }
      *(unsigned int *)(DAT_004655c0 + 0x7e0) =
           (*(unsigned int *)(DAT_004655c0 + 0x7e0) & 0xffffe000) | (temp_v3 & 0x1fff);
      temp_v3 = *(unsigned int *)(temp_v1 + 0x7dc);
      *(unsigned int *)(temp_v1 + 0x7dc) = temp_v3 & 0xffffff3f;
      temp_v6 = param_1[0x12];
      if (temp_v6 != 0x190a) {
        if (temp_v6 < 0x190a) {
          temp_v7 = temp_v6 - 0x1906;
          if ((temp_v7 >= 2) && (temp_v7 != 2 && temp_v7 != 3)) {
            return 0x502;
          }
          goto LAB_00143e90;
        }
        temp_v5 = temp_v6 - 0x6050;
        if (temp_v5 != 0) {
          temp_v8 = temp_v5 == 0x6b0;
          if (!temp_v8) {
            temp_v5 = temp_v6 - 0x675a;
            temp_v8 = temp_v5 == 0;
          }
          if (!temp_v8) {
            temp_v8 = temp_v5 == 1;
          }
          if (!temp_v8) {
            return 0x502;
          }
          goto LAB_00143e90;
        }
        *(unsigned int *)(temp_v1 + 0x7dc) = temp_v3 & 0xffffff39;
        *(unsigned int *)(temp_v1 + 0x7d4) = 0;
        *(unsigned int *)(temp_v1 + 0x7dc) = temp_v3 & 0xffff8839;
        *(unsigned int *)(temp_v1 + 0x7e0) = *(unsigned int *)(temp_v1 + 0x7e0) & 0xf0f0e000;
      }
      else {
LAB_00143e90:
        temp_v6 = param_1[2];
        if (temp_v6 == 0x2901) {
          temp_v3 = (temp_v3 & 0xffff8f3f) | 0x2000;
          *(unsigned int *)(temp_v1 + 0x7dc) = temp_v3;
        }
        else if (temp_v6 == 0x812d) {
          temp_v3 = (temp_v3 & 0xffff8f3f) | 0x1000;
          *(unsigned int *)(temp_v1 + 0x7dc) = temp_v3;
        }
        else if (temp_v6 == 0x812f) {
          temp_v3 = temp_v3 & 0xffff8f3f;
          *(unsigned int *)(temp_v1 + 0x7dc) = temp_v3;
        }
        else if (temp_v6 == 0x8370) {
          temp_v3 = (temp_v3 & 0xffff8f3f) | 0x3000;
          *(unsigned int *)(temp_v1 + 0x7dc) = temp_v3;
        }
        temp_v6 = param_1[3];
        if (temp_v6 != 0x2901) {
          if (temp_v6 != 0x812d) {
            if (temp_v6 == 0x812f) {
              temp_v3 = *(unsigned int *)(temp_v1 + 0x7dc) & 0xfffff8ff;
              *(unsigned int *)(temp_v1 + 0x7dc) = temp_v3;
            }
            else if (temp_v6 == 0x8370) {
              temp_v3 = (*(unsigned int *)(temp_v1 + 0x7dc) & 0xfffff8ff) | 0x300;
              *(unsigned int *)(temp_v1 + 0x7dc) = temp_v3;
            }
          }
          else {
            temp_v3 = (*(unsigned int *)(temp_v1 + 0x7dc) & 0xfffff8ff) | 0x100;
            *(unsigned int *)(temp_v1 + 0x7dc) = temp_v3;
          }
        }
        else {
          temp_v3 = (*(unsigned int *)(temp_v1 + 0x7dc) & 0xfffff8ff) | 0x200;
          *(unsigned int *)(temp_v1 + 0x7dc) = temp_v3;
        }
        if (*param_1 == 0x2600) {
          temp_v3 = *(unsigned int *)(temp_v1 + 0x7dc) & 0xfffffffd;
          *(unsigned int *)(temp_v1 + 0x7dc) = temp_v3;
        }
        else if (*param_1 == 0x2601) {
          temp_v3 = *(unsigned int *)(temp_v1 + 0x7dc) | 2;
          *(unsigned int *)(temp_v1 + 0x7dc) = temp_v3;
        }
        temp_v6 = param_1[1];
        if (temp_v6 != 0x2701) {
          if (temp_v6 < 0x2701) {
            if (temp_v6 != 0x2600) {
              if (temp_v6 != 0x2601) {
                if (temp_v6 == 0x2700) {
                  *(unsigned int *)(temp_v1 + 0x7dc) = *(unsigned int *)(temp_v1 + 0x7dc) & 0xfffffffb;
                  temp_v4 = *(unsigned int *)(temp_v1 + 0x7e0);
                  temp_v7 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
                  *(unsigned int *)(temp_v1 + 0x7e0) = (temp_v4 & 0xfff0ffff) | temp_v7;
                  temp_v3 = param_1[5];
                  temp_v7 = (temp_v4 & 0xf0f0ffff) | temp_v7;
                  if ((int)temp_v3 < 0) {
                    temp_v3 = 0;
                  }
                  *(unsigned int *)(temp_v1 + 0x7e0) = temp_v7 | ((temp_v3 & 0xf) << 0x18);
                  *(unsigned int *)(temp_v1 + 0x7dc) = *(unsigned int *)(temp_v1 + 0x7dc) & 0xfeffffff;
                }
              }
              else {
                *(unsigned int *)(temp_v1 + 0x7e0) = *(unsigned int *)(temp_v1 + 0x7e0) & 0xf0f0ffff;
                *(unsigned int *)(temp_v1 + 0x7dc) = (*(unsigned int *)(temp_v1 + 0x7dc) & 0xfeffffff) | 4;
              }
            }
            else {
              *(unsigned int *)(temp_v1 + 0x7e0) = *(unsigned int *)(temp_v1 + 0x7e0) & 0xf0f0ffff;
              *(unsigned int *)(temp_v1 + 0x7dc) = *(unsigned int *)(temp_v1 + 0x7dc) & 0xfefffffb;
            }
          }
          else if (temp_v6 != 0x2702) {
            if (temp_v6 == 0x2703) {
              *(unsigned int *)(temp_v1 + 0x7dc) = *(unsigned int *)(temp_v1 + 0x7dc) | 4;
              temp_v4 = *(unsigned int *)(temp_v1 + 0x7e0);
              temp_v7 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
              *(unsigned int *)(temp_v1 + 0x7e0) = (temp_v4 & 0xfff0ffff) | temp_v7;
              temp_v3 = param_1[5];
              temp_v7 = (temp_v4 & 0xf0f0ffff) | temp_v7;
              if ((int)temp_v3 < 0) {
                temp_v3 = 0;
              }
              *(unsigned int *)(temp_v1 + 0x7e0) = temp_v7 | ((temp_v3 & 0xf) << 0x18);
              *(unsigned int *)(temp_v1 + 0x7dc) = *(unsigned int *)(temp_v1 + 0x7dc) | 0x1000000;
            }
          }
          else {
            *(unsigned int *)(temp_v1 + 0x7dc) = *(unsigned int *)(temp_v1 + 0x7dc) & 0xfffffffb;
            temp_v4 = *(unsigned int *)(temp_v1 + 0x7e0);
            temp_v7 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
            *(unsigned int *)(temp_v1 + 0x7e0) = (temp_v4 & 0xfff0ffff) | temp_v7;
            temp_v3 = param_1[5];
            temp_v7 = (temp_v4 & 0xf0f0ffff) | temp_v7;
            if ((int)temp_v3 < 0) {
              temp_v3 = 0;
            }
            *(unsigned int *)(temp_v1 + 0x7e0) = temp_v7 | ((temp_v3 & 0xf) << 0x18);
            *(unsigned int *)(temp_v1 + 0x7dc) = *(unsigned int *)(temp_v1 + 0x7dc) | 0x1000000;
          }
        }
        else {
          *(unsigned int *)(temp_v1 + 0x7dc) = *(unsigned int *)(temp_v1 + 0x7dc) | 4;
          temp_v4 = *(unsigned int *)(temp_v1 + 0x7e0);
          temp_v7 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
          *(unsigned int *)(temp_v1 + 0x7e0) = (temp_v4 & 0xfff0ffff) | temp_v7;
          temp_v3 = param_1[5];
          temp_v7 = (temp_v4 & 0xf0f0ffff) | temp_v7;
          if ((int)temp_v3 < 0) {
            temp_v3 = 0;
          }
          *(unsigned int *)(temp_v1 + 0x7e0) = temp_v7 | ((temp_v3 & 0xf) << 0x18);
          *(unsigned int *)(temp_v1 + 0x7dc) = *(unsigned int *)(temp_v1 + 0x7dc) & 0xfeffffff;
        }
        *(unsigned int *)(temp_v1 + 0x7d4) = temp_v0;
      }
      if (param_1[0x12] == 0x675a) {
        temp_v6 = 2;
      }
      else {
        temp_v6 = 0;
      }
      *(unsigned int *)(temp_v1 + 0x7dc) = (*(unsigned int *)(temp_v1 + 0x7dc) & 0xffffffcf) | (temp_v6 << 4);
      temp_v0 = *(unsigned int *)(temp_v1 + 0x7d8);
      temp_v3 = (param_1[0x10] & 0x7ffU) << 0x10;
      *(unsigned int *)(temp_v1 + 0x7d8) = (temp_v0 & 0xf800ffff) | temp_v3;
      *(unsigned int *)(temp_v1 + 0x7d8) = (param_1[0x11] & 0x7ffU) | (temp_v0 & 0xf800f800) | temp_v3;
      temp_v0 = FUN_00147a7c(*piVar10);
      temp_v6 = temp_v1 + 0x7d4;
      *(unsigned int *)(temp_v1 + 0x7e4) = (*(unsigned int *)(temp_v1 + 0x7e4) & 0xc0000000) | (temp_v0 >> 3);
      *puVar9 = *puVar9 | 4;
      *(unsigned int *)(temp_v1 + 0x7e8) = (param_1[0x14] & 0xfU) | (*(unsigned int *)(temp_v1 + 0x7e8) & 0xfffffff0);
      temp_v2 = 0x99;
    }
    else {
      temp_v9 = (float)param_1[10];
      if ((temp_v9 == 0.0f) || ((unsigned int)romwright_fabs_4(temp_v9) >> 0x17 == 0xff)) {
        temp_v3 = 0;
      }
      else {
        temp_v9 = (temp_v9 + 16.0f) * 256.0f;
        if ((temp_v9 >= 0.0f) &&
           (((int)temp_v9 >= 0x46000000 ||
            (temp_v10 = temp_v9, temp_v11 = temp_v9, (int)temp_v9 >= 0x45800000)))) {
          temp_v3 = VectorFloatToUnsigned(temp_v11 - 4096.0f,3);
        }
        else {
          temp_v3 = VectorFloatToUnsigned(temp_v10 + 4096.0f,3);
        }
      }
      *(unsigned int *)(DAT_004655c0 + 0x7c0) =
           (*(unsigned int *)(DAT_004655c0 + 0x7c0) & 0xffffe000) | (temp_v3 & 0x1fff);
      temp_v3 = *(unsigned int *)(temp_v1 + 0x7bc);
      *(unsigned int *)(temp_v1 + 0x7bc) = temp_v3 & 0xffffff3f;
      temp_v6 = param_1[0x12];
      if (temp_v6 != 0x190a) {
        if (temp_v6 < 0x190a) {
          temp_v7 = temp_v6 - 0x1906;
          if ((temp_v7 >= 2) && (temp_v7 != 2 && temp_v7 != 3)) {
            return 0x502;
          }
          goto LAB_00143a18;
        }
        temp_v5 = temp_v6 - 0x6050;
        if (temp_v5 != 0) {
          temp_v8 = temp_v5 == 0x6b0;
          if (!temp_v8) {
            temp_v5 = temp_v6 - 0x675a;
            temp_v8 = temp_v5 == 0;
          }
          if (!temp_v8) {
            temp_v8 = temp_v5 == 1;
          }
          if (!temp_v8) {
            return 0x502;
          }
          goto LAB_00143a18;
        }
        *(unsigned int *)(temp_v1 + 0x7c0) = *(unsigned int *)(temp_v1 + 0x7c0) & 0xf0f0e000;
        *(unsigned int *)(temp_v1 + 0x7bc) = temp_v3 & 0xffff8839;
        *(unsigned int *)(temp_v1 + 0x7b4) = 0;
      }
      else {
LAB_00143a18:
        temp_v6 = param_1[2];
        if (temp_v6 == 0x2901) {
          temp_v3 = (temp_v3 & 0xffff8f3f) | 0x2000;
          *(unsigned int *)(temp_v1 + 0x7bc) = temp_v3;
        }
        else if (temp_v6 == 0x812d) {
          temp_v3 = (temp_v3 & 0xffff8f3f) | 0x1000;
          *(unsigned int *)(temp_v1 + 0x7bc) = temp_v3;
        }
        else if (temp_v6 == 0x812f) {
          temp_v3 = temp_v3 & 0xffff8f3f;
          *(unsigned int *)(temp_v1 + 0x7bc) = temp_v3;
        }
        else if (temp_v6 == 0x8370) {
          temp_v3 = (temp_v3 & 0xffff8f3f) | 0x3000;
          *(unsigned int *)(temp_v1 + 0x7bc) = temp_v3;
        }
        temp_v6 = param_1[3];
        if (temp_v6 != 0x2901) {
          if (temp_v6 != 0x812d) {
            if (temp_v6 == 0x812f) {
              temp_v3 = *(unsigned int *)(temp_v1 + 0x7bc) & 0xfffff8ff;
              *(unsigned int *)(temp_v1 + 0x7bc) = temp_v3;
            }
            else if (temp_v6 == 0x8370) {
              temp_v3 = (*(unsigned int *)(temp_v1 + 0x7bc) & 0xfffff8ff) | 0x300;
              *(unsigned int *)(temp_v1 + 0x7bc) = temp_v3;
            }
          }
          else {
            temp_v3 = (*(unsigned int *)(temp_v1 + 0x7bc) & 0xfffff8ff) | 0x100;
            *(unsigned int *)(temp_v1 + 0x7bc) = temp_v3;
          }
        }
        else {
          temp_v3 = (*(unsigned int *)(temp_v1 + 0x7bc) & 0xfffff8ff) | 0x200;
          *(unsigned int *)(temp_v1 + 0x7bc) = temp_v3;
        }
        if (*param_1 == 0x2600) {
          temp_v3 = *(unsigned int *)(temp_v1 + 0x7bc) & 0xfffffffd;
          *(unsigned int *)(temp_v1 + 0x7bc) = temp_v3;
        }
        else if (*param_1 == 0x2601) {
          temp_v3 = *(unsigned int *)(temp_v1 + 0x7bc) | 2;
          *(unsigned int *)(temp_v1 + 0x7bc) = temp_v3;
        }
        temp_v6 = param_1[1];
        if (temp_v6 != 0x2701) {
          if (temp_v6 < 0x2701) {
            if (temp_v6 != 0x2600) {
              if (temp_v6 != 0x2601) {
                if (temp_v6 == 0x2700) {
                  *(unsigned int *)(temp_v1 + 0x7bc) = *(unsigned int *)(temp_v1 + 0x7bc) & 0xfffffffb;
                  temp_v4 = *(unsigned int *)(temp_v1 + 0x7c0);
                  temp_v7 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
                  *(unsigned int *)(temp_v1 + 0x7c0) = (temp_v4 & 0xfff0ffff) | temp_v7;
                  temp_v3 = param_1[5];
                  temp_v7 = (temp_v4 & 0xf0f0ffff) | temp_v7;
                  if ((int)temp_v3 < 0) {
                    temp_v3 = 0;
                  }
                  *(unsigned int *)(temp_v1 + 0x7c0) = temp_v7 | ((temp_v3 & 0xf) << 0x18);
                  *(unsigned int *)(temp_v1 + 0x7bc) = *(unsigned int *)(temp_v1 + 0x7bc) & 0xfeffffff;
                }
              }
              else {
                *(unsigned int *)(temp_v1 + 0x7c0) = *(unsigned int *)(temp_v1 + 0x7c0) & 0xf0f0ffff;
                *(unsigned int *)(temp_v1 + 0x7bc) = (*(unsigned int *)(temp_v1 + 0x7bc) & 0xfeffffff) | 4;
              }
            }
            else {
              *(unsigned int *)(temp_v1 + 0x7c0) = *(unsigned int *)(temp_v1 + 0x7c0) & 0xf0f0ffff;
              *(unsigned int *)(temp_v1 + 0x7bc) = *(unsigned int *)(temp_v1 + 0x7bc) & 0xfefffffb;
            }
          }
          else if (temp_v6 != 0x2702) {
            if (temp_v6 == 0x2703) {
              *(unsigned int *)(temp_v1 + 0x7bc) = *(unsigned int *)(temp_v1 + 0x7bc) | 4;
              temp_v4 = *(unsigned int *)(temp_v1 + 0x7c0);
              temp_v7 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
              *(unsigned int *)(temp_v1 + 0x7c0) = (temp_v4 & 0xfff0ffff) | temp_v7;
              temp_v3 = param_1[5];
              temp_v7 = (temp_v4 & 0xf0f0ffff) | temp_v7;
              if ((int)temp_v3 < 0) {
                temp_v3 = 0;
              }
              *(unsigned int *)(temp_v1 + 0x7c0) = temp_v7 | ((temp_v3 & 0xf) << 0x18);
              *(unsigned int *)(temp_v1 + 0x7bc) = *(unsigned int *)(temp_v1 + 0x7bc) | 0x1000000;
            }
          }
          else {
            *(unsigned int *)(temp_v1 + 0x7bc) = *(unsigned int *)(temp_v1 + 0x7bc) & 0xfffffffb;
            temp_v4 = *(unsigned int *)(temp_v1 + 0x7c0);
            temp_v7 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
            *(unsigned int *)(temp_v1 + 0x7c0) = (temp_v4 & 0xfff0ffff) | temp_v7;
            temp_v3 = param_1[5];
            temp_v7 = (temp_v4 & 0xf0f0ffff) | temp_v7;
            if ((int)temp_v3 < 0) {
              temp_v3 = 0;
            }
            *(unsigned int *)(temp_v1 + 0x7c0) = temp_v7 | ((temp_v3 & 0xf) << 0x18);
            *(unsigned int *)(temp_v1 + 0x7bc) = *(unsigned int *)(temp_v1 + 0x7bc) | 0x1000000;
          }
        }
        else {
          *(unsigned int *)(temp_v1 + 0x7bc) = *(unsigned int *)(temp_v1 + 0x7bc) | 4;
          temp_v4 = *(unsigned int *)(temp_v1 + 0x7c0);
          temp_v7 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
          *(unsigned int *)(temp_v1 + 0x7c0) = (temp_v4 & 0xfff0ffff) | temp_v7;
          temp_v3 = param_1[5];
          temp_v7 = (temp_v4 & 0xf0f0ffff) | temp_v7;
          if ((int)temp_v3 < 0) {
            temp_v3 = 0;
          }
          *(unsigned int *)(temp_v1 + 0x7c0) = temp_v7 | ((temp_v3 & 0xf) << 0x18);
          *(unsigned int *)(temp_v1 + 0x7bc) = *(unsigned int *)(temp_v1 + 0x7bc) & 0xfeffffff;
        }
        *(unsigned int *)(temp_v1 + 0x7b4) = temp_v0;
      }
      if (param_1[0x12] == 0x675a) {
        temp_v6 = 2;
      }
      else {
        temp_v6 = 0;
      }
      *(unsigned int *)(temp_v1 + 0x7bc) = (*(unsigned int *)(temp_v1 + 0x7bc) & 0xffffffcf) | (temp_v6 << 4);
      temp_v0 = *(unsigned int *)(temp_v1 + 0x7b8);
      temp_v3 = (param_1[0x10] & 0x7ffU) << 0x10;
      *(unsigned int *)(temp_v1 + 0x7b8) = (temp_v0 & 0xf800ffff) | temp_v3;
      *(unsigned int *)(temp_v1 + 0x7b8) = (param_1[0x11] & 0x7ffU) | (temp_v0 & 0xf800f800) | temp_v3;
      temp_v0 = FUN_00147a7c(*piVar10);
      temp_v6 = temp_v1 + 0x7b4;
      *(unsigned int *)(temp_v1 + 0x7c4) = (*(unsigned int *)(temp_v1 + 0x7c4) & 0xc0000000) | (temp_v0 >> 3);
      *puVar9 = *puVar9 | 2;
      *(unsigned int *)(temp_v1 + 0x7c8) = (param_1[0x14] & 0xfU) | (*(unsigned int *)(temp_v1 + 0x7c8) & 0xfffffff0);
      temp_v2 = 0x91;
    }
    FUN_002aa6ac(temp_v2,6,temp_v6);
    return 0;
  }
  puVar1 = (unsigned int *)(DAT_004655c0 + 0x77c);
  *(unsigned int *)(DAT_004655c0 + 0x774) = temp_v0;
  *(unsigned int *)(temp_v1 + 0x77c) = *puVar1 & 0xffefffff;
  temp_v0 = *(unsigned int *)(temp_v1 + 0x778);
  temp_v3 = (param_1[0x10] & 0x7ffU) << 0x10;
  *(unsigned int *)(temp_v1 + 0x778) = (temp_v0 & 0xf800ffff) | temp_v3;
  *(unsigned int *)(temp_v1 + 0x778) = (param_1[0x11] & 0x7ffU) | (temp_v0 & 0xf800f800) | temp_v3;
  temp_v9 = (float)param_1[10];
  if ((temp_v9 == 0.0f) || ((unsigned int)romwright_fabs_4(temp_v9) >> 0x17 == 0xff)) {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x780) & 0xffffe000;
    *(unsigned int *)(temp_v1 + 0x780) = temp_v0;
  }
  else {
    temp_v9 = (temp_v9 + 16.0f) * 256.0f;
    if ((0.0f <= temp_v9) &&
       (((int)temp_v9 >= 0x46000000 || (temp_v10 = temp_v9, temp_v11 = temp_v9, (int)temp_v9 >= 0x45800000))))
    {
      temp_v0 = VectorFloatToUnsigned(temp_v11 - 4096.0f,3);
      temp_v0 = (*(unsigned int *)(temp_v1 + 0x780) & 0xffffe000) | (temp_v0 & 0x1fff);
      *(unsigned int *)(temp_v1 + 0x780) = temp_v0;
    }
    else {
      temp_v0 = VectorFloatToUnsigned(temp_v10 + 4096.0f,3);
      *(unsigned int *)(temp_v1 + 0x780) = (*(unsigned int *)(temp_v1 + 0x780) & 0xffffe000) | (temp_v0 & 0x1fff);
    }
  }
  *(unsigned int *)(temp_v1 + 0x7a8) = (param_1[0x14] & 0xfU) | (*(unsigned int *)(temp_v1 + 0x7a8) & 0xfffffff0);
  temp_v6 = param_1[0x12];
  if (temp_v6 != 0x6040) {
    if (temp_v6 < 0x6040) {
      if (temp_v6 - 0x1906U >= 5) {
        return 0x502;
      }
    }
    else {
      if (temp_v6 == 0x6050) {
        *(unsigned int *)(temp_v1 + 0x780) = *(unsigned int *)(temp_v1 + 0x780) & 0xf0f0e000;
        *(unsigned int *)(temp_v1 + 0x77c) = *(unsigned int *)(temp_v1 + 0x77c) & 0x8fff88c9;
        *(unsigned int *)(temp_v1 + 0x774) = 0;
        goto LAB_001438b8;
      }
      temp_v8 = temp_v6 == 0x6700;
      if (!temp_v8) {
        temp_v6 = temp_v6 - 0x675a;
        temp_v8 = temp_v6 == 0;
      }
      if (!temp_v8) {
        temp_v8 = temp_v6 == 1;
      }
      if (!temp_v8) {
        return 0x502;
      }
    }
    if (*(int *)(temp_v1 + 0xf8) == 0x6e00) {
      temp_v0 = (*(unsigned int *)(temp_v1 + 0x77c) & 0x8fffffff) | 0x30000000;
    }
    else {
      temp_v0 = *(unsigned int *)(temp_v1 + 0x77c) & 0x8fffffff;
    }
    *(unsigned int *)(temp_v1 + 0x77c) = temp_v0;
    temp_v6 = param_1[2];
    if (temp_v6 != 0x2901) {
      if (temp_v6 != 0x812d) {
        if (temp_v6 == 0x812f) {
          temp_v0 = *(unsigned int *)(temp_v1 + 0x77c) & 0xffff8fff;
          *(unsigned int *)(temp_v1 + 0x77c) = temp_v0;
        }
        else if (temp_v6 == 0x8370) {
          temp_v0 = (*(unsigned int *)(temp_v1 + 0x77c) & 0xffff8fff) | 0x3000;
          *(unsigned int *)(temp_v1 + 0x77c) = temp_v0;
        }
      }
      else {
        temp_v0 = (*(unsigned int *)(temp_v1 + 0x77c) & 0xffff8fff) | 0x1000;
        *(unsigned int *)(temp_v1 + 0x77c) = temp_v0;
      }
    }
    else {
      temp_v0 = (*(unsigned int *)(temp_v1 + 0x77c) & 0xffff8fff) | 0x2000;
      *(unsigned int *)(temp_v1 + 0x77c) = temp_v0;
    }
    temp_v6 = param_1[3];
    if (temp_v6 != 0x2901) {
      if (temp_v6 != 0x812d) {
        if (temp_v6 == 0x812f) {
          temp_v0 = *(unsigned int *)(temp_v1 + 0x77c) & 0xfffff8ff;
          *(unsigned int *)(temp_v1 + 0x77c) = temp_v0;
        }
        else if (temp_v6 == 0x8370) {
          temp_v0 = (*(unsigned int *)(temp_v1 + 0x77c) & 0xfffff8ff) | 0x300;
          *(unsigned int *)(temp_v1 + 0x77c) = temp_v0;
        }
      }
      else {
        temp_v0 = (*(unsigned int *)(temp_v1 + 0x77c) & 0xfffff8ff) | 0x100;
        *(unsigned int *)(temp_v1 + 0x77c) = temp_v0;
      }
    }
    else {
      temp_v0 = (*(unsigned int *)(temp_v1 + 0x77c) & 0xfffff8ff) | 0x200;
      *(unsigned int *)(temp_v1 + 0x77c) = temp_v0;
    }
    if (*param_1 == 0x2600) {
      temp_v0 = *(unsigned int *)(temp_v1 + 0x77c) & 0xfffffffd;
      *(unsigned int *)(temp_v1 + 0x77c) = temp_v0;
    }
    else if (*param_1 == 0x2601) {
      temp_v0 = *(unsigned int *)(temp_v1 + 0x77c) | 2;
      *(unsigned int *)(temp_v1 + 0x77c) = temp_v0;
    }
    temp_v6 = param_1[1];
    if (temp_v6 != 0x2701) {
      if (temp_v6 < 0x2701) {
        if (temp_v6 != 0x2600) {
          if (temp_v6 != 0x2601) {
            if (temp_v6 == 0x2700) {
              *(unsigned int *)(temp_v1 + 0x77c) = *(unsigned int *)(temp_v1 + 0x77c) & 0xfffffffb;
              temp_v7 = *(unsigned int *)(temp_v1 + 0x780);
              temp_v3 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
              *(unsigned int *)(temp_v1 + 0x780) = (temp_v7 & 0xfff0ffff) | temp_v3;
              temp_v0 = param_1[5];
              temp_v3 = (temp_v7 & 0xf0f0ffff) | temp_v3;
              if ((int)temp_v0 < 0) {
                temp_v0 = 0;
              }
              *(unsigned int *)(temp_v1 + 0x77c) = *(unsigned int *)(temp_v1 + 0x77c) & 0xfeffffff;
              *(unsigned int *)(temp_v1 + 0x780) = temp_v3 | ((temp_v0 & 0xf) << 0x18);
            }
          }
          else {
            *(unsigned int *)(temp_v1 + 0x780) = *(unsigned int *)(temp_v1 + 0x780) & 0xf0f0ffff;
            *(unsigned int *)(temp_v1 + 0x77c) = (*(unsigned int *)(temp_v1 + 0x77c) & 0xfeffffff) | 4;
          }
        }
        else {
          *(unsigned int *)(temp_v1 + 0x780) = *(unsigned int *)(temp_v1 + 0x780) & 0xf0f0ffff;
          *(unsigned int *)(temp_v1 + 0x77c) = *(unsigned int *)(temp_v1 + 0x77c) & 0xfefffffb;
        }
      }
      else if (temp_v6 != 0x2702) {
        if (temp_v6 == 0x2703) {
          *(unsigned int *)(temp_v1 + 0x77c) = *(unsigned int *)(temp_v1 + 0x77c) | 4;
          temp_v7 = *(unsigned int *)(temp_v1 + 0x780);
          temp_v3 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
          *(unsigned int *)(temp_v1 + 0x780) = (temp_v7 & 0xfff0ffff) | temp_v3;
          temp_v0 = param_1[5];
          temp_v3 = (temp_v7 & 0xf0f0ffff) | temp_v3;
          if ((int)temp_v0 < 0) {
            temp_v0 = 0;
          }
          *(unsigned int *)(temp_v1 + 0x77c) = *(unsigned int *)(temp_v1 + 0x77c) | 0x1000000;
          *(unsigned int *)(temp_v1 + 0x780) = temp_v3 | ((temp_v0 & 0xf) << 0x18);
        }
      }
      else {
        *(unsigned int *)(temp_v1 + 0x77c) = *(unsigned int *)(temp_v1 + 0x77c) & 0xfffffffb;
        temp_v7 = *(unsigned int *)(temp_v1 + 0x780);
        temp_v3 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
        *(unsigned int *)(temp_v1 + 0x780) = (temp_v7 & 0xfff0ffff) | temp_v3;
        temp_v0 = param_1[5];
        temp_v3 = (temp_v7 & 0xf0f0ffff) | temp_v3;
        if ((int)temp_v0 < 0) {
          temp_v0 = 0;
        }
        *(unsigned int *)(temp_v1 + 0x77c) = *(unsigned int *)(temp_v1 + 0x77c) | 0x1000000;
        *(unsigned int *)(temp_v1 + 0x780) = temp_v3 | ((temp_v0 & 0xf) << 0x18);
      }
    }
    else {
      *(unsigned int *)(temp_v1 + 0x77c) = *(unsigned int *)(temp_v1 + 0x77c) | 4;
      temp_v7 = *(unsigned int *)(temp_v1 + 0x780);
      temp_v3 = ((param_1[0x1a] - 1) * 0x10000) & 0xf0000;
      *(unsigned int *)(temp_v1 + 0x780) = (temp_v7 & 0xfff0ffff) | temp_v3;
      temp_v0 = param_1[5];
      temp_v3 = (temp_v7 & 0xf0f0ffff) | temp_v3;
      if ((int)temp_v0 < 0) {
        temp_v0 = 0;
      }
      *(unsigned int *)(temp_v1 + 0x77c) = *(unsigned int *)(temp_v1 + 0x77c) & 0xfeffffff;
      *(unsigned int *)(temp_v1 + 0x780) = temp_v3 | ((temp_v0 & 0xf) << 0x18);
    }
    if (param_1[0x12] == 0x675a) {
      temp_v6 = 2;
    }
    else {
      temp_v6 = 0;
    }
    temp_v0 = (*(unsigned int *)(temp_v1 + 0x77c) & 0xffffffcf) | (temp_v6 << 4);
  }
  else {
    temp_v0 = *(unsigned int *)(temp_v1 + 0x77c);
    *(unsigned int *)(temp_v1 + 0x77c) = (temp_v0 & 0x8effffff) | 0x20100006;
    *(unsigned int *)(temp_v1 + 0x780) = *(unsigned int *)(temp_v1 + 0x780) & 0xf0f0e000;
    temp_v0 = (temp_v0 & 0x8eff88cf) | 0x20101106;
  }
  *(unsigned int *)(temp_v1 + 0x77c) = temp_v0;
LAB_001438b8:
  temp_v0 = FUN_00147a7c(*piVar10);
  *(unsigned int *)(temp_v1 + 0x784) = (*(unsigned int *)(temp_v1 + 0x784) & 0xc0000000) | (temp_v0 >> 3);
  *puVar9 = *puVar9 | 1;
  FUN_002aa6ac(0x81,10,temp_v1 + 0x774);
  if ((unsigned int)DAT_004652a0 < DAT_004652a4) {
    *DAT_004652a0 = *(unsigned int *)(temp_v1 + 0x7a8);
    DAT_004652a0[1] = 0xf008e;
    DAT_004652a0 = DAT_004652a0 + 2;
  }
  return 0;
}

} /* extern "C" */
