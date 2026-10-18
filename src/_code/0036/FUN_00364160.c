/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00364160` (_code @ 0x364160, 0x45c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_00370680. */


unsigned int FUN_00364160(unsigned int param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  
  temp_v2 = param_1;
  FUN_00370680();
  if ((-1 < (int)temp_v2) && (*(int *)(param_1 + 0x220) != 0)) {
    temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,*(int *)(param_1 + 0x220) << 2,4);
    if (temp_v0 == 0) {
      temp_v2 = temp_v2 | 0x80000000;
    }
    if (-1 < (int)temp_v2) {
      puVar2 = (unsigned int *)(param_1 + 0x228);
      temp_v3 = *(unsigned int *)(param_1 + 0x220) & 0x3fffffff;
      temp_v4 = param_2;
      temp_v5 = temp_v0;
      temp_v7 = temp_v3;
      if ((int **)puVar2 != &temp_v4) {
        temp_v5 = *(int *)(param_1 + 0x22c);
        temp_v7 = *(unsigned int *)(param_1 + 0x234);
        temp_v4 = (int *)*puVar2;
        *puVar2 = (unsigned int)param_2;
        *(int *)(param_1 + 0x22c) = temp_v0;
        *(int *)(param_1 + 0x230) = temp_v0;
        *(unsigned int *)(param_1 + 0x234) = temp_v3;
      }
      temp_v6 = temp_v5;
      temp_v0 = 0;
      if (temp_v4 != (int *)0x0) {
        temp_v0 = temp_v5;
      }
      if (temp_v4 != (int *)0x0 && temp_v0 != 0) {
        (**(romwright_code **)(*temp_v4 + 0xc))(temp_v4,temp_v5);
      }
      temp_v3 = *(unsigned int *)(param_1 + 0x220);
      if ((int)temp_v3 < (*(int *)(param_1 + 0x230) - *(int *)(param_1 + 0x22c)) >> 2) {
        if ((int)temp_v3 < 0) {
          temp_v3 = 0;
        }
        temp_v0 = *(int *)(param_1 + 0x22c) + temp_v3 * 4;
        *(int *)(param_1 + 0x230) = temp_v0;
      }
      else {
        if ((int)(*(unsigned int *)(param_1 + 0x234) & 0x3fffffff) < (int)temp_v3) {
          if ((*(int *)(param_1 + 0x228) == 0) ||
             ((*(unsigned int *)(param_1 + 0x234) & 0xc0000000) != 0x40000000)) {
            temp_v3 = *(unsigned int *)(param_1 + 0x234) & 0x3fffffff;
          }
          else {
            puVar4 = (unsigned int *)
                     (**(romwright_code **)(**(int **)(param_1 + 0x228) + 8))
                               (*(int **)(param_1 + 0x228),temp_v3 << 2,0x20);
            temp_v0 = 0;
            puVar2 = *(unsigned int **)(param_1 + 0x22c);
            puVar6 = *(unsigned int **)(param_1 + 0x230);
            puVar5 = puVar4;
            if (puVar2 != puVar6) {
              do {
                if (puVar5 != (unsigned int *)0x0) {
                  *puVar5 = *puVar2;
                }
                puVar2 = puVar2 + 1;
                puVar5 = puVar5 + 1;
              } while (puVar2 != puVar6);
              temp_v0 = (*(int *)(param_1 + 0x230) - *(int *)(param_1 + 0x22c)) >> 2;
            }
            if (*(int *)(param_1 + 0x22c) != 0) {
              (**(romwright_code **)(**(int **)(param_1 + 0x228) + 0xc))();
            }
            *(unsigned int **)(param_1 + 0x230) = puVar4 + temp_v0;
            *(unsigned int **)(param_1 + 0x22c) = puVar4;
            *(unsigned int *)(param_1 + 0x234) = (*(unsigned int *)(param_1 + 0x234) & 0xc0000000) | temp_v3;
          }
        }
        temp_v0 = *(int *)(param_1 + 0x22c) + temp_v3 * 4;
        *(int *)(param_1 + 0x230) = temp_v0;
      }
      temp_v1 = 0;
      if (0 < (temp_v0 - *(int *)(param_1 + 0x22c)) >> 2) {
        do {
          *(unsigned int *)(*(int *)(param_1 + 0x22c) + temp_v1 * 4) = 0;
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < (*(int *)(param_1 + 0x230) - *(int *)(param_1 + 0x22c)) >> 2);
      }
      if (*(int *)(param_1 + 0x220) != 0) {
        temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,*(int *)(param_1 + 0x220) << 2,4);
        if (temp_v0 == 0) {
          temp_v2 = temp_v2 | 0x80000000;
        }
        if (-1 < (int)temp_v2) {
          puVar2 = (unsigned int *)(param_1 + 0x23c);
          temp_v3 = *(unsigned int *)(param_1 + 0x220) & 0x3fffffff;
          temp_v4 = param_2;
          temp_v5 = temp_v0;
          temp_v7 = temp_v3;
          if ((int **)puVar2 != &temp_v4) {
            temp_v5 = *(int *)(param_1 + 0x240);
            temp_v7 = *(unsigned int *)(param_1 + 0x248);
            temp_v4 = (int *)*puVar2;
            *(unsigned int *)(param_1 + 0x248) = temp_v3;
            *puVar2 = (unsigned int)param_2;
            *(int *)(param_1 + 0x240) = temp_v0;
            *(int *)(param_1 + 0x244) = temp_v0;
          }
          temp_v6 = temp_v5;
          temp_v0 = 0;
          if (temp_v4 != (int *)0x0) {
            temp_v0 = temp_v5;
          }
          if (temp_v4 != (int *)0x0 && temp_v0 != 0) {
            (**(romwright_code **)(*temp_v4 + 0xc))(temp_v4,temp_v5);
          }
          temp_v3 = *(unsigned int *)(param_1 + 0x220);
          if ((int)temp_v3 < (*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240)) >> 2) {
            if ((int)temp_v3 < 0) {
              temp_v3 = 0;
            }
            temp_v0 = *(int *)(param_1 + 0x240) + temp_v3 * 4;
            *(int *)(param_1 + 0x244) = temp_v0;
          }
          else {
            if ((int)(*(unsigned int *)(param_1 + 0x248) & 0x3fffffff) < (int)temp_v3) {
              if ((*(int *)(param_1 + 0x23c) == 0) ||
                 ((*(unsigned int *)(param_1 + 0x248) & 0xc0000000) != 0x40000000)) {
                temp_v3 = *(unsigned int *)(param_1 + 0x248) & 0x3fffffff;
              }
              else {
                puVar4 = (unsigned int *)
                         (**(romwright_code **)(**(int **)(param_1 + 0x23c) + 8))
                                   (*(int **)(param_1 + 0x23c),temp_v3 << 2,0x20);
                temp_v0 = 0;
                puVar2 = *(unsigned int **)(param_1 + 0x240);
                puVar6 = *(unsigned int **)(param_1 + 0x244);
                puVar5 = puVar4;
                if (puVar2 != puVar6) {
                  do {
                    if (puVar5 != (unsigned int *)0x0) {
                      *puVar5 = *puVar2;
                    }
                    puVar2 = puVar2 + 1;
                    puVar5 = puVar5 + 1;
                  } while (puVar2 != puVar6);
                  temp_v0 = (*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240)) >> 2;
                }
                if (*(int *)(param_1 + 0x240) != 0) {
                  (**(romwright_code **)(**(int **)(param_1 + 0x23c) + 0xc))();
                }
                *(unsigned int **)(param_1 + 0x244) = puVar4 + temp_v0;
                *(unsigned int **)(param_1 + 0x240) = puVar4;
                *(unsigned int *)(param_1 + 0x248) = (*(unsigned int *)(param_1 + 0x248) & 0xc0000000) | temp_v3;
              }
            }
            temp_v0 = *(int *)(param_1 + 0x240) + temp_v3 * 4;
            *(int *)(param_1 + 0x244) = temp_v0;
          }
          temp_v1 = 0;
          if (0 < (temp_v0 - *(int *)(param_1 + 0x240)) >> 2) {
            do {
              *(unsigned int *)(*(int *)(param_1 + 0x240) + temp_v1 * 4) = 0;
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < (*(int *)(param_1 + 0x244) - *(int *)(param_1 + 0x240)) >> 2);
          }
        }
      }
    }
  }
  return temp_v2;
}
