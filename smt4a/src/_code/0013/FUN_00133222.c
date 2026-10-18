/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00133222` (_code @ 0x133222, 0xe2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00307c74. */
/* Supplied declaration required: FUN_00307c96. */
/* Supplied declaration required: FUN_00307ca2. */
/* Supplied declaration required: FUN_00307cb0. */
/* Supplied declaration required: FUN_0030c5d8. */
extern int FUN_0030c60c(int *, int, int);
extern int FUN_0030c61a(unsigned int, int *);
/* Supplied declaration required: FUN_0030fdf0. */
extern int aeabi_idivmod(int, unsigned int);


void FUN_00133222(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = FUN_00307cb0();
  temp_v1 = FUN_00307ca2(param_1);
  if (temp_v1 < temp_v0) {
    temp_v5 = param_1[1];
    temp_v4 = temp_v5 - 0x18;
    param_1[1] = temp_v5 + 0x18;
    FUN_0030c5d8(param_1,temp_v5);
    while (param_2 != temp_v4) {
      temp_v4 = temp_v4 - 0x18;
      temp_v5 = temp_v5 - 0x18;
      FUN_00307c96(temp_v5,temp_v4);
    }
    FUN_00307c96(param_2,param_3);
  }
  else {
    temp_v2 = FUN_00307ca2(param_1);
    temp_v4 = FUN_0030c61a(temp_v2,param_1);
    temp_v5 = FUN_0030c60c(param_1,temp_v4,*param_1);
    FUN_00307c74(*param_1,param_2,temp_v5,param_1);
    temp_v3 = aeabi_idivmod(param_2 - *param_1,0x18);
    FUN_0030c5d8(param_1,temp_v3 * 0x18 + temp_v5,param_3);
    temp_v3 = aeabi_idivmod(param_2 - *param_1,0x18);
    FUN_00307c74(param_2,param_1[1],temp_v3 * 0x18 + temp_v5 + 0x18,param_1);
    temp_v3 = FUN_00307ca2(param_1);
    FUN_0030fdf0(param_1,*param_1,param_1[1]);
    temp_v6 = *param_1;
    FUN_00307cb0(param_1);
    FUN_002e6e14(temp_v6);
    *param_1 = temp_v5;
    param_1[2] = temp_v4 * 0x18 + temp_v5;
    param_1[1] = temp_v3 * 0x18 + temp_v5 + 0x18;
  }
  return;
}
