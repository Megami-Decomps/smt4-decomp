/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004245b4` (_code @ 0x4245b4, 0x384 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00513f84(unsigned int, unsigned int);
int readInnerWord6(unsigned int, int *);
int FUN_00514018(unsigned int, unsigned int, unsigned int *);
int FUN_00514088(unsigned int, unsigned int, unsigned int *, int [3], int [3]);
int FUN_00514284(unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

/* Supplied declaration required: FUN_00513f84. */
/* Supplied declaration required: readInnerWord6. */
/* Supplied declaration required: FUN_00514018. */
/* Supplied declaration required: FUN_00514088. */
/* Supplied declaration required: FUN_00514284. */


void FUN_004245b4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  unsigned int temp_v4;
  unsigned int *temp_v5 [2];
  unsigned int temp_v6;
  int temp_v7;
  unsigned int uStack_6c;
  unsigned int temp_v8 [6];
  int temp_v9;
  int temp_v10 [3];
  int *temp_v11;
  int temp_v12 [3];
  
  readInnerWord6(**(unsigned int **)(param_1 + 0x18),&temp_v9);
  temp_v8[0] = 0;
  temp_v8[1] = 0;
  if (temp_v9 != 0) {
    temp_v3 = 0;
    do {
      piVar6 = (int *)(param_1 + temp_v3 * 4 + 0x46c);
      temp_v0 = *piVar6;
      if (-1 < temp_v0) {
        piVar2 = *(int **)(param_1 + temp_v0 * 4 + 0x2ec);
        (**(romwright_code **)(*piVar2 + 0x10))(piVar2,temp_v5);
        temp_v0 = (**(romwright_code **)(**(int **)(param_1 + *piVar6 * 4 + 0x2ec) + 0x20))();
        temp_v8[temp_v3] = temp_v0 - (int)temp_v5[0];
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 2);
    temp_v4 = temp_v8[0];
    if (temp_v8[0] == 0) {
      temp_v4 = temp_v8[1];
    }
    if ((temp_v8[0] == 0 && temp_v4 == 0) && (*(int *)(param_1 + 0xc) == 5)) {
      *(unsigned int *)(param_1 + 0xc) = 3;
    }
  }
  temp_v8[2] = 0;
  do {
    temp_v3 = param_1 + temp_v8[2] * 4;
    if (-1 < *(int *)(temp_v3 + 0x46c)) {
      FUN_00514018(**(unsigned int **)(param_1 + 0x18),
                   *(unsigned int *)(param_1 + *(int *)(temp_v3 + 0x46c) * 4 + 0x44c),&temp_v6);
      temp_v4 = 0;
      if (temp_v8[temp_v8[2]] < temp_v6) {
        temp_v6 = temp_v8[temp_v8[2]];
      }
      if (temp_v6 != 0) {
        temp_v0 = param_1 + temp_v8[2] * 0x80;
        temp_v11 = (int *)(temp_v3 + 0x47c);
        do {
          temp_v5[0] = (unsigned int *)&temp_v7;
          FUN_00514088(**(unsigned int **)(param_1 + 0x18),
                       *(unsigned int *)(param_1 + *(int *)(temp_v3 + 0x46c) * 4 + 0x44c),temp_v8 + 3,
                       temp_v10,temp_v12);
          temp_v1 = *(int *)(param_1 + 0xc);
          temp_v2 = temp_v1;
          if (temp_v1 == 4) {
            temp_v2 = temp_v12[0];
          }
          if ((!(temp_v1 != 4 || temp_v2 != 1)) && (*(int *)(temp_v3 + 0x474) == *(int *)(temp_v3 + 0x47c)))
          {
            FUN_00514284(**(unsigned int **)(param_1 + 0x18),
                         *(unsigned int *)(param_1 + *(int *)(temp_v3 + 0x46c) * 4 + 0x44c));
            if (-1 < *(int *)(param_1 + 0x548)) {
              FUN_00513f84(**(unsigned int **)(param_1 + 0x18),
                           *(unsigned int *)(param_1 + *(int *)(param_1 + 0x548) * 4 + 0x528));
            }
          }
          else {
            piVar6 = *(int **)(param_1 + *(int *)(temp_v3 + 0x46c) * 4 + 0x2ec);
            (**(romwright_code **)(*piVar6 + 0x14))(piVar6,temp_v8[3]);
            temp_v2 = temp_v0 + (*(int *)(temp_v3 + 0x474) % 0x10) * 8;
            *(unsigned int *)(temp_v2 + 0x30) = temp_v7;
            *(unsigned int *)(temp_v2 + 0x34) = uStack_6c;
            FUN_00514284(**(unsigned int **)(param_1 + 0x18),
                         *(unsigned int *)(param_1 + *(int *)(temp_v3 + 0x46c) * 4 + 0x44c));
            *(int *)(temp_v3 + 0x474) = *(int *)(temp_v3 + 0x474) + 1;
            *(unsigned int *)(param_1 + 0x554) = temp_v6 + *(int *)(param_1 + 0x554);
            *(int *)(param_1 + 0x558) = *(int *)(param_1 + 0x558) + temp_v10[0];
            if (*(int *)(param_1 + 0xc) == 4) {
              temp_v2 = param_1 + *(int *)(temp_v3 + 0x46c) * 0x28;
              if ((temp_v2 == -0x30c) || (*(unsigned int *)(temp_v2 + 0x314) >= 2)) {
                *(unsigned int *)(param_1 + 0xc) = 1;
                return;
              }
              if (*(int *)(temp_v3 + 0x474) - *(int *)(temp_v3 + 0x47c) == 2) {
                temp_v2 = param_1 + temp_v8[2] * 0x80 +
                        (*(int *)(param_1 + temp_v8[2] * 4 + 0x47c) % 0x10) * 8;
                temp_v0 = temp_v0 + ((*temp_v11 + 1) % 0x10) * 8;
                if (*(int *)(temp_v0 + 0x30) != *(int *)(temp_v2 + 0x30) ||
                    *(int *)(temp_v0 + 0x34) != *(int *)(temp_v2 + 0x34)) {
                  (**(romwright_code **)(**(int **)(param_1 + *(int *)(temp_v3 + 0x46c) * 4 + 0x2ec) + 0x1c))();
                  *temp_v11 = *(int *)(temp_v3 + 0x47c) + 1;
                  if (-1 < *(int *)(param_1 + 0x548)) {
                    FUN_00513f84(**(unsigned int **)(param_1 + 0x18),
                                 *(unsigned int *)(param_1 + *(int *)(param_1 + 0x548) * 4 + 0x528));
                  }
                }
                *(unsigned int *)(param_1 + 0xc) = 1;
                return;
              }
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < temp_v6);
      }
    }
    temp_v8[2] = temp_v8[2] + 1;
    if ((int)temp_v8[2] >= 2) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
