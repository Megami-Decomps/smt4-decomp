/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037d740` (_code @ 0x37d740, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_strcmp(unsigned int, unsigned int);
int scrSetResult(void);

extern unsigned int FUN_0015687c(void);
extern unsigned int scrGetArgString(void);
/* Supplied declaration required: libc_strcmp. */
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0037d740(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = scrGetArgString();
  temp_v1 = FUN_0015687c();
  libc_strcmp(temp_v1,temp_v0);
  scrSetResult();
  return 1;
}

} /* extern "C" */
