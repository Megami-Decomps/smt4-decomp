/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ff6f8` (_code @ 0x2ff6f8, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_00226cb0. */
/* Supplied declaration required: FUN_002a2048. */
/* Supplied declaration required: FUN_002b4c30. */
/* Supplied declaration required: FUN_002e1450. */


void FUN_002ff6f8(unsigned int param_1,unsigned int *param_2,int param_3)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  int in_s0;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (param_3 != 0) {
    FUN_002b4c30();
  }
  else {
    FUN_002e1450();
  }
  if (in_s0 != 0x3f800000) {
    FUN_00226cb0(param_1,&temp_v0,2);
  }
  if (param_2 != (unsigned int *)0x0) {
    temp_v0 = *param_2;
    temp_v1 = param_2[1];
    temp_v2 = param_2[2];
    FUN_002a2048(param_1,&temp_v0,2);
  }
  return;
}
