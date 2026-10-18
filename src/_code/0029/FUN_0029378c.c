/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029378c` (_code @ 0x29378c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0023e434. */


void FUN_0029378c(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *(unsigned int *)(param_1 + 0x3c) = param_2;
  temp_v0 = 0;
  temp_v1 = 0;
  FUN_0023e434(param_1,&temp_v0,&temp_v1);
  *(unsigned int *)(param_1 + 0x2c) = temp_v0;
  *(unsigned int *)(param_1 + 0x30) = temp_v1;
  return;
}
