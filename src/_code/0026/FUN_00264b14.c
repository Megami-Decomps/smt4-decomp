/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00264b14` (_code @ 0x264b14, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0039680c. */
/* Supplied declaration required: FUN_00396d24. */


void FUN_00264b14(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((*param_1 & 1) == 0) {
    if ((*param_1 & 2) == 0) {
      temp_v0 = param_1[3];
      param_1[3] = temp_v0 + 1;
      if ((int)(temp_v0 + 1) >= 0x78) {
        param_1[3] = 0;
        FUN_00396d24(param_1,2);
      }
    }
    FUN_0039680c(param_1);
    return;
  }
  return;
}
