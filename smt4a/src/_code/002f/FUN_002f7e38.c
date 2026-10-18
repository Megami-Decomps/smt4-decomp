/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7e38` (_code @ 0x2f7e38, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_002e9acc. */


void FUN_002f7e38(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_3;
  temp_v1 = param_4;
  FUN_002e9acc(&temp_v0);
  *(unsigned int *)(param_1 + 0x5c) = temp_v1;
  *(unsigned int *)(param_1 + 0x58) = temp_v0;
  return;
}
