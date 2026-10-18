/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e2e40` (_code @ 0x3e2e40, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 6 slot(s), 21 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: FUN_00226138. */
/* Supplied declaration required: FUN_003e2688. */
/* Supplied declaration required: FUN_003e2ba0. */


int FUN_003e2e40(unsigned int param_1,unsigned int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v2 = param_5 + param_4;
  if (param_3 < 0) {
    temp_v4 = 0;
  }
  temp_v3 = 0;
  if (param_3 >= 0) {
    temp_v4 = 1;
  }
  temp_v5 = 0x10244;
  temp_v0 = param_4;
  temp_v1 = param_4;
  FUN_00226138(&temp_v0,&temp_v4,8);
  FUN_003e2ba0(param_1,&temp_v0,param_2);
  if (-1 < param_3) {
    FUN_003e2ba0(param_1,&temp_v0,param_3);
  }
  FUN_003e2688(param_1,&temp_v0,param_2,param_3);
  return temp_v1 - temp_v0;
}
