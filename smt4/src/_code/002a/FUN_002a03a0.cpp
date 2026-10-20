/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a03a0` (_code @ 0x2a03a0, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0032c718(unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern int FUN_002c564c(unsigned int);
/* Supplied declaration required: FUN_0032c718. */


void FUN_002a03a0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 == 0) {
    FUN_0032c718(param_1,param_2,param_3);
    return;
  }
  return;
}

} /* extern "C" */
