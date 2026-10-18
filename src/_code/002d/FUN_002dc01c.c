/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dc01c` (_code @ 0x2dc01c, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_002b66ec(void);


unsigned int FUN_002dc01c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b66ec();
  FUN_0028df54(*(unsigned char *)(temp_v0 + 0x76));
  return 1;
}
