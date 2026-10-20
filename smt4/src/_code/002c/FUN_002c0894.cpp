/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0894` (_code @ 0x2c0894, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: asdMemFree. */


void FUN_002c0894(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  *param_1 = temp_v0 - 1;
  if (temp_v0 - 1 != 0) {
    return;
  }
  if ((param_1[9] != 0) && ((param_1[0xb] & 0x10U) == 0)) {
    asdMemFree();
    param_1[9] = 0;
  }
  if (param_1[0x11] != 0) {
    asdMemFree();
    param_1[0x11] = 0;
  }
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
