/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021a014` (_code @ 0x21a014, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_0024ffbc. */
/* Supplied declaration required: FUN_00250108. */
/* Supplied declaration required: FUN_002502e8. */
/* Supplied declaration required: FUN_00256c3c. */


void FUN_0021a014(unsigned int param_1,unsigned int *param_2,int param_3)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  int in_s0;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_3 != 0) {
    FUN_002502e8();
  }
  else {
    FUN_00256c3c();
  }
  if (in_s0 != 0x3f800000) {
    FUN_00250108(param_1,&temp_v0,2);
  }
  if (param_2 != (unsigned int *)0x0) {
    temp_v0 = *param_2;
    temp_v1 = param_2[1];
    temp_v2 = param_2[2];
    FUN_0024ffbc(param_1,&temp_v0,2);
  }
  return;
}
