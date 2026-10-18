/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e2878` (_code @ 0x3e2878, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

/* Supplied declaration required: FUN_00225e9c. */
/* Supplied declaration required: FUN_00225fa8. */


void FUN_003e2878(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  
  temp_v1 = 0;
  temp_v0 = *(unsigned int *)(param_1 + 0x8c);
  temp_v2 = 0xf02cb;
  if (temp_v0 >= 0x201) {
    temp_v0 = 0x200;
  }
  FUN_00225fa8(param_2,&temp_v1,8);
  FUN_00225e9c(param_1,param_2,0x2cc,*(unsigned int *)(param_1 + 0x88),temp_v0);
  temp_v3 = 1;
  temp_v4 = 0xf02bf;
  FUN_00225fa8(param_2,&temp_v3,8);
  if (0 < *(int *)(param_1 + 0x294)) {
    temp_v5 = 0;
    temp_v6 = 0xf029b;
    FUN_00225fa8(param_2,&temp_v5,8);
    FUN_00225e9c(param_1,param_2,0x29c,*(unsigned int *)(param_1 + 0x88),
                 *(unsigned int *)(param_1 + 0x8c));
    temp_v7 = 1;
    temp_v8 = 0xf028f;
    FUN_00225fa8(param_2,&temp_v7,8);
  }
  return;
}
