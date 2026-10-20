/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b1a28` (_code @ 0x3b1a28, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int FUN_003283ac(int);

/* Supplied declaration required: FUN_0019cac4. */
extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_003b1a28(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  
  temp_v0 = FUN_00236038();
  FUN_0019cac4();
  FUN_003283ac((*(unsigned short *)(temp_v0 + 0x16) & 0x1f) >> 4);
  return 1;
}

} /* extern "C" */
