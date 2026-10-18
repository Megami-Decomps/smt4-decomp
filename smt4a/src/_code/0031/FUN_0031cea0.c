/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cea0` (_code @ 0x31cea0, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f678; /* 0x57f678 */

/* Supplied declaration required: FUN_00231464. */


void FUN_0031cea0(char param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_00231464();
  temp_v0 = DAT_0057f678;
  *(char *)(DAT_0057f678 + 8) = param_1;
  if (param_1 == '\x02') {
    temp_v1 = 2;
  }
  else {
    temp_v1 = 1;
  }
  *(unsigned char *)(temp_v0 + 0x25) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  return;
}
