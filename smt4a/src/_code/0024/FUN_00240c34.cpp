/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00240c34` (_code @ 0x240c34, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167f94(void);
int FUN_002e6354(unsigned char [256], int);

/* Supplied declaration required: FUN_00167f94. */
/* Supplied declaration required: FUN_002e6354. */


void FUN_00240c34(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [256];
  
  FUN_002e6354(temp_v0,0x100);
  FUN_00167f94();
  return;
}

} /* extern "C" */
