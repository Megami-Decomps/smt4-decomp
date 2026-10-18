/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b11c` (_code @ 0x13b11c, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */


void FUN_0013b11c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  
  do {
    temp_v1 = *(unsigned int *)*param_1;
    if ((temp_v1 & 0xff) >= 0xf) {
      temp_v1 = 0;
    }
    temp_v0 = (unsigned char)hasExclusiveAccess((unsigned int *)*param_1);
  } while (!temp_v0);
  *(unsigned int *)*param_1 = temp_v1 & 0xff;
  *param_1 = 0;
  return;
}
