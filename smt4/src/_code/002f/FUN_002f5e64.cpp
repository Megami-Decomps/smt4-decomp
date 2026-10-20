/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5e64` (_code @ 0x2f5e64, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int FUN_0028e9d4(unsigned int);


unsigned int FUN_002f5e64(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0;
  temp_v2 = 0x79f;
  do {
    temp_v1 = FUN_0028e9d4(temp_v2);
    if (temp_v1 != 0) {
      temp_v0 = 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x803);
  scrSetResult(temp_v0);
  return 1;
}

} /* extern "C" */
