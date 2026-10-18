/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033fa54` (_code @ 0x33fa54, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002adf14. */
/* Supplied declaration required: FUN_002c3b48. */


void FUN_0033fa54(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned short temp_v2;
  
  temp_v0 = FUN_002adf14();
  FUN_002c3b48(temp_v0,0x888);
  temp_v2 = 0x15e;
  do {
    temp_v1 = FUN_002adf14();
    pbVar3 = (unsigned char *)(temp_v1 + temp_v2 * 4 + 0x200);
    if (pbVar3 != (unsigned char *)0x0) {
      *pbVar3 = *pbVar3 | 0x20;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 400);
  return;
}
