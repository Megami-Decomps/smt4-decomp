/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a2420` (_code @ 0x1a2420, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */


void FUN_001a2420(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  *param_1 = param_2;
  do {
    puVar3 = (unsigned int *)*param_1;
    temp_v1 = *puVar3;
    if ((temp_v1 & 0xff) >= 0xf) {
      temp_v1 = 0;
    }
    temp_v0 = (unsigned char)hasExclusiveAccess(puVar3);
  } while (!temp_v0);
  *puVar3 = temp_v1 & 0xff;
  return;
}
