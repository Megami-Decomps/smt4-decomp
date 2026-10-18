/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002570a8` (_code @ 0x2570a8, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00207470. */
/* Supplied declaration required: FUN_00253ce4. */
/* Supplied declaration required: FUN_00253d24. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_002570a8(unsigned short *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = (unsigned int)*param_1;
  temp_v1 = (*param_1 & 0x200) == 0;
  if (!temp_v1) {
    temp_v0 = *(unsigned int *)(param_1 + 6);
  }
  if (!(temp_v1 || temp_v0 == 0)) {
    FUN_00207470();
  }
  else {
    FUN_00253d24(*(unsigned int *)(param_1 + 4));
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00253ce4();
      FUN_002b2368();
    }
  }
  if (*(int *)(param_1 + 2) != 0) {
    FUN_002c0894();
  }
  FUN_002c415c(param_1);
  return;
}
