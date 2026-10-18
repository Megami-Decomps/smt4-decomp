/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139f84` (_code @ 0x139f84, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_4_stack;


int FUN_00139f84(int param_1,int param_2,int param_3,int param_4)

{
  param_1 = param_1 - param_2;
  if (param_1 < -param_3) {
    param_2 = (int)(short)((short)param_2 + (short)((param_1 + param_3) * param_4 >> 7));
  }
  else if (param_3 < param_1) {
    return (int)(short)((short)param_2 + (short)((param_1 - param_3) * param_4 >> 7));
  }
  return param_2;
}
