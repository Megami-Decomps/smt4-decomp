/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea9c0` (_code @ 0x2ea9c0, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e93da(void);
int FUN_002e9538(unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e93da. */
/* Supplied declaration required: FUN_002e9538. */


unsigned int FUN_002ea9c0(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  FUN_002e93da();
  FUN_002e9538(*(unsigned int *)(param_1 + 4),param_2);
  *(unsigned char *)(param_1 + 0x65) = 0;
  return 1;
}

} /* extern "C" */
