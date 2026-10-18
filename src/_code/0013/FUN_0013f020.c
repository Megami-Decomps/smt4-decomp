/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013f020` (_code @ 0x13f020, 0x3c0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned int FUN_0014ad08(int *, unsigned int, unsigned int);


unsigned int FUN_0013f020(int *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 goto(s) */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  int temp_v10 [2];
  int *temp_v11;
  unsigned int temp_v12;
  int iStack_2c;
  unsigned int temp_v13;
  
  temp_v6 = 0;
  temp_v5 = *(unsigned int *)(param_3 + 0x1c) & 0xff;
  if (*(int *)(param_3 + 0x280) != 0) {
    temp_v1 = param_3 + 0x280 + *(int *)(param_3 + 0x280);
  }
  else {
    temp_v1 = 0;
  }
  temp_v8 = temp_v1 != 0;
  temp_v7 = 0;
  do {
    piVar7 = (int *)(temp_v7 * 4 + 0x274 + param_3);
    temp_v1 = *piVar7;
    if (temp_v1 != 0) {
      temp_v1 = (int)piVar7 + temp_v1;
    }
    else {
      temp_v1 = 0;
    }
    temp_v9 = temp_v1 != 0;
    temp_v0 = 0;
    if (temp_v7 != 0) {
      if (temp_v7 != 1) {
        if (temp_v7 == 2) {
          if (temp_v5 == 5) {
joined_r0x0013f134:
            if (temp_v9 || temp_v8) {
              temp_v0 = 1;
            }
          }
          else if (temp_v5 == 0 || temp_v5 == 4) {
joined_r0x0013f164:
            if (temp_v9) {
              temp_v0 = 1;
            }
          }
          else {
            temp_v9 = temp_v8;
            if (temp_v5 == 3) {
              if (temp_v9) {
                temp_v0 = 1;
              }
            }
          }
        }
      }
      else if (!temp_v9) {
        if (temp_v5 == 2) {
          if (*(int *)(param_3 + 0x27c) != 0) {
            temp_v1 = param_3 + 0x27c + *(int *)(param_3 + 0x27c);
          }
          else {
            temp_v1 = 0;
          }
          temp_v9 = temp_v1 != 0;
          goto joined_r0x0013f134;
        }
        if (!(temp_v5 == 1 || temp_v5 == 3)) {
          temp_v9 = temp_v8;
          if (temp_v5 == 4) goto joined_r0x0013f164;
        }
        else {
          if (*(int *)(param_3 + 0x27c) != 0) {
            temp_v1 = param_3 + 0x27c + *(int *)(param_3 + 0x27c);
          }
          else {
            temp_v1 = 0;
          }
          temp_v9 = temp_v1 != 0;
          if (temp_v9) {
            temp_v0 = 1;
          }
        }
      }
      else {
        temp_v0 = 1;
      }
    }
    else if ((temp_v9) || (((temp_v5 == 0 || (temp_v5 == 1)) && (temp_v8)))) {
      temp_v0 = 1;
    }
    *(unsigned char *)(param_3 + temp_v7 * 0x58 + 0x191) = temp_v0;
    if (temp_v0) {
      temp_v6 = temp_v6 | (1 << (temp_v7 & 0xff));
    }
    temp_v7 = temp_v7 + 1;
  } while ((int)temp_v7 < 3);
  temp_v5 = 0;
  *(unsigned int *)(param_3 + 0x2a8) = *(unsigned int *)(param_3 + 0x2a8) ^ temp_v6;
  temp_v7 = *(unsigned int *)(param_3 + 0x2ac);
  temp_v6 = 0;
  temp_v1 = 0;
  temp_v11 = param_1;
  temp_v12 = param_2;
  iStack_2c = param_3;
  temp_v13 = param_4;
  do {
    piVar7 = (int *)(temp_v5 * 4 + 0x274 + param_3);
    temp_v10[0] = *piVar7;
    if (temp_v10[0] != 0) {
      temp_v10[0] = (int)piVar7 + temp_v10[0];
    }
    else {
      temp_v10[0] = 0;
    }
    if (temp_v10[0] != 0) {
      temp_v4 = *(int *)(temp_v10[0] + 8);
      if (temp_v4 == 0) {
        temp_v4 = 0;
      }
      else {
        temp_v4 = temp_v10[0] + 8 + temp_v4;
      }
      if (temp_v4 != 0) {
        temp_v2 = FUN_0014ad08(temp_v10,temp_v12,param_4);
        temp_v6 = temp_v6 | temp_v2;
        temp_v2 = *(unsigned int *)(temp_v10[0] + 0x24) & 0x8fffffff;
        *(unsigned int *)(temp_v10[0] + 0x24) = temp_v2;
        if (temp_v5 == 0) {
          switch(*(unsigned int *)(param_3 + 0x170) & 0xff) {
          default:
            break;
          case 1:
            temp_v2 = temp_v2 | 0x10000000;
            *(unsigned int *)(temp_v10[0] + 0x24) = temp_v2;
            break;
          case 3:
            temp_v2 = temp_v2 | 0x30000000;
            *(unsigned int *)(temp_v10[0] + 0x24) = temp_v2;
            break;
          case 4:
            temp_v2 = temp_v2 | 0x20000000;
            *(unsigned int *)(temp_v10[0] + 0x24) = temp_v2;
            break;
          case 5:
            temp_v2 = temp_v2 | 0x40000000;
            *(unsigned int *)(temp_v10[0] + 0x24) = temp_v2;
          }
        }
LAB_0013f2c0:
        if (-1 < (int)temp_v6) {
          if ((*(unsigned int *)(param_3 + 0x170) & 0xff) == 1) {
            if (*(int *)(temp_v10[0] + 8) != 0) {
              piVar7 = (int *)(temp_v10[0] + 8 + *(int *)(temp_v10[0] + 8));
            }
            else {
              piVar7 = (int *)0x0;
            }
            if (*piVar7 == 0x20000004) {
              temp_v4 = piVar7[7];
              if (temp_v4 != 0) {
                piVar7 = (int *)((int)(piVar7 + 7) + temp_v4);
              }
              else {
                piVar7 = (int *)0x0;
              }
            }
            if (*piVar7 != 0x20000009) {
              temp_v6 = temp_v6 | 0x20;
            }
          }
          temp_v4 = *(int *)(temp_v10[0] + 8);
          if (temp_v4 != 0) {
            piVar7 = (int *)(temp_v10[0] + 8 + temp_v4);
          }
          else {
            piVar7 = (int *)0x0;
          }
          if (*piVar7 == 0x20000004) {
            temp_v4 = piVar7[7];
            if (temp_v4 != 0) {
              piVar7 = (int *)((int)(piVar7 + 7) + temp_v4);
            }
            else {
              piVar7 = (int *)0x0;
            }
          }
          if (temp_v5 != 0) {
            piVar7 = (int *)(((int)piVar7 << ((temp_v5 & 0x1f) << 3)) |
                            ((unsigned int)piVar7 >> ((temp_v5 * -8 + 0x20) & 0xff)));
          }
          temp_v7 = temp_v7 ^ (unsigned int)piVar7;
        }
      }
    }
    temp_v5 = temp_v5 + 1;
    if ((int)temp_v5 >= 3) {
      *(unsigned int *)(param_3 + 0x2b0) = temp_v7;
      temp_v4 = *(int *)(param_3 + 0x280);
      if (temp_v4 != 0) {
        temp_v3 = param_3 + 0x280 + temp_v4;
      }
      else {
        temp_v3 = 0;
      }
      if (temp_v3 != 0) {
        if (temp_v4 != 0) {
          temp_v1 = temp_v4 + param_3 + 0x280;
        }
        temp_v10[0] = temp_v1;
        temp_v5 = FUN_0014ad08(temp_v10,temp_v12,param_4);
        temp_v6 = temp_v6 | temp_v5;
      }
      if (-1 < (int)temp_v6) {
        *(unsigned int *)(*temp_v11 + 0x18) = *(unsigned int *)(*temp_v11 + 0x18) | 0x100;
      }
      return temp_v6;
    }
  } while( 1 );
}
