/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f5d6c` (_code @ 0x3f5d6c, 0x1ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

extern romwright_code *DAT_0044e948; /* 0x44e948 */
extern romwright_code *DAT_0044e94c; /* 0x44e94c */

/* Supplied declaration required: FUN_0032fa20. */


int * FUN_003f5d6c(int *param_1,int *param_2,int *param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  
  temp_v1 = param_1 != (int *)0x0;
  piVar1 = &temp_v8;
  if ((param_2 == (int *)0x0 || param_3 == (int *)0x0) || !temp_v1) {
    param_1 = (int *)0x1;
  }
  if ((param_2 != (int *)0x0 && param_3 != (int *)0x0) && temp_v1) {
    if ((param_2 == param_3) && (param_3[10] == 1)) {
      param_1 = (int *)0x3;
    }
    else {
      temp_v21 = 1;
      temp_v8 = *param_2;
      temp_v9 = param_2[1];
      temp_v10 = param_2[2];
      temp_v14 = param_2[6];
      temp_v15 = param_2[7];
      temp_v16 = param_2[3];
      temp_v17 = param_2[4];
      temp_v18 = param_2[8];
      temp_v19 = param_2[9];
      if (param_2 != param_3) {
        if (param_4 != 0) {
          if (param_4 != 1) {
            return (int *)0x4;
          }
          temp_v20 = 1;
          temp_v0 = param_2[3] * (param_2[7] + 1);
        }
        else {
          temp_v20 = 3;
          temp_v0 = (param_2[7] + ((unsigned int)param_2[7] >> 1) + 1) * param_2[3];
        }
        if (*param_1 < temp_v0) {
          if (param_1[1] != 0) {
            (*DAT_0044e94c)();
          }
          *param_1 = temp_v0;
          temp_v0 = (*DAT_0044e948)(temp_v0);
          param_1[1] = temp_v0;
          if (temp_v0 == 0) {
            return (int *)0x5;
          }
        }
        temp_v11 = param_1[1];
        temp_v12 = param_2[3] * param_2[7] + temp_v11;
        temp_v13 = temp_v12 + ((unsigned int)param_2[3] >> 1);
      }
      else {
        temp_v11 = *param_2;
        temp_v12 = param_2[1];
        temp_v13 = param_2[2];
      }
      FUN_0032fa20();
      switch(piVar1) {
      case (int *)0xfffffffb:
      case (int *)0xfffffffc:
      case (int *)0xfffffffd:
        param_1 = (int *)0x2;
        break;
      case (int *)0xfffffffe:
      case (int *)0xffffffff:
        return (int *)0x6;
      default:
        temp_v0 = param_2[1];
        temp_v2 = param_2[2];
        temp_v3 = param_2[3];
        temp_v4 = param_2[4];
        temp_v5 = param_2[5];
        temp_v6 = param_2[6];
        temp_v7 = param_2[7];
        *param_3 = *param_2;
        param_3[1] = temp_v0;
        param_3[2] = temp_v2;
        param_3[3] = temp_v3;
        param_3[4] = temp_v4;
        param_3[5] = temp_v5;
        param_3[6] = temp_v6;
        param_3[7] = temp_v7;
        temp_v0 = param_2[9];
        temp_v2 = param_2[10];
        param_3[8] = param_2[8];
        param_3[9] = temp_v0;
        param_3[10] = temp_v2;
        if (((unsigned int)piVar1 & 1) != 0) {
          *param_3 = temp_v11;
        }
        if (((unsigned int)piVar1 & 2) != 0) {
          param_3[1] = temp_v12;
          param_3[2] = temp_v13;
        }
        param_3[8] = 0;
        param_3[9] = 0;
        return (int *)0x0;
      }
    }
  }
  return param_1;
}
