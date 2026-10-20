/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ab68` (_code @ 0x30ab68, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026ae68(void);

extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_0026ae68. */


void FUN_0030ab68(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  temp_v0 = DAT_0044e190;
  puVar3 = (unsigned int *)(DAT_0044e190 + 0x400);
  *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
  temp_v1 = *(unsigned int *)(temp_v0 + 0x400);
  *puVar3 = 6;
  *(unsigned int *)(temp_v0 + 0x404) = temp_v1;
  FUN_0026ae68();
  *(unsigned char *)(temp_v0 + 0x2391) = 0;
  return;
}

} /* extern "C" */
