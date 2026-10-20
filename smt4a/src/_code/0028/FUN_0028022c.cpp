/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028022c` (_code @ 0x28022c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042d368(void);

extern unsigned int asdMemoryGetAllocatorC(void);
/* Supplied declaration required: FUN_0042d368. */


unsigned char FUN_0028022c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = asdMemoryGetAllocatorC();
  FUN_0042d368();
  return (temp_v0 & 0x80000000) == 0;
}

} /* extern "C" */
