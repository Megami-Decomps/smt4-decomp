/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5e20` (_code @ 0x2f5e20, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028df54. */
extern int FUN_0028ec78(unsigned int);


unsigned int FUN_002f5e20(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0;
  temp_v2 = 0x79f;
  do {
    temp_v1 = FUN_0028ec78(temp_v2);
    if (temp_v1 != 0) {
      temp_v0 = 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x803);
  FUN_0028df54(temp_v0);
  return 1;
}
