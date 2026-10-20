/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ed5c0` (_code @ 0x1ed5c0, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrGetArgString(int);

extern unsigned int FUN_00100bd4(void);
extern int FUN_001eb398(unsigned int, unsigned int);
/* Supplied declaration required: scrGetArgString. */
extern unsigned int scrGetArg(unsigned int);


unsigned char FUN_001ed5c0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  scrGetArgString(1);
  temp_v1 = FUN_00100bd4();
  temp_v2 = FUN_001eb398(temp_v0,temp_v1);
  return temp_v2 != 0;
}

} /* extern "C" */
