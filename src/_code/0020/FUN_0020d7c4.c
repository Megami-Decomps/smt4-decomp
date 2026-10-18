/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020d7c4` (_code @ 0x20d7c4, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_002a775c. */


void FUN_0020d7c4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_00447a78;
  puVar2 = (unsigned char *)(DAT_00447a78 + 0xcc10);
  FUN_002a775c(*(unsigned int *)(DAT_00447a78 + 0xcc2c));
  *(unsigned int *)(temp_v0 + 0xcc2c) = 0;
  *puVar2 = 0;
  return;
}
