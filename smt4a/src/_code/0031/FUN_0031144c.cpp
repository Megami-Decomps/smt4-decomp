/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031144c` (_code @ 0x31144c, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003026b0(unsigned int, unsigned int [2]);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_003026b0. */


unsigned int FUN_0031144c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = param_4;
  FUN_003026b0(param_1,temp_v0);
  return temp_v0[0];
}

} /* extern "C" */
