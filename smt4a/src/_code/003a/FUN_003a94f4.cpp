/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a94f4` (_code @ 0x3a94f4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int scrSetResult(int);

/* Supplied declaration required: FUN_00184310. */
extern unsigned int scrGetArg(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003a94f4(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = 0;
  FUN_00184310();
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned char *)(temp_v0 + 0x39);
  }
  scrSetResult(temp_v1);
  return 1;
}

} /* extern "C" */
