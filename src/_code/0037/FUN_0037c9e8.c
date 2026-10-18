/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c9e8` (_code @ 0x37c9e8, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int FUN_002bb020(void);
/* Supplied declaration required: FUN_0037a2a8. */


void FUN_0037c9e8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002bb020();
  FUN_0037a2a8(temp_v0,param_1);
  return;
}
