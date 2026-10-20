/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035b0dc` (_code @ 0x35b0dc, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int flagValueSub(unsigned int, unsigned int);

extern unsigned int FUN_001ba3d4(unsigned int);
/* Supplied declaration required: flagValueSub. */


unsigned int FUN_0035b0dc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  temp_v2 = 0;
  do {
    temp_v0 = temp_v2 - 1;
    temp_v4 = temp_v0 >= 0x3b;
    temp_v3 = temp_v0 == 0x3b;
    if (temp_v0 >= 0x3c) {
      temp_v4 = temp_v2 - 0x79f >= 0x3f;
      temp_v3 = temp_v2 - 0x79f == 0x3f;
    }
    if (!temp_v4 || temp_v3) {
      temp_v1 = FUN_001ba3d4(temp_v2);
      flagValueSub(temp_v2,temp_v1);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x7df);
  return 1;
}

} /* extern "C" */
