/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025863c` (_code @ 0x25863c, 0x20c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_0043dd90; /* 0x43dd90 */

extern int FUN_00100c4c(int, unsigned int);


void FUN_0025863c(unsigned int param_1)

{
/* irregular: 2 goto(s) */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  
  temp_v0 = DAT_0043dd90;
  temp_v7 = 0;
  *(unsigned int *)(DAT_0043dd90 + 0x194) = 0;
  *(unsigned int *)(temp_v0 + 0x298) = 0;
  temp_v1 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(temp_v0 + 0x84) + 8) + 0x2c) + 8) + 0xb4);
  if (0 < temp_v1) {
    do {
      temp_v6 = 0;
      temp_v2 = *(int *)(*(int *)(*(int *)(temp_v0 + 0x84) + 8) + 0x2c);
      piVar3 = (int *)(*(int *)(temp_v2 + 8) + 0xb8);
      temp_v3 = *piVar3;
      if (temp_v3 != 0) {
        temp_v3 = (int)piVar3 + temp_v3;
      }
      else {
        temp_v3 = 0;
      }
      piVar3 = (int *)(temp_v3 + temp_v7 * 4);
      temp_v3 = *piVar3;
      if (temp_v3 != 0) {
        temp_v3 = temp_v3 + (int)piVar3;
      }
      else {
        temp_v3 = 0;
      }
      temp_v2 = *(int *)(*(int *)(*(int *)(temp_v2 + 0x164) + *(int *)(temp_v3 + 0x1c) * 4) + 0x3c);
      do {
        piVar3 = (int *)(temp_v2 + temp_v6 * 4 + 0x274);
        temp_v4 = *piVar3;
        if (temp_v4 != 0) {
          temp_v4 = (int)piVar3 + temp_v4;
        }
        else {
          temp_v4 = 0;
        }
        if (temp_v4 != 0) {
          temp_v5 = *(int *)(temp_v4 + 8);
          if (temp_v5 == 0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = (int *)(temp_v4 + 8 + temp_v5);
          }
          temp_v4 = *piVar3;
          if (temp_v4 == 0x20000004) {
            temp_v5 = piVar3[7];
            if (temp_v5 != 0) {
              piVar3 = (int *)((int)(piVar3 + 7) + temp_v5);
            }
            else {
              piVar3 = (int *)0x0;
            }
          }
          if (piVar3 != (int *)0x0) {
            temp_v5 = piVar3[3];
            temp_v10 = temp_v5 == 0;
            if (!temp_v10) {
              temp_v4 = temp_v5 + (int)(piVar3 + 3);
              temp_v10 = temp_v4 == 0;
            }
            if ((!temp_v10) && (temp_v4 = FUN_00100c4c(temp_v4,param_1), temp_v4 != 0)) {
              temp_v5 = *(int *)(temp_v0 + 0x298);
              temp_v4 = 0;
              if (temp_v4 < temp_v5) {
                do {
                  temp_v8 = temp_v0 + temp_v4 * 4;
                  temp_v9 = temp_v8 + 0x100;
                  temp_v10 = (int)*(short *)(temp_v8 + 0x198) == *(int *)(temp_v3 + 0x1c);
                  if (temp_v10) {
                    temp_v9 = (int)*(short *)(temp_v8 + 0x19a);
                  }
                  if (temp_v10 && temp_v9 == temp_v6) goto LAB_00258798;
                  temp_v4 = temp_v4 + 1;
                } while (temp_v4 < temp_v5);
              }
              *(short *)(temp_v0 + temp_v5 * 4 + 0x198) = (short)*(unsigned int *)(temp_v3 + 0x1c);
              *(short *)(temp_v0 + *(int *)(temp_v0 + 0x298) * 4 + 0x19a) = (short)temp_v6;
              *(int *)(temp_v0 + 0x298) = *(int *)(temp_v0 + 0x298) + 1;
LAB_00258798:
              piVar3 = (int *)(temp_v6 * 0x58 + 0x16c + temp_v2);
              if (piVar3 != (int *)0x0) {
                temp_v9 = *(int *)(temp_v0 + 0x194);
                temp_v5 = *piVar3;
                temp_v4 = 0;
                if (temp_v4 < temp_v9) {
                  do {
                    temp_v8 = temp_v0 + temp_v4 * 4;
                    temp_v10 = (int)*(short *)(temp_v8 + 0x94) == *(int *)(temp_v3 + 0x18);
                    if (temp_v10) {
                      temp_v8 = (int)*(short *)(temp_v8 + 0x96);
                    }
                    if (temp_v10 && temp_v8 == temp_v5) goto LAB_00258810;
                    temp_v4 = temp_v4 + 1;
                  } while (temp_v4 < temp_v9);
                }
                *(short *)(temp_v0 + temp_v9 * 4 + 0x94) = (short)*(unsigned int *)(temp_v3 + 0x18);
                *(short *)(temp_v0 + *(int *)(temp_v0 + 0x194) * 4 + 0x96) = (short)temp_v5;
                *(int *)(temp_v0 + 0x194) = *(int *)(temp_v0 + 0x194) + 1;
              }
            }
          }
        }
LAB_00258810:
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 3);
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v1);
  }
  return;
}
