/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e1b04` (_code @ 0x3e1b04, 0x544 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e1b04_arg0 fn_003e1b04_arg0;
struct fn_003e1b04_arg0 {
    unsigned char pad_0x0[0x8];
    void *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x8];
    undefined4 field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x8];
    int field_0x24; /* +0x24 */
    unsigned char field_0x28; /* +0x28 */
    unsigned char pad_0x29[0xb];
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0xb];
    byte field_0x40; /* +0x40 */
};

typedef int romwright_code();
/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_3_stack;

extern unsigned char DAT_00421bb8; /* 0x421bb8 */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif


int FUN_003e1b04(fn_003e1b04_arg0 *param_1,int param_2,int param_3)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  char temp_v1;
  int *piVar3;
  int *piVar4;
  unsigned char **ppuVar5;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar10;
  unsigned char temp_v6;
  unsigned char temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned char *temp_v12;
  unsigned int temp_v13;
  unsigned char temp_v14 [32];
  fn_003e1b04_arg0 *pfStack_30;
  int temp_v15;
  int iStack_28;
  
  piVar3 = (int *)(*(int *)((int)param_1->field_0x8 + 8) + 0x14);
  temp_v3 = *piVar3;
  if (temp_v3 != 0) {
    temp_v3 = (int)piVar3 + temp_v3;
  }
  else {
    temp_v3 = 0;
  }
  temp_v4 = 0;
  if (temp_v3 != 0) {
    piVar3 = (int *)(temp_v3 + param_3 * 0x10 + 0x28);
    temp_v4 = *piVar3;
    if (temp_v4 == 0) {
      temp_v4 = 0;
    }
    else {
      temp_v4 = (int)piVar3 + temp_v4;
    }
  }
  temp_v2 = param_1->field_0x14;
  piVar3 = *(int **)(*(int *)((int)param_1->field_0x8 + 0x10) + *(int *)(temp_v4 + 0xc) * 4);
  temp_v3 = param_1->field_0x18 - temp_v2;
  if (piVar3 != (int *)0x0) {
    temp_v2 = (unsigned int)*(unsigned char *)(piVar3 + 1);
  }
  temp_v3 = temp_v3 >> 2;
  pfStack_30 = param_1;
  temp_v15 = param_2;
  iStack_28 = param_3;
  if (!(piVar3 == (int *)0x0 || temp_v2 == 0)) {
    temp_v9 = 0.0f;
    temp_v8 = 1.0f;
    if (param_1->field_0x40 != 0) {
      piVar10 = (int *)0x0;
      temp_v5 = 0;
      temp_v4 = 0;
      if (0 < temp_v3) {
        do {
          piVar4 = *(int **)(param_1->field_0x14 + temp_v4 * 4);
          if (((piVar4 != (int *)0x0) &&
              (temp_v10 = *(float *)(param_1->field_0x24 + temp_v4 * 4), (int)romwright_fabs_4(temp_v10) >= 0x3a831270))
             && (temp_v3 = (**(romwright_code **)(*piVar4 + 0x1c))(piVar4,param_3), temp_v3 != 0)) {
            temp_v9 = temp_v9 + temp_v10;
            temp_v5 = temp_v5 + 1;
            piVar10 = *(int **)(param_1->field_0x14 + temp_v4 * 4);
          }
          temp_v3 = temp_v15;
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < (param_1->field_0x18 - param_1->field_0x14) >> 2);
        if (temp_v5 != 0) {
          if (temp_v5 == 1) {
            temp_v3 = (**(romwright_code **)(*piVar10 + 0x18))(piVar10,temp_v15,param_3);
            return temp_v3;
          }
          if (((int)romwright_fabs_4(temp_v9 - temp_v8) >= 0x3a831270) && ((int)romwright_fabs_4(temp_v9) >= 0x3a831270)) {
            temp_v8 = temp_v8 / temp_v9;
          }
          temp_v6 = (~*(unsigned int *)(temp_v15 + 4) & 0x40000000) == 0;
          *(unsigned int *)(temp_v15 + 4) = *(unsigned int *)(temp_v15 + 4) | 0x40000000;
          temp_v13 = 0;
          temp_v12 = &DAT_00421bb8;
          temp_v7 = 0;
          if (temp_v6) {
            piVar10 = (int *)0x1;
          }
          if (!temp_v6) {
            piVar10 = (int *)0x0;
          }
          temp_v4 = (param_1->field_0x18 - param_1->field_0x14) >> 2;
          do {
            do {
              do {
                temp_v4 = temp_v4 - 1;
                if (temp_v4 < 0) goto LAB_003e1d34;
              } while ((*(int *)(param_1->field_0x14 + temp_v4 * 4) == 0) ||
                      (temp_v11 = *(float *)(param_1->field_0x24 + temp_v4 * 4) * temp_v8,
                      (int)romwright_fabs_4(temp_v11) < 0x3a831270));
              if (piVar10 != (int *)0x0) {
                temp_v13 = temp_v13 | 0x40000000;
              }
              else {
                temp_v13 = temp_v13 & 0xbfffffff;
              }
              piVar4 = *(int **)(param_1->field_0x14 + temp_v4 * 4);
              temp_v5 = (**(romwright_code **)(*piVar4 + 0x18))(piVar4,&temp_v12,param_3);
            } while (temp_v5 == 0);
            temp_v7 = 1;
            temp_v5 = (**(romwright_code **)(*piVar3 + 8))(piVar3,temp_v3,temp_v14,temp_v5,&temp_v11);
          } while (temp_v5 != 0);
LAB_003e1d34:
          if (piVar10 == (int *)0x0) {
            *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) & 0xbfffffff;
          }
          if (temp_v7) {
            if (piVar10 != (int *)0x0) {
              return temp_v3;
            }
            if (*(char *)((int)piVar3 + 5) == '\0') {
              return temp_v3;
            }
            (**(romwright_code **)(*piVar3 + 0xc))(piVar3,temp_v3,temp_v14);
            return temp_v3;
          }
        }
      }
    }
    else {
      temp_v4 = 0;
      if (0 < temp_v3) {
        do {
          piVar10 = *(int **)(param_1->field_0x14 + temp_v4 * 4);
          if ((piVar10 != (int *)0x0) &&
             (temp_v5 = (**(romwright_code **)(*piVar10 + 0x1c))(piVar10,param_3), temp_v3 = temp_v15, temp_v5 != 0)
             ) {
            temp_v7 = *(char *)((int)param_1 + 0x41) != '\0';
            temp_v1 = '\0';
            if (temp_v7) {
              temp_v1 = *(char *)((int)param_1 + 0x42);
            }
            if (temp_v7 && temp_v1 != '\0') {
              temp_v5 = 0;
              temp_v4 = (*(int *)&param_1->field_0x28 - param_1->field_0x24) >> 2;
              if (0 < temp_v4) {
                do {
                  temp_v0 = temp_v5 * 4;
                  temp_v5 = temp_v5 + 1;
                  temp_v9 = *(float *)(param_1->field_0x24 + temp_v0) + temp_v9;
                } while (temp_v5 < (*(int *)&param_1->field_0x28 - param_1->field_0x24) >> 2);
              }
              if (((int)romwright_fabs_4(temp_v9 - temp_v8) >= 0x3a831270) && ((int)romwright_fabs_4(temp_v9) >= 0x3a831270)) {
                temp_v8 = temp_v8 / temp_v9;
              }
              temp_v5 = 0;
              if (0 < temp_v4) {
                do {
                  temp_v4 = temp_v5 + 1;
                  *(float *)(*(int *)&param_1->field_0x34 + temp_v5 * 4) =
                       *(float *)(param_1->field_0x24 + temp_v5 * 4) * temp_v8;
                  temp_v5 = temp_v4;
                } while (temp_v4 < (*(int *)&param_1->field_0x28 - param_1->field_0x24) >> 2);
              }
              *(unsigned char *)((int)param_1 + 0x41) = 0;
            }
            temp_v7 = (~*(unsigned int *)(temp_v15 + 4) & 0x40000000) == 0;
            *(unsigned int *)(temp_v15 + 4) = *(unsigned int *)(temp_v15 + 4) | 0x40000000;
            temp_v13 = 0;
            temp_v12 = &DAT_00421bb8;
            temp_v4 = ((param_1->field_0x18 - param_1->field_0x14) >> 2) - 1;
            if (-1 < temp_v4) {
              do {
                temp_v11 = *(float *)(*(int *)&param_1->field_0x34 + temp_v4 * 4);
                if ((int)romwright_fabs_4(temp_v11) >= 0x3a831270) {
                  if (temp_v7) {
                    temp_v13 = temp_v13 | 0x40000000;
                  }
                  else {
                    temp_v13 = temp_v13 & 0xbfffffff;
                  }
                  piVar10 = *(int **)(param_1->field_0x14 + temp_v4 * 4);
                  if ((piVar10 == (int *)0x0) ||
                     (ppuVar5 = (unsigned char **)
                                (**(romwright_code **)(*piVar10 + 0x18))(piVar10,&temp_v12,param_3),
                     ppuVar5 == (unsigned char **)0x0)) {
                    (**(romwright_code **)(*piVar3 + 0x18))
                              (piVar3,&temp_v12,
                               *(unsigned int *)
                                (*(int *)((int)param_1->field_0x8 + 0x54) + param_3 * 4));
                    ppuVar5 = &temp_v12;
                  }
                  temp_v5 = (**(romwright_code **)(*piVar3 + 8))(piVar3,temp_v3,temp_v14,ppuVar5,&temp_v11);
                  if (temp_v5 == 0) break;
                }
                temp_v4 = temp_v4 - 1;
              } while (-1 < temp_v4);
            }
            if (temp_v7) {
              return temp_v3;
            }
            *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) & 0xbfffffff;
            if (*(char *)((int)piVar3 + 5) == '\0') {
              return temp_v3;
            }
            (**(romwright_code **)(*piVar3 + 0xc))(piVar3,temp_v3,temp_v14);
            return temp_v3;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < (param_1->field_0x18 - param_1->field_0x14) >> 2);
      }
    }
  }
  else {
    while (temp_v3 = temp_v3 - 1, -1 < temp_v3) {
      piVar3 = *(int **)(param_1->field_0x14 + temp_v3 * 4);
      if ((piVar3 != (int *)0x0) &&
         (temp_v4 = (**(romwright_code **)(*piVar3 + 0x18))(piVar3,temp_v15,param_3), temp_v4 != 0)) {
        return temp_v4;
      }
    }
  }
  return 0;
}
