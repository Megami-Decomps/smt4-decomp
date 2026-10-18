/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00371414` (_code @ 0x371414, 0x264 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern int FUN_002c301c(int *, unsigned int, unsigned int);
extern unsigned int FUN_002c30c4(void);
/* Supplied declaration required: FUN_00371678. */


void FUN_00371414(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int *temp_v11;
  unsigned int *temp_v12 [4];
  
  temp_v6 = 0;
  temp_v7 = *(int *)(*(int *)(param_2 + 8) + 0x10);
  if (0 < temp_v7) {
    do {
      piVar1 = (int *)(*(int *)(param_2 + 8) + 0x14);
      temp_v3 = *piVar1;
      if (temp_v3 != 0) {
        temp_v3 = (int)piVar1 + temp_v3;
      }
      else {
        temp_v3 = 0;
      }
      temp_v12[0] = (unsigned int *)0x0;
      if (temp_v3 != 0) {
        piVar1 = (int *)(temp_v3 + temp_v6 * 0x10 + 0x28);
        temp_v3 = *piVar1;
        if (temp_v3 == 0) {
          temp_v12[0] = (unsigned int *)0x0;
        }
        else {
          temp_v12[0] = (unsigned int *)((int)piVar1 + temp_v3);
        }
      }
      temp_v4 = temp_v12[0][4];
      if (temp_v4 != 6) {
        if (temp_v4 != 7) {
          if (temp_v4 == 8) {
            puVar3 = temp_v12[0];
            if ((temp_v12[0] != (unsigned int *)0x0) && ((*temp_v12[0] & 0x80000) == 0)) {
              puVar3 = (unsigned int *)0x0;
            }
            temp_v10 = puVar3[7];
            temp_v8 = temp_v10 != 0;
            if (temp_v8) {
              temp_v10 = temp_v10 + (int)(puVar3 + 7);
            }
            if (!temp_v8) {
              temp_v10 = 0;
            }
            piVar1 = (int *)(*(int *)(param_1 + 8) + 0xd0);
            temp_v9 = *piVar1;
            if (temp_v9 != 0) {
              temp_v9 = (int)piVar1 + temp_v9;
            }
            else {
              temp_v9 = 0;
            }
            temp_v11 = &temp_v9;
            if (!(temp_v9 == 0 || temp_v10 == 0)) {
              temp_v1 = FUN_002c30c4();
              temp_v3 = FUN_002c301c(temp_v11,temp_v10,temp_v1);
              if (temp_v3 != 0) {
                temp_v3 = ((temp_v3 - temp_v9) - 0x1c) >> 4;
              }
              else {
                temp_v3 = -1;
              }
            }
            else {
              temp_v3 = -1;
            }
            if (*(int *)(param_1 + 0x17c) != *(int *)(param_1 + 0x180)) {
              temp_v2 = *(int *)(param_1 + 0x17c) + temp_v3 * 8;
            }
            else {
              piVar1 = (int *)(*(int *)(param_1 + 8) + 0xd0);
              temp_v5 = *piVar1;
              if (temp_v5 != 0) {
                temp_v5 = (int)piVar1 + temp_v5;
              }
              else {
                temp_v5 = 0;
              }
              temp_v2 = 0;
              if (temp_v5 != 0) {
                piVar1 = (int *)(temp_v5 + temp_v3 * 0x10 + 0x28);
                temp_v2 = *piVar1;
                if (temp_v2 == 0) {
                  temp_v2 = 0;
                }
                else {
                  temp_v2 = (int)piVar1 + temp_v2;
                }
              }
            }
            temp_v4 = temp_v12[0][2];
            *(int *)(*(int *)(param_2 + 0x24) + temp_v6 * 4) = temp_v3;
            *(unsigned int *)(*(int *)(param_2 + 0x44) + temp_v6 * 4) = temp_v2 + temp_v4;
            *(int *)(*(int *)(param_2 + 0x54) + temp_v6 * 4) = *(int *)(param_1 + 0x20c) + temp_v3;
          }
        }
        else {
          if (temp_v12[0] == (unsigned int *)0x0) {
            puVar3 = (unsigned int *)0x0;
          }
          else {
            puVar3 = (unsigned int *)0x0;
            if ((*temp_v12[0] & 0x1000000) != 0) {
              puVar3 = temp_v12[0];
            }
          }
          temp_v4 = puVar3[7];
          temp_v3 = *(int *)(param_1 + 0x170);
          if (temp_v3 == *(int *)(param_1 + 0x174)) {
            piVar1 = (int *)(*(int *)(param_1 + 8) + 0xb8);
            temp_v3 = *piVar1;
            if (temp_v3 != 0) {
              temp_v3 = (int)piVar1 + temp_v3;
            }
            else {
              temp_v3 = 0;
            }
          }
          temp_v0 = temp_v12[0][2];
          piVar1 = (int *)(temp_v3 + temp_v4 * 4);
          temp_v3 = *piVar1;
          if (temp_v3 != 0) {
            temp_v3 = (int)piVar1 + temp_v3;
          }
          else {
            temp_v3 = 0;
          }
          *(unsigned int *)(*(int *)(param_2 + 0x24) + temp_v6 * 4) = temp_v4;
          *(unsigned int *)(*(int *)(param_2 + 0x44) + temp_v6 * 4) = temp_v0 + temp_v3;
          *(unsigned int *)(*(int *)(param_2 + 0x54) + temp_v6 * 4) = *(int *)(param_1 + 0x1fc) + temp_v4;
        }
      }
      else {
        temp_v3 = param_1 + 0x1f6;
        if ((temp_v12[0][5] != 1) && (temp_v3 = 0, temp_v12[0][5] == 0)) {
          temp_v3 = param_1 + 0x30;
        }
        *(unsigned int *)(*(int *)(param_2 + 0x24) + temp_v6 * 4) = 0xffffffff;
        *(int *)(*(int *)(param_2 + 0x44) + temp_v6 * 4) = temp_v3;
        *(int *)(*(int *)(param_2 + 0x54) + temp_v6 * 4) = param_1 + 0x1f5;
      }
      temp_v3 = param_1;
      FUN_00371678(param_1,temp_v12);
      *(int *)(*(int *)(param_2 + 0x34) + temp_v6 * 4) = temp_v3;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v7);
  }
  return;
}
