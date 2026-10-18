/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f30c` (_code @ 0x34f30c, 0x2f0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0034f30c_arg1 fn_0034f30c_arg1;
struct fn_0034f30c_arg1 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x8];
    int field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x8];
    int field_0x24; /* +0x24 */
};

typedef int romwright_code();
/* stack frame of param_5: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_5_stack;

/* Supplied declaration required: FUN_0023a7c4. */
/* Supplied declaration required: FUN_002c3b48. */


unsigned int
FUN_0034f30c(int param_1,fn_0034f30c_arg1 *param_2,unsigned int *param_3,int param_4,int *param_5)

{
/* irregular: 2 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned long long temp_v6;
  unsigned long long temp_v7;
  int temp_v8;
  
  temp_v0 = param_2->field_0x14;
  if (param_2->field_0x8 == 6) {
    temp_v4 = 1;
  }
  else {
    temp_v4 = 2;
  }
  temp_v5 = param_2->field_0x18;
  if (temp_v0 >= 0x201) {
    temp_v1 = 0x400;
    *param_5 = 0x400;
  }
  else {
    if (temp_v0 < 0x101) {
      temp_v1 = 0x100;
    }
    else {
      temp_v1 = 0x200;
    }
    *param_5 = temp_v1;
  }
  if (temp_v4 == 2) {
    param_5[1] = temp_v1;
  }
  if (temp_v5 >= 0x201) {
    temp_v8 = 0x400;
  }
  else if (temp_v5 < 0x101) {
    temp_v8 = 0x100;
  }
  else {
    temp_v8 = 0x200;
  }
  temp_v1 = 0;
  if (temp_v4 != 0) {
    temp_v6 = 0x4334000042b40000;
    temp_v7 = 0x43870000;
LAB_0034f3c8:
    temp_v2 = (**(romwright_code **)**(unsigned int **)(param_1 + 4))
                      (*(unsigned int **)(param_1 + 4),*param_5 * temp_v8 * 3,0x80);
    param_3[temp_v1] = temp_v2;
    temp_v3 = 0;
    if (temp_v2 != 0) {
      FUN_002c3b48(temp_v2,*param_5 * temp_v8 * 3);
      do {
        temp_v2 = param_2->field_0x8;
        if (!(temp_v2 == 4 || temp_v2 == 5)) {
          if (!(temp_v2 == 2 || temp_v2 == 3)) {
            FUN_0023a7c4(param_4 + temp_v1 * 0x20,*param_5,temp_v8,0,0,temp_v0,temp_v5,0x6754,0x1401,
                         param_3[temp_v1],0);
          }
          else {
            FUN_0023a7c4(param_4 + temp_v1 * 0x20,*param_5,temp_v8,0,(temp_v5 >> 1) * temp_v1,temp_v0,
                         temp_v5 >> 1,0x6754,0x1401,param_3[temp_v1],0);
          }
        }
        else {
          FUN_0023a7c4(param_4 + temp_v1 * 0x20,*param_5,temp_v8,(temp_v0 >> 1) * temp_v1,0,temp_v0 >> 1,
                       temp_v5,0x6754,0x1401,param_3[temp_v1],0);
        }
        temp_v2 = param_2->field_0x24;
        if (temp_v2 != 1) {
          if (temp_v2 == 2) {
            temp_v3 = (unsigned int)((unsigned long long)temp_v6 >> 0x20);
            *(unsigned int *)(param_4 + temp_v1 * 0x20 + 0x14) = temp_v3;
          }
          else if (temp_v2 == 3) {
            temp_v3 = (unsigned int)temp_v7;
            *(unsigned int *)(param_4 + temp_v1 * 0x20 + 0x14) = temp_v3;
          }
        }
        else {
          *(int *)(param_4 + temp_v1 * 0x20 + 0x14) = (int)temp_v6;
        }
        temp_v1 = temp_v1 + 1;
        if (temp_v4 <= temp_v1) goto LAB_0034f578;
        if ((temp_v1 != 1) ||
           ((temp_v2 = param_2->field_0x8, temp_v2 != 4 && temp_v2 != 5 && (temp_v2 != 2 && temp_v2 != 3))))
        goto LAB_0034f3c8;
        param_3[1] = *param_3;
      } while( 1 );
    }
  }
  else {
LAB_0034f578:
    temp_v0 = param_2->field_0x8;
    if (!((temp_v0 == 1 || temp_v0 == 3) || temp_v0 == 5)) {
      *(unsigned int *)(param_1 + 0x28) = 0x400;
      *(unsigned int *)(param_1 + 0x2c) = 0x410;
      *(unsigned int *)(param_1 + 0x34) = 0;
      *(unsigned int *)(param_1 + 0x38) = 1;
    }
    else {
      *(unsigned int *)(param_1 + 0x28) = 0x410;
      *(unsigned int *)(param_1 + 0x2c) = 0x400;
      *(unsigned int *)(param_1 + 0x34) = 1;
      *(unsigned int *)(param_1 + 0x38) = 0;
    }
    temp_v3 = 1;
  }
  return temp_v3;
}
