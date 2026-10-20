/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fa734` (_code @ 0x1fa734, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerDestroy(unsigned int);

/* Supplied declaration required: asdMdlManagerDestroy. */


void FUN_001fa734(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  asdMdlManagerDestroy(*(unsigned int *)(temp_v0 + 0xcbec));
  *(unsigned int *)(temp_v0 + 0xcbec) = 0;
  *(unsigned char *)(temp_v0 + 0xcbd0) = 0;
  return;
}

} /* extern "C" */
