/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106e10` (_code @ 0x106e10, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00471b64; /* 0x471b64 */

extern int FUN_002c1364(unsigned int *, unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002c30c4(unsigned int);


int FUN_00106e10(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  if (DAT_00471b64 == 0) {
    temp_v0 = FUN_002c30c4(0x425d76);
    temp_v1 = FUN_002c1364((unsigned int *)&DAT_00471b64,0x425d76,temp_v0,0);
    if (temp_v1 < 0) {
      return temp_v1;
    }
  }
  return 0;
}
