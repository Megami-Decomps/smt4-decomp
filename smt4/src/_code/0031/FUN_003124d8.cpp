/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003124d8` (_code @ 0x3124d8, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern int FUN_00296cc8(void);


unsigned int FUN_003124d8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002939f4();
  FUN_0028dcb0(*(short *)(temp_v1 + 0x1fca) <= temp_v0);
  return 1;
}

} /* extern "C" */
