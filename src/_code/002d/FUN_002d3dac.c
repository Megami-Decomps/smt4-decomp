/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d3dac` (_code @ 0x2d3dac, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_002a7aa0. */


void FUN_002d3dac(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_00447a78;
  puVar2 = (unsigned char *)(DAT_00447a78 + 0xcbf0);
  FUN_002a7aa0(*(unsigned int *)(DAT_00447a78 + 0xcc0c));
  *(unsigned int *)(temp_v0 + 0xcc0c) = 0;
  *puVar2 = 0;
  return;
}
