/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4aa4` (_code @ 0x2f4aa4, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_002c0ac8(void);
/* Supplied declaration required: FUN_00342b54. */
/* Supplied declaration required: FUN_0034946c. */


unsigned int FUN_002f4aa4(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)FUN_002c0ac8();
  temp_v0 = *(char *)(puVar2 + 2);
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 == '\x02') {
        FUN_0034946c(puVar2[1]);
      }
    }
    else {
      FUN_00342b54(*puVar2);
    }
  }
  return 0;
}
