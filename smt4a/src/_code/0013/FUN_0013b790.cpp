/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b790` (_code @ 0x13b790, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005c0ae4; /* 0x5c0ae4 */

extern int FUN_0016f988(unsigned int *, unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002e3390(unsigned int);


int FUN_0013b790(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if (DAT_005c0ae4 == 0) {
    temp_v0 = FUN_002e3390(0x561cd4);
    temp_v1 = FUN_0016f988((unsigned int *)&DAT_005c0ae4,0x561cd4,temp_v0,0);
    if (temp_v1 < 0) {
      return temp_v1;
    }
  }
  return 0;
}

} /* extern "C" */
