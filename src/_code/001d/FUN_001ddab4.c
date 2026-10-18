/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ddab4` (_code @ 0x1ddab4, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_002bdac0. */


void FUN_001ddab4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v0 = DAT_0044e190;
  FUN_002bdac0(DAT_0044e190 + 0x28,1,0);
  temp_v1 = DAT_0044e190;
  *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
  puVar3 = (unsigned int *)(temp_v1 + 0x400);
  temp_v2 = *puVar3;
  *puVar3 = 1;
  *(unsigned int *)(temp_v1 + 0x404) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x408) = 3;
  return;
}
