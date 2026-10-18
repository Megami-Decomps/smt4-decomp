/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efef0` (_code @ 0x2efef0, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_0026ae68. */


void FUN_002efef0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = DAT_0044e190;
  *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
  puVar2 = (unsigned int *)(temp_v0 + 0x400);
  temp_v1 = *puVar2;
  *puVar2 = 4;
  *(unsigned int *)(temp_v0 + 0x404) = temp_v1;
  FUN_0026ae68();
  return;
}
