/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039bc5c` (_code @ 0x39bc5c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);

extern unsigned char DAT_005f0c7c; /* 0x5f0c7c */

extern int gameFlagIsSet(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0039bc5c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = gameFlagIsSet();
  if (temp_v0 != 0) {
    scrSetResult((*(unsigned int *)((unsigned char *)&DAT_005f0c7c + 0x78)));
  }
  return 1;
}

} /* extern "C" */
