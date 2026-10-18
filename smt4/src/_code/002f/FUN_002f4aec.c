/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4aec` (_code @ 0x2f4aec, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_002c08f0(void);
/* Supplied declaration required: FUN_0034291c. */
/* Supplied declaration required: FUN_00349214. */


unsigned int FUN_002f4aec(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)FUN_002c08f0();
  temp_v0 = *(char *)(puVar2 + 2);
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 == '\x02') {
        FUN_00349214(puVar2[1]);
      }
    }
    else {
      FUN_0034291c(*puVar2);
    }
  }
  return 0;
}
