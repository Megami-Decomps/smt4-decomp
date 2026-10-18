/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a0640` (_code @ 0x2a0640, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern int FUN_002c583c(unsigned int);
/* Supplied declaration required: FUN_0032c94c. */


void FUN_002a0640(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c583c(1);
  if (temp_v0 == 0) {
    FUN_0032c94c(param_1,param_2,param_3);
    return;
  }
  return;
}
