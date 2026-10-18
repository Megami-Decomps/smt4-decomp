/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aabb0` (_code @ 0x2aabb0, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int *DAT_004652a4; /* 0x4652a4 */


void FUN_002aabb0(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  if (DAT_004652a0 + param_2 + 2 >= DAT_004652a4) {
    DAT_004652a0 = DAT_004652a4;
  }
  else if (param_2 != 0) {
    temp_v0 = param_2 - 1;
    *DAT_004652a0 = 0;
    DAT_004652a0[1] = param_1 | (temp_v0 * 0x100000);
    if ((temp_v0 & 1) != 0) {
      temp_v0 = param_2;
    }
    DAT_004652a0 = DAT_004652a0 + temp_v0 + 2;
  }
  return;
}
