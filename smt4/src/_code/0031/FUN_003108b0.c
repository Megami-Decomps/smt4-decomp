/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003108b0` (_code @ 0x3108b0, 0x208 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern unsigned char LAB_00310ab8; /* 0x310ab8 */

extern int FUN_00100c4c(int, unsigned char *);


void FUN_003108b0(int param_1,int param_2)

{
/* irregular: 2 goto(s) */
  int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  short *psVar9;
  int temp_v6;
  int temp_v7;
  short *psVar12;
  unsigned char temp_v8;
  
  temp_v7 = 0;
  *(unsigned int *)(param_1 + 0x100) = 0;
  *(unsigned int *)(param_1 + 0x204) = 0;
  temp_v0 = *(int *)(*(int *)(*(int *)(*(int *)(param_2 + 8) + 0x2c) + 8) + 0xb4);
  if (0 < temp_v0) {
    do {
      temp_v6 = 0;
      temp_v1 = *(int *)(*(int *)(param_2 + 8) + 0x2c);
      piVar2 = (int *)(*(int *)(temp_v1 + 8) + 0xb8);
      temp_v5 = *piVar2;
      if (temp_v5 != 0) {
        temp_v5 = (int)piVar2 + temp_v5;
      }
      else {
        temp_v5 = 0;
      }
      piVar2 = (int *)(temp_v5 + temp_v7 * 4);
      temp_v5 = *piVar2;
      if (temp_v5 != 0) {
        temp_v5 = temp_v5 + (int)piVar2;
      }
      else {
        temp_v5 = 0;
      }
      temp_v1 = *(int *)(*(int *)(*(int *)(temp_v1 + 0x164) + *(int *)(temp_v5 + 0x1c) * 4) + 0x3c);
      do {
        piVar2 = (int *)(temp_v6 * 4 + 0x274 + temp_v1);
        temp_v2 = *piVar2;
        if (temp_v2 != 0) {
          temp_v2 = (int)piVar2 + temp_v2;
        }
        else {
          temp_v2 = 0;
        }
        if (temp_v2 != 0) {
          temp_v3 = *(int *)(temp_v2 + 8);
          if (temp_v3 == 0) {
            piVar2 = (int *)0x0;
          }
          else {
            piVar2 = (int *)(temp_v2 + 8 + temp_v3);
          }
          if (*piVar2 == 0x20000004) {
            temp_v2 = piVar2[7];
            if (temp_v2 != 0) {
              piVar2 = (int *)((int)(piVar2 + 7) + temp_v2);
            }
            else {
              piVar2 = (int *)0x0;
            }
          }
          if (piVar2 != (int *)0x0) {
            temp_v2 = piVar2[3];
            if (temp_v2 != 0) {
              temp_v2 = (int)(piVar2 + 3) + temp_v2;
            }
            else {
              temp_v2 = 0;
            }
            temp_v2 = FUN_00100c4c(temp_v2,&LAB_00310ab8);
            if (temp_v2 != 0) {
              temp_v3 = *(int *)(param_1 + 0x204);
              temp_v2 = 0;
              if (temp_v2 < temp_v3) {
                do {
                  temp_v4 = param_1 + temp_v2 * 4;
                  temp_v8 = (int)*(short *)(temp_v4 + 0x104) == *(int *)(temp_v5 + 0x1c);
                  if (temp_v8) {
                    temp_v4 = (int)*(short *)(temp_v4 + 0x106);
                  }
                  if (temp_v8 && temp_v4 == temp_v6) goto LAB_00310a08;
                  temp_v2 = temp_v2 + 1;
                } while (temp_v2 < temp_v3);
              }
              *(short *)(param_1 + temp_v3 * 4 + 0x104) = (short)*(unsigned int *)(temp_v5 + 0x1c);
              *(short *)(param_1 + *(int *)(param_1 + 0x204) * 4 + 0x106) = (short)temp_v6;
              *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) + 1;
LAB_00310a08:
              puVar3 = (unsigned int *)(temp_v6 * 0x58 + 0x16c + temp_v1);
              if (puVar3 != (unsigned int *)0x0) {
                temp_v3 = *(int *)(param_1 + 0x100);
                psVar9 = (short *)*puVar3;
                temp_v2 = 0;
                if (temp_v2 < temp_v3) {
                  do {
                    psVar12 = (short *)(param_1 + temp_v2 * 4);
                    temp_v8 = (int)*psVar12 == *(int *)(temp_v5 + 0x18);
                    if (temp_v8) {
                      psVar12 = (short *)(int)psVar12[1];
                    }
                    if (temp_v8 && psVar12 == psVar9) goto LAB_00310a80;
                    temp_v2 = temp_v2 + 1;
                  } while (temp_v2 < temp_v3);
                }
                *(short *)(param_1 + temp_v3 * 4) = (short)*(unsigned int *)(temp_v5 + 0x18);
                *(short *)(param_1 + *(int *)(param_1 + 0x100) * 4 + 2) = (short)psVar9;
                *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
              }
            }
          }
        }
LAB_00310a80:
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 3);
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v0);
  }
  return;
}
