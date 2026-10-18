/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003af9ac` (_code @ 0x3af9ac, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f590; /* 0x57f590 */

/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_003d2158. */


unsigned int FUN_003af9ac(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f590;
  FUN_001846d0(DAT_0057f590 + 0xb00,2);
  *(unsigned char *)(temp_v0 + 0x17c) = 4;
  if (*(int *)(temp_v0 + 0x18c) != 0) {
    FUN_003d2158(*(int *)(temp_v0 + 0x18c),0);
    *(unsigned int *)(temp_v0 + 0x18c) = 0;
  }
  return 1;
}
