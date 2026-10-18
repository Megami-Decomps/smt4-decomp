/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025c4d0` (_code @ 0x25c4d0, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00119b48. */
extern int FUN_002c583c(unsigned int);


void FUN_0025c4d0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [16];
  
  temp_v0 = FUN_002c583c(1);
  if (temp_v0 == 0) {
    FUN_00119b48(temp_v1);
  }
  return;
}
