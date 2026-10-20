/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f8264` (_code @ 0x4f8264, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);

/* Supplied declaration required: FUN_0014aa78. */
extern int FUN_003c5d8c(void);
extern int FUN_003e8430(void);


unsigned int FUN_004f8264(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  FUN_0014aa78();
  temp_v0 = FUN_003e8430();
  if ((temp_v0 != 0) || (temp_v0 = FUN_003c5d8c(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
