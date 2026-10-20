/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003106e8` (_code @ 0x3106e8, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002897b0(int);

/* Supplied declaration required: FUN_002897b0. */
extern int FUN_002897e0(void);


unsigned int FUN_003106e8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002897e0();
  if (temp_v0 != 0) {
    FUN_002897b0(1);
  }
  return 1;
}

} /* extern "C" */
