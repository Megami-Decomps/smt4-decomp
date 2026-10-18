/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001343c8` (_code @ 0x1343c8, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

extern int *FUN_002e4e86(unsigned int *, unsigned int *);
extern int FUN_002e6dac(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00301ac0. */
/* Supplied declaration required: FUN_00307900. */
/* Supplied declaration required: FUN_0030791e. */
extern unsigned int FUN_00307962(unsigned int, int *);
/* Supplied declaration required: FUN_00307974. */


int * FUN_001343c8(int *param_1,int *param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8 [2];
  
  if (param_2 != param_1) {
    temp_v0 = FUN_00301ac0(param_2);
    temp_v1 = FUN_00307974(param_1);
    if (temp_v1 < temp_v0) {
      temp_v2 = FUN_00301ac0(param_1);
      temp_v8[0] = FUN_00307962(temp_v2,param_1);
      temp_v7 = FUN_00301ac0(param_2);
      piVar4 = (int *)FUN_002e4e86((unsigned int *)&temp_v7,temp_v8);
      temp_v3 = *piVar4;
      temp_v4 = FUN_002e6dac();
      FUN_0030791e(*param_2,param_2[1],temp_v4,param_1);
      temp_v6 = *param_1;
      for (temp_v5 = temp_v6; temp_v5 != param_1[1]; temp_v5 = temp_v5 + 0xc) {
      }
      FUN_00307974(param_1);
      FUN_002e6e14(temp_v6);
      *param_1 = temp_v4;
      temp_v5 = FUN_00301ac0(param_2);
      param_1[1] = temp_v5 * 0xc + *param_1;
      temp_v5 = *param_1 + temp_v3 * 0xc;
    }
    else {
      temp_v0 = FUN_00301ac0(param_1);
      temp_v1 = FUN_00301ac0(param_2);
      if (temp_v0 < temp_v1) {
        temp_v5 = FUN_00301ac0(param_1);
        temp_v5 = temp_v5 * 0xc;
        FUN_00307900(*param_2,*param_2 + temp_v5,*param_1);
        temp_v3 = FUN_00301ac0(param_2);
        param_1[1] = temp_v3 * 0xc + *param_1;
        FUN_0030791e(*param_2 + temp_v5,param_2[1],*param_1 + temp_v5,param_1);
        return param_1;
      }
      temp_v5 = FUN_00307900(*param_2,param_2[1],*param_1);
      for (; temp_v5 != param_1[1]; temp_v5 = temp_v5 + 0xc) {
      }
      temp_v5 = FUN_00301ac0(param_2);
      temp_v5 = temp_v5 * 0xc + *param_1;
      param_1[1] = temp_v5;
    }
    param_1[2] = temp_v5;
  }
  return param_1;
}
