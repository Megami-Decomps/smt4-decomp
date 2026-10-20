/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001950b0` (_code @ 0x1950b0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int *DAT_005b40e4; /* 0x5b40e4 */


void FUN_001950b0(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  if (DAT_005b40e0 + param_2 + 2 >= DAT_005b40e4) {
    DAT_005b40e0 = DAT_005b40e4;
  }
  else if (param_2 != 0) {
    temp_v0 = param_2 - 1;
    *DAT_005b40e0 = 0;
    DAT_005b40e0[1] = param_1 | (temp_v0 * 0x100000);
    if ((temp_v0 & 1) != 0) {
      temp_v0 = param_2;
    }
    DAT_005b40e0 = DAT_005b40e0 + temp_v0 + 2;
  }
  return;
}

} /* extern "C" */
