/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e40e4` (_code @ 0x2e40e4, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern unsigned int *FUN_002a8a08(void);


unsigned int FUN_002e40e4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002a8a08();
  FUN_0028df54(*puVar1);
  return 1;
}
