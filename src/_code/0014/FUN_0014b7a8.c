/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014b7a8` (_code @ 0x14b7a8, 0x460 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

/* Supplied declaration required: FUN_0014cf84. */


void FUN_0014b7a8(int *param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  
  *param_1 = (((((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + param_1[1] + 0x57) &
             ~(param_1[1] - 1U)) + param_3 * 4;
  if (0 < param_3) {
    temp_v6 = param_1[1];
    temp_v3 = 0;
    temp_v5 = 0x2d8;
    if ((~param_4 & 1) == 0) {
      temp_v4 = *(int *)(param_2 + 0x290);
      temp_v5 = ((temp_v6 + 0x2d7U) & ~(temp_v6 - 1U)) + temp_v4 * 4;
      temp_v1 = 0;
      if (temp_v1 < temp_v4) {
        do {
          if (*(int *)(param_2 + 0x294) != 0) {
            temp_v0 = param_2 + 0x294 + *(int *)(param_2 + 0x294);
          }
          else {
            temp_v0 = 0;
          }
          piVar2 = (int *)(temp_v0 + temp_v1 * 4);
          temp_v0 = *piVar2;
          if (temp_v0 != 0) {
            temp_v0 = (int)piVar2 + temp_v0;
          }
          else {
            temp_v0 = 0;
          }
          switch(*(unsigned int *)(temp_v0 + 8) & 0xff) {
          case 0:
          case 1:
            temp_v0 = 1;
            break;
          case 2:
            temp_v0 = 2;
            break;
          case 3:
            temp_v0 = 3;
            break;
          case 4:
            temp_v0 = 4;
            break;
          default:
            temp_v0 = 0;
          }
          temp_v1 = temp_v1 + 1;
          temp_v5 = temp_v0 * 4 + 0xc + (((temp_v6 + temp_v5) - 1U) & ~(temp_v6 - 1U));
        } while (temp_v1 < temp_v4);
      }
    }
    temp_v7 = temp_v6;
    if ((~param_4 & 0x20) == 0) {
      temp_v1 = 0;
      do {
        piVar2 = (int *)(temp_v1 * 4 + 0x274 + param_2);
        temp_v8 = *piVar2;
        if (temp_v8 != 0) {
          temp_v8 = (int)piVar2 + temp_v8;
        }
        else {
          temp_v8 = 0;
        }
        if (temp_v8 != 0) {
          FUN_0014cf84(&temp_v8,&temp_v5);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 3);
    }
    if ((~param_4 & 0x40) == 0) {
      if (*(int *)(param_2 + 0x280) != 0) {
        temp_v8 = param_2 + 0x280 + *(int *)(param_2 + 0x280);
      }
      else {
        temp_v8 = 0;
      }
      if (temp_v8 != 0) {
        FUN_0014cf84(&temp_v8,&temp_v5);
      }
    }
    if ((param_4 & 0x780) != 0) {
      temp_v1 = *(int *)(param_2 + 0x288);
      if (temp_v1 != 0) {
        temp_v4 = param_2 + 0x288 + temp_v1;
      }
      else {
        temp_v4 = 0;
      }
      if (temp_v4 != 0) {
        temp_v2 = temp_v6 - 1;
        temp_v5 = (((temp_v5 + temp_v6) - 1U) & ~temp_v2) + 0xf4;
        if ((~param_4 & 0x100) == 0) {
          if (temp_v1 != 0) {
            temp_v1 = param_2 + 0x288 + temp_v1;
          }
          else {
            temp_v1 = 0;
          }
          temp_v4 = *(int *)(temp_v1 + 0x28);
          if (temp_v4 != 0) {
            temp_v0 = temp_v1 + 0x28 + temp_v4;
          }
          else {
            temp_v0 = 0;
          }
          if (temp_v0 != 0) {
            if (temp_v4 != 0) {
              piVar2 = (int *)(temp_v1 + 0x28 + temp_v4);
            }
            else {
              piVar2 = (int *)0x0;
            }
            temp_v5 = (((temp_v6 + temp_v5) - 1U) & ~temp_v2) + 0x18;
            if (*piVar2 != 0) {
              temp_v1 = *piVar2 + (int)piVar2;
            }
            else {
              temp_v1 = 0;
            }
            if (temp_v1 != 0) {
              temp_v5 = (((((temp_v5 + temp_v6) - 1U) & ~temp_v2) + temp_v6 + 0xb) & ~temp_v2) +
                         0x10;
            }
            if (piVar2[1] != 0) {
              temp_v1 = (int)piVar2 + piVar2[1] + 4;
            }
            else {
              temp_v1 = 0;
            }
            if (temp_v1 != 0) {
              temp_v5 = (((((temp_v5 + temp_v6) - 1U) & ~temp_v2) + temp_v6 + 0xb) & ~temp_v2) +
                         0x10;
            }
            if (piVar2[2] != 0) {
              temp_v1 = (int)piVar2 + piVar2[2] + 8;
            }
            else {
              temp_v1 = 0;
            }
            if (temp_v1 != 0) {
              temp_v5 = (((((temp_v5 + temp_v6) - 1U) & ~temp_v2) + temp_v6 + 0xb) & ~temp_v2) +
                         0x10;
            }
            if (piVar2[3] != 0) {
              temp_v1 = (int)piVar2 + piVar2[3] + 0xc;
            }
            else {
              temp_v1 = 0;
            }
            if (temp_v1 != 0) {
              temp_v5 = (((((temp_v5 + temp_v6) - 1U) & ~temp_v2) + temp_v6 + 0xb) & ~temp_v2) +
                         0x10;
            }
            if (piVar2[4] != 0) {
              temp_v1 = (int)piVar2 + piVar2[4] + 0x10;
            }
            else {
              temp_v1 = 0;
            }
            if (temp_v1 != 0) {
              temp_v5 = (((((temp_v6 + temp_v5) - 1U) & ~temp_v2) + temp_v6 + 0xb) & ~temp_v2) +
                         0x10;
            }
            temp_v1 = piVar2[5];
            if (temp_v1 != 0) {
              temp_v3 = temp_v1 + (int)(piVar2 + 5);
            }
            if (temp_v3 != 0) {
              temp_v5 = (((((temp_v5 + temp_v6) - 1U) & ~temp_v2) + temp_v6 + 0xb) & ~temp_v2) +
                         0x10;
            }
          }
        }
      }
    }
    temp_v3 = param_1[1];
    *param_1 = (((((temp_v5 + temp_v6) - 1U) & ~(temp_v6 - 1U)) * param_3 + temp_v7) - temp_v3) +
               (((*param_1 + temp_v3) - 1U) & ~(temp_v3 - 1U));
  }
  return;
}
