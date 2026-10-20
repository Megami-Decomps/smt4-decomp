/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275ffc` (_code @ 0x275ffc, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00154710(unsigned char [16]);

/* Supplied declaration required: FUN_00154710. */
extern int FUN_00180008(unsigned int);


void FUN_00275ffc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [16];
  
  temp_v0 = FUN_00180008(1);
  if (temp_v0 == 0) {
    FUN_00154710(temp_v1);
  }
  return;
}

} /* extern "C" */
