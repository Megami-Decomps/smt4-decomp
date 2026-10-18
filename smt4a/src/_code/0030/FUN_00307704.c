/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307704` (_code @ 0x307704, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00307ea0. */


void FUN_00307704(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = param_1[3];
  temp_v0 = param_1[2];
  FUN_00307ea0(&temp_v0,*param_1,param_1[1]);
  return;
}
