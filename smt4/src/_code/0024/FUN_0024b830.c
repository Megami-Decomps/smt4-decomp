/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024b830` (_code @ 0x24b830, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


unsigned int FUN_0024b830(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  
  if (param_1 == (unsigned int *)0x0) {
    param_1 = (unsigned int *)0x4d9748;
  }
  temp_v0 = param_1[1];
  temp_v1 = param_1[2];
  param_1[2] = temp_v0;
  param_1[1] = *param_1;
  temp_v0 = ((temp_v0 << 2) | (*param_1 >> 0x1e)) ^ ((param_1[3] << 1) | (temp_v1 >> 0x1f));
  *param_1 = temp_v0;
  param_1[3] = temp_v1;
  temp_v0 = temp_v0 & 0xffffff;
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return temp_v0;
}
