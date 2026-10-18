/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1408` (_code @ 0x2c1408, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014af84(void);
/* Supplied declaration required: FUN_004d0d70. */


unsigned int FUN_002c1408(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0014af84();
  temp_v1 = 0;
  *(unsigned short *)(temp_v0 + 0x27e0c) = 0;
  do {
    FUN_004d0d70(temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  return 1;
}
