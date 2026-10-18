/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a90f0` (_code @ 0x3a90f0, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0014aa78(void);
extern unsigned int FUN_00236038(unsigned int);
extern int FUN_003e7b2c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003f2230. */
extern int FUN_003f25b4(unsigned int, unsigned int);


unsigned char FUN_003a90f0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_0014aa78();
  temp_v2 = FUN_003f25b4(temp_v1,0);
  if (temp_v2 != 0) {
    temp_v2 = FUN_003e7b2c(temp_v1,0);
    return temp_v2 != 0;
  }
  FUN_003f2230(temp_v1,0,temp_v0);
  return 0;
}
