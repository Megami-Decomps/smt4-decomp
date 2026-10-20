/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4f00` (_code @ 0x2f4f00, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sharedRefHolderDestroy(unsigned int *);
int FUN_002f674e(void);

extern unsigned char DAT_0055b0dc; /* 0x55b0dc */

/* Supplied declaration required: sharedRefHolderDestroy. */
/* Supplied declaration required: FUN_002f674e. */


void FUN_002f4f00(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055b0dc;
  if (param_1[0xd] != 0) {
    FUN_002f674e();
  }
  sharedRefHolderDestroy(param_1);
  return;
}

} /* extern "C" */
