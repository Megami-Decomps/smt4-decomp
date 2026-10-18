/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029e990` (_code @ 0x29e990, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0029d100. */


unsigned int FUN_0029e990(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (*param_1 >> 0x1e == 3) {
    temp_v1 = *param_1 & 0x7fff;
    FUN_0029d100(temp_v1,1,0,0,0);
  }
  if ((param_1[1] & 3) == 3) {
    temp_v0 = (*param_1 & 0x3fffffff) >> 0xf;
    FUN_0029d100(temp_v0,1,0,0,0);
    temp_v1 = temp_v1 + temp_v0;
  }
  return temp_v1;
}
