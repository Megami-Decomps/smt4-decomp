/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103fa4` (_code @ 0x103fa4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea0c8(int, unsigned char *);

extern unsigned char LAB_00103fd0; /* 0x103fd0 */

/* Supplied declaration required: FUN_002ea0c8. */


void FUN_00103fa4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0x24) != 0) {
    *(unsigned int *)(param_1 + 0x24) = 0;
  }
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  FUN_002ea0c8(param_1 + 0x14,&LAB_00103fd0);
  FUN_002ea0c8(param_1 + 0x1c,&LAB_00103fd0);
  return;
}

} /* extern "C" */
