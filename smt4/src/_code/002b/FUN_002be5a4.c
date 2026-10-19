/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be5a4` (_code @ 0x2be5a4, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_002b2b88. */
extern unsigned int FUN_002c30c4(unsigned int);


void FUN_002be5a4(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002c30c4(param_3);
  FUN_002b2b88(param_2,param_1,param_3,temp_v0);
  return;
}
